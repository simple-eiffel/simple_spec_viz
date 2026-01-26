# SPECIFICATION: simple_spec_viz

## Overview

simple_spec_viz is a lightweight, Eiffel-native specification visualization tool that transforms GUI specifications (JSON) into visual diagrams for early validation. It generates state machine diagrams, screen mockups, and traceability matrices from a single JSON spec file, enabling spec-driven GUI development with rapid feedback loops.

**Core Value:** Closes gap between specification (eiffel-spec) and implementation (simple_vision) with visual validation before code.

**Architecture:** Facade (SIMPLE_SPEC_VIZ) coordinates SPEC_LOADER and multiple generators (state diagram, screen mockup, traceability).

---

## Key Classes (Formal Specification)

### SIMPLE_SPEC_VIZ (Facade)

```eiffel
note
    description: "Facade for GUI specification visualization"
    author: "Larry Rix"

class
    SIMPLE_SPEC_VIZ

create
    make

feature {NONE} -- Initialization

    make
            -- Create instance with loaders and generators initialized.
        do
            create loader.make
            create state_diagram_gen.make
            create screen_mockup_gen.make
            create traceability_gen.make
        ensure
            loader_created: loader /= Void
            state_diagram_gen_created: state_diagram_gen /= Void
            screen_mockup_gen_created: screen_mockup_gen /= Void
            traceability_gen_created: traceability_gen /= Void
        end

feature -- Access

    loader: SPEC_LOADER
            -- JSON specification loader.

    state_diagram_gen: STATE_DIAGRAM_GENERATOR
            -- State machine diagram generator.

    screen_mockup_gen: SCREEN_MOCKUP_GENERATOR
            -- Screen mockup generator.

    traceability_gen: TRACEABILITY_REPORT_GENERATOR
            -- Traceability report generator.

    last_error: detachable STRING
            -- Last error message, if any.

feature -- Loading

    load_from_file (a_path: STRING): detachable SPEC_DOCUMENT
            -- Load specification from JSON file.
            -- Returns Void and sets last_error on failure.
        require
            path_not_void: a_path /= Void
            path_not_empty: not a_path.is_empty
        do
            last_error := Void
            Result := loader.load_from_file (a_path)
            if Result = Void then
                last_error := loader.last_error
            end
        ensure
            error_on_failure: Result = Void implies last_error /= Void
        end

    load_from_json (a_json: STRING): detachable SPEC_DOCUMENT
            -- Load specification from JSON string.
        require
            json_not_void: a_json /= Void
            json_not_empty: not a_json.is_empty
        do
            last_error := Void
            Result := loader.load_from_string (a_json)
            if Result = Void then
                last_error := loader.last_error
            end
        ensure
            error_on_failure: Result = Void implies last_error /= Void
        end

feature -- Generation

    generate_state_diagram (a_doc: SPEC_DOCUMENT): SPEC_VIZ_RESULT
            -- Generate state machine diagram as SVG.
        require
            doc_not_void: a_doc /= Void
        do
            Result := state_diagram_gen.generate (a_doc)
        ensure
            result_not_void: Result /= Void
        end

    generate_screen_mockups (a_doc: SPEC_DOCUMENT): ARRAYED_LIST [SPEC_VIZ_RESULT]
            -- Generate screen mockups as SVG (one per screen).
        require
            doc_not_void: a_doc /= Void
        do
            Result := screen_mockup_gen.generate_all (a_doc)
        ensure
            result_not_void: Result /= Void
            count_matches: Result.count = a_doc.screens.count
        end

    generate_traceability_report (a_doc: SPEC_DOCUMENT): SPEC_VIZ_RESULT
            -- Generate traceability report as Markdown.
        require
            doc_not_void: a_doc /= Void
        do
            Result := traceability_gen.generate (a_doc)
        ensure
            result_not_void: Result /= Void
        end

feature -- Batch Generation

    generate_all (a_doc: SPEC_DOCUMENT; a_output_dir: STRING): BOOLEAN
            -- Generate all outputs to directory.
            -- Returns True on success, False on failure (sets last_error).
        require
            doc_not_void: a_doc /= Void
            output_dir_not_void: a_output_dir /= Void
            output_dir_not_empty: not a_output_dir.is_empty
        local
            l_state_result: SPEC_VIZ_RESULT
            l_screen_results: ARRAYED_LIST [SPEC_VIZ_RESULT]
            l_trace_result: SPEC_VIZ_RESULT
        do
            last_error := Void
            Result := True

            -- Generate state diagram
            l_state_result := generate_state_diagram (a_doc)
            if l_state_result.is_success then
                if not save_to_file (l_state_result.content, a_output_dir + "/state_machine.svg") then
                    Result := False
                end
            else
                last_error := l_state_result.error_message
                Result := False
            end

            -- Generate screen mockups
            if Result then
                l_screen_results := generate_screen_mockups (a_doc)
                across l_screen_results as ic loop
                    if ic.is_success then
                        if not save_to_file (ic.content, a_output_dir + "/" + ic.name + ".svg") then
                            Result := False
                        end
                    else
                        last_error := ic.error_message
                        Result := False
                    end
                end
            end

            -- Generate traceability report
            if Result then
                l_trace_result := generate_traceability_report (a_doc)
                if l_trace_result.is_success then
                    if not save_to_file (l_trace_result.content, a_output_dir + "/traceability.md") then
                        Result := False
                    end
                else
                    last_error := l_trace_result.error_message
                    Result := False
                end
            end
        ensure
            error_on_failure: not Result implies last_error /= Void
        end

feature {NONE} -- Implementation

    save_to_file (a_content: STRING; a_path: STRING): BOOLEAN
            -- Save content to file. Returns True on success.
        require
            content_not_void: a_content /= Void
            path_not_void: a_path /= Void
        local
            l_file: PLAIN_TEXT_FILE
        do
            create l_file.make_open_write (a_path)
            if l_file.is_open_write then
                l_file.put_string (a_content)
                l_file.close
                Result := True
            else
                last_error := "Cannot write to file: " + a_path
            end
        end

invariant
    loader_not_void: loader /= Void
    state_diagram_gen_not_void: state_diagram_gen /= Void
    screen_mockup_gen_not_void: screen_mockup_gen /= Void
    traceability_gen_not_void: traceability_gen /= Void

end
```

