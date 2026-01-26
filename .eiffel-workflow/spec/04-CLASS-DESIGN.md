# CLASS DESIGN: simple_spec_viz

## Class Inventory

| Class | Role | Responsibility | Location |
|-------|------|-----------------|----------|
| SIMPLE_SPEC_VIZ | Facade | Coordinate loading, generation, error reporting | simple_spec_viz.e |
| SPEC_LOADER | Parser | Load JSON, validate, build SPEC_DOCUMENT | spec_loader.e |
| SPEC_DOCUMENT | Container | Hold states, transitions, screens, traceability | spec_document.e |
| SPEC_STATE | Model | Represent state with ID, label, initial/final flags, actions | spec_state.e |
| SPEC_TRANSITION | Model | Represent state transition with event, guard, action | spec_transition.e |
| SPEC_SCREEN | Model | Represent screen with ID, name, layout, widgets | spec_screen.e |
| SPEC_WIDGET | Model | Represent UI control with type, label, position | spec_widget.e |
| STATE_DIAGRAM_GENERATOR | Generator | Transform state machine into GraphViz DOT → SVG | state_diagram_generator.e |
| SCREEN_MOCKUP_GENERATOR | Generator | Transform screens into SVG mockups | screen_mockup_generator.e |
| TRACEABILITY_REPORT_GENERATOR | Generator | Generate markdown traceability matrix | traceability_report_generator.e |
| SPEC_VIZ_RESULT | Data | Hold success/content or error message | spec_viz_result.e |
| TRACEABILITY_MATRIX | Model | Map requirements to states/screens | traceability_matrix.e |
| SPEC_REQUIREMENT | Model | Represent requirement for traceability | spec_requirement.e |
| GRAPHVIZ_ADAPTER | Utility | Isolate simple_graphviz dependency | graphviz_adapter.e |

---

## Facade Design: SIMPLE_SPEC_VIZ

**Purpose:** Single entry point for library; coordinates complex subsystems
**Responsibility:** Load specs, delegate to generators, report errors

```eiffel
class SIMPLE_SPEC_VIZ

create
    make

feature {NONE} -- Initialization

    make
        -- Create unconfigured instance.
        do
            create loader.make
            create state_diagram_gen.make
            create screen_mockup_gen.make
            create traceability_gen.make
        ensure
            loaders_created: loader /= Void
            generators_created: state_diagram_gen /= Void and ...
        end

feature -- Access

    loader: SPEC_LOADER
    state_diagram_gen: STATE_DIAGRAM_GENERATOR
    screen_mockup_gen: SCREEN_MOCKUP_GENERATOR
    traceability_gen: TRACEABILITY_REPORT_GENERATOR
    last_error: detachable STRING

feature -- Loading

    load_from_file (a_path: STRING): detachable SPEC_DOCUMENT
        -- Load specification from JSON file.
        -- Sets last_error on failure.
        require
            path_not_void: a_path /= Void
        do
            Result := loader.load_from_file (a_path)
            if Result = Void then
                last_error := loader.last_error
            end
        ensure
            error_on_failure: Result = Void implies last_error /= Void
        end

feature -- Generation

    generate_state_diagram (a_doc: SPEC_DOCUMENT): SPEC_VIZ_RESULT
        -- Generate state machine diagram SVG.
        require
            doc_not_void: a_doc /= Void
        do
            Result := state_diagram_gen.generate (a_doc)
        ensure
            result_not_void: Result /= Void
        end

    generate_screen_mockups (a_doc: SPEC_DOCUMENT): ARRAYED_LIST [SPEC_VIZ_RESULT]
        -- Generate screen mockup SVGs (one per screen).
        require
            doc_not_void: a_doc /= Void
        do
            Result := screen_mockup_gen.generate_all (a_doc)
        ensure
            result_not_void: Result /= Void
            count_matches_screens: Result.count = a_doc.screens.count
        end

    generate_traceability_report (a_doc: SPEC_DOCUMENT): SPEC_VIZ_RESULT
        -- Generate traceability matrix as Markdown.
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
        require
            doc_not_void: a_doc /= Void
            output_dir_not_void: a_output_dir /= Void
        do
            -- Generate state diagram
            -- Generate screen mockups
            -- Generate traceability report
            -- Save all to files
            Result := True -- on success
        ensure
            error_on_failure: not Result implies last_error /= Void
        end

invariant
    loader_not_void: loader /= Void
    generators_not_void: state_diagram_gen /= Void and screen_mockup_gen /= Void
end
```

---

## Generator Pattern: STATE_DIAGRAM_GENERATOR

**Purpose:** Transform state machine into visual diagram
**Responsibility:** Create DOT representation, invoke GraphViz, return SVG

```eiffel
class STATE_DIAGRAM_GENERATOR

create
    make

feature -- Generation

    generate (a_doc: SPEC_DOCUMENT): SPEC_VIZ_RESULT
        -- Generate state machine diagram from document.
        require
            doc_not_void: a_doc /= Void
        do
            -- 1. Build DOT representation
            -- 2. Invoke GraphViz
            -- 3. Return SVG or error
        ensure
            result_not_void: Result /= Void
        end

invariant
    graphviz_adapter_ready: adapter /= Void
end
```

---

## Model Classes: SPEC_STATE, SPEC_TRANSITION

**Responsibility:** Hold specification data with invariants