---

### SPEC_DOCUMENT (Container)

```eiffel
note
    description: "GUI specification document: states, transitions, screens"

class
    SPEC_DOCUMENT

create
    make

feature {NONE} -- Initialization

    make (a_name, a_version: STRING)
            -- Create specification with name and version.
        require
            name_not_void: a_name /= Void
            name_not_empty: not a_name.is_empty
            version_not_void: a_version /= Void
        do
            name := a_name
            version := a_version
            create states.make (10)
            create transitions.make (20)
            create screens.make (10)
            create traceability.make
        ensure
            name_set: name = a_name
            version_set: version = a_version
            states_empty: states.is_empty
            transitions_empty: transitions.is_empty
            screens_empty: screens.is_empty
        end

feature -- Access

    name: STRING
            -- Specification name.

    version: STRING
            -- Specification version.

    states: ARRAYED_LIST [SPEC_STATE]
            -- All states in state machine.

    transitions: ARRAYED_LIST [SPEC_TRANSITION]
            -- All transitions between states.

    screens: ARRAYED_LIST [SPEC_SCREEN]
            -- All UI screens in specification.

    traceability: TRACEABILITY_MATRIX
            -- Requirements to states/screens mapping.

feature -- Queries

    state_by_id (a_id: STRING): detachable SPEC_STATE
            -- Find state by ID.
        require
            id_not_void: a_id /= Void
        do
            across states as ic until Result /= Void loop
                if ic.id.same_string (a_id) then
                    Result := ic
                end
            end
        ensure
            found_has_id: attached Result as r implies r.id.same_string (a_id)
        end

    screen_by_id (a_id: STRING): detachable SPEC_SCREEN
            -- Find screen by ID.
        require
            id_not_void: a_id /= Void
        do
            across screens as ic until Result /= Void loop
                if ic.id.same_string (a_id) then
                    Result := ic
                end
            end
        ensure
            found_has_id: attached Result as r implies r.id.same_string (a_id)
        end

    initial_state: detachable SPEC_STATE
            -- The initial state, if defined.
        do
            across states as ic until Result /= Void loop
                if ic.is_initial then
                    Result := ic
                end
            end
        ensure
            is_initial: attached Result as r implies r.is_initial
        end

    final_states: ARRAYED_LIST [SPEC_STATE]
            -- All final states.
        do
            create Result.make (states.count)
            across states as ic loop
                if ic.is_final then
                    Result.extend (ic)
                end
            end
        ensure
            result_not_void: Result /= Void
            all_final: across Result as ic all ic.is_final end
        end

    transitions_from (a_state_id: STRING): ARRAYED_LIST [SPEC_TRANSITION]
            -- All transitions originating from state.
        require
            state_id_not_void: a_state_id /= Void
        do
            create Result.make (transitions.count)
            across transitions as ic loop
                if ic.from_state_id.same_string (a_state_id) then
                    Result.extend (ic)
                end
            end
        ensure
            result_not_void: Result /= Void
        end

feature -- Model Queries

    states_model: MML_SET [STRING]
            -- Set of all state IDs for MML contracts.
        do
            create Result.default_create
            across states as ic loop
                Result := Result & ic.id
            end
        end

feature -- Element Change

    add_state (a_state: SPEC_STATE)
            -- Add state to document.
        require
            state_not_void: a_state /= Void
            not_duplicate: state_by_id (a_state.id) = Void
        do
            states.extend (a_state)
        ensure
            state_added: states.has (a_state)
            count_increased: states.count = old states.count + 1
        end

    add_transition (a_transition: SPEC_TRANSITION)
            -- Add transition to document.
        require
            transition_not_void: a_transition /= Void
        do
            transitions.extend (a_transition)
        ensure
            transition_added: transitions.has (a_transition)
            count_increased: transitions.count = old transitions.count + 1
        end

    add_screen (a_screen: SPEC_SCREEN)
            -- Add screen to document.
        require
            screen_not_void: a_screen /= Void
            not_duplicate: screen_by_id (a_screen.id) = Void
        do
            screens.extend (a_screen)
        ensure
            screen_added: screens.has (a_screen)
            count_increased: screens.count = old screens.count + 1
        end

invariant
    name_not_void: name /= Void
    name_not_empty: not name.is_empty
    version_not_void: version /= Void
    states_not_void: states /= Void
    transitions_not_void: transitions /= Void
    screens_not_void: screens /= Void
    traceability_not_void: traceability /= Void

end
```