```eiffel
class SPEC_STATE

create
    make

feature {NONE} -- Initialization

    make (a_id, a_label: STRING)
        require
            id_not_empty: not a_id.is_empty
            label_not_empty: not a_label.is_empty
        do
            id := a_id
            label := a_label
        ensure
            id_set: id = a_id
        end

feature -- Access

    id: STRING
    label: STRING
    is_initial: BOOLEAN
    is_final: BOOLEAN
    entry_action: detachable STRING
    exit_action: detachable STRING

feature -- Change

    set_initial (a_flag: BOOLEAN)
        do
            is_initial := a_flag
        ensure
            set: is_initial = a_flag
            exclusive: is_initial implies not is_final
        end

invariant
    not_both_initial_final: not (is_initial and is_final)
    id_not_empty: not id.is_empty
end
```

---

## Data Class: SPEC_VIZ_RESULT

**Responsibility:** Hold result of generation (success or error)
**Immutable:** YES

```eiffel
class SPEC_VIZ_RESULT

feature -- Access

    is_success: BOOLEAN
        do
            Result := content /= Void
        end

    content: detachable STRING
    error_message: detachable STRING
    name: detachable STRING

invariant
    success_xor_error: is_success xor (error_message /= Void)
    success_has_content: is_success implies content /= Void
end
```

---

## Inheritance Strategy

**NO INHERITANCE** for domain classes (SPEC_STATE, SPEC_TRANSITION, SPEC_SCREEN)
- Each is concrete, not part of hierarchy
- OOSC2: Inherit interface AND implementation
- No valid IS-A relationships in domain

**GENERATOR CLASSES** consider common interface:
```eiffel
deferred class GENERATOR
    deferred
        generate: SPEC_VIZ_RESULT
    end
end

class STATE_DIAGRAM_GENERATOR inherit GENERATOR ...
class SCREEN_MOCKUP_GENERATOR inherit GENERATOR ...
class TRACEABILITY_REPORT_GENERATOR inherit GENERATOR ...
```

**Justification:** All generators share generate → SPEC_VIZ_RESULT contract
Liskov: Any generator can substitute for any other in batch generation

---

## Class Relationships Diagram

```
┌──────────────────────────────┐
│     SIMPLE_SPEC_VIZ          │ (Facade)
│    (Main entry point)        │
└───────────────┬──────────────┘
                │
    ┌───────────┼───────────┐
    │           │           │
    ↓           ↓           ↓
┌─────────┐  ┌─────────┐  ┌────────────┐
│ LOADER  │  │GENERATOR│  │ GRAPHVIZ   │
│         │  │         │  │ ADAPTER    │
└────┬────┘  └────┬────┘  └────────────┘
     │            │
     │            └─ Produces SPEC_VIZ_RESULT
     │
     ↓
┌──────────────────────────┐
│   SPEC_DOCUMENT          │
│  (Root container)        │
├──────────────────────────┤
│ - states: LIST           │
│ - transitions: LIST      │
│ - screens: LIST          │
│ - traceability: MATRIX   │
└──────────┬───────────────┘
           │
  ┌────────┼────────┬────────────┐
  │        │        │            │
  ↓        ↓        ↓            ↓
STATES TRANSITIONS SCREENS   TRACEABILITY
  │        │        │            │
  │        │        └─┬──────────┘
  │        │          │
  │        │          ↓
  │        │     WIDGETS
  │        │
  └────────┴─ Model SPEC_{X}
```

---

## Generic Classes

No generic classes needed. All are concrete for this domain.

If future extensibility needed:
```
deferred class SPECIFICATION [STATE_TYPE, TRANSITION_TYPE]
    -- Parameterized specification
end
```

But not for Phase 1.

---

## Complete File Inventory

```
src/
├── simple_spec_viz.e                (Facade - 200 lines)
├── spec_loader.e                    (Loader - 250 lines)
├── spec_document.e                  (Container - 200 lines)
├── spec_state.e                     (Model - 100 lines)
├── spec_transition.e                (Model - 120 lines)
├── spec_screen.e                    (Model - 150 lines)
├── spec_widget.e                    (Model - 120 lines)
├── state_diagram_generator.e        (Generator - 300 lines)
├── screen_mockup_generator.e        (Generator - 250 lines)
├── traceability_report_generator.e  (Generator - 200 lines)
├── spec_viz_result.e                (Data - 80 lines)
├── traceability_matrix.e            (Model - 100 lines)
├── spec_requirement.e               (Model - 80 lines)
└── graphviz_adapter.e               (Utility - 120 lines)

test/
├── test_simple_spec_viz.e           (Integration tests)
├── test_spec_loader.e               (Unit tests)
├── test_generators.e                (Unit tests)
└── test_app.e                       (Test runner)

cli/
├── spec_viz_cli.e                   (Already exists - 414 lines)
└── commands/                        (docs command - Jan 25 addition)

Total: ~2,631 lines (existing) + ~2,000 lines (new/refactored) = 4,631 lines Phase 1+
```

---

## Design Principles Applied

1. **Single Responsibility:** Each class has one job
   - SPEC_LOADER: Parse JSON
   - STATE_DIAGRAM_GENERATOR: Create state diagrams
   - SIMPLE_SPEC_VIZ: Coordinate

2. **Open/Closed:** Classes extensible without modification
   - Generators share interface (add new generator without changing SIMPLE_SPEC_VIZ)
   - SPEC_DOCUMENT can add new collections without breaking existing code

3. **Liskov Substitution:** Inheritance maintains contract
   - All generators return SPEC_VIZ_RESULT in same format
   - Any generator can be swapped with another

4. **Dependency Inversion:** Depend on abstractions
   - SIMPLE_SPEC_VIZ depends on abstract GENERATOR interface, not concrete classes

5. **Information Hiding:** Implementation private
   - Graphviz details hidden in adapter
   - DOT generation hidden in generators
   - JSON parsing details hidden in loader

---

## Ready for Contract Design

Yes - Class structure is clear, responsibilities assigned, relationships defined.