### STATE_DIAGRAM_GENERATOR (Generator)

```eiffel
note
    description: "Generate state machine diagrams from SPEC_DOCUMENT"

class
    STATE_DIAGRAM_GENERATOR

create
    make

feature {NONE} -- Initialization

    make
            -- Initialize generator with GraphViz adapter.
        do
            create adapter.make
        ensure
            adapter_created: adapter /= Void
        end

feature -- Generation

    generate (a_doc: SPEC_DOCUMENT): SPEC_VIZ_RESULT
            -- Generate state machine diagram SVG from document.
        require
            doc_not_void: a_doc /= Void
        local
            l_dot: STRING
            l_svg: detachable STRING
        do
            -- Build DOT representation
            l_dot := build_dot (a_doc)

            -- Render to SVG via GraphViz
            l_svg := adapter.render_to_svg (l_dot)

            if l_svg /= Void then
                create Result.make_success (l_svg, "state_machine.svg")
            else
                create Result.make_error (adapter.last_error)
            end
        ensure
            result_not_void: Result /= Void
        end

feature {NONE} -- Implementation

    adapter: GRAPHVIZ_ADAPTER
            -- Renders DOT to SVG.

    build_dot (a_doc: SPEC_DOCUMENT): STRING
            -- Build GraphViz DOT representation of state machine.
        require
            doc_not_void: a_doc /= Void
        do
            -- Create DOT graph:
            -- - Nodes for states (initial/final marked)
            -- - Edges for transitions (labeled with event + guard)
            -- - Return DOT string
        ensure
            result_not_void: Result /= Void
        end

invariant
    adapter_not_void: adapter /= Void

end
```

---

## File Organization

```
src/
├── simple_spec_viz.e                (200 lines - Facade)
├── spec_loader.e                    (250 lines - Loader)
├── spec_document.e                  (200 lines - Container)
├── spec_state.e                     (100 lines - Model)
├── spec_transition.e                (120 lines - Model)
├── spec_screen.e                    (150 lines - Model)
├── spec_widget.e                    (120 lines - Model)
├── state_diagram_generator.e        (300 lines - Generator)
├── screen_mockup_generator.e        (250 lines - Generator)
├── traceability_report_generator.e  (200 lines - Generator)
├── spec_viz_result.e                (80 lines - Data)
├── traceability_matrix.e            (100 lines - Model)
├── spec_requirement.e               (80 lines - Model)
└── graphviz_adapter.e               (120 lines - Utility)

Total: ~2,170 lines new specification
Existing: ~2,631 lines (already completed Jan 24-25)
Phase 1 Total: ~4,800 lines
```

---

## Dependencies

| Library | Version | Purpose | Usage |
|---------|---------|---------|-------|
| simple_graphviz | 1.0.0+ | State diagram rendering | STATE_DIAGRAM_GENERATOR |
| simple_json | Latest | JSON parsing | SPEC_LOADER |
| simple_process | Latest | GraphViz subprocess | GRAPHVIZ_ADAPTER |
| simple_file | Latest | File I/O | SPEC_LOADER, save_to_file |
| base (ISE) | 25.02+ | Eiffel standard library | All classes |
| simple_mml | 1.0.1+ | MML contracts | Model queries |

---

## Specification Ready for Implementation

✓ All 14 classes designed with full contracts
✓ All interfaces defined (public/private)
✓ All data flows documented
✓ All error handling patterns specified
✓ All integration points defined
✓ MML model queries specified
✓ File structure documented
✓ Dependencies declared

**Status:** READY FOR PHASE 1 IMPLEMENTATION
