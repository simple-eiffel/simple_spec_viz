# CONTRACT DESIGN: simple_spec_viz

## MML Model Queries

| Attribute | Type | Model Query | MML Type | Purpose |
|-----------|------|-------------|----------|---------|
| states | ARRAYED_LIST | states_model: MML_SET[STRING] | MML_SET | All state IDs in specification |
| transitions | ARRAYED_LIST | transitions_model: MML_SET[STRING] | MML_SET | All transition labels |
| screens | ARRAYED_LIST | screens_model: MML_SET[STRING] | MML_SET | All screen IDs |

---

## Class Contracts

### SIMPLE_SPEC_VIZ

```eiffel
make
    ensure
        loader_created: loader /= Void
        state_diagram_gen_created: state_diagram_gen /= Void
        screen_mockup_gen_created: screen_mockup_gen /= Void
        traceability_gen_created: traceability_gen /= Void
        no_error_yet: last_error = Void
    end

load_from_file (a_path: STRING): detachable SPEC_DOCUMENT
    require
        path_not_void: a_path /= Void
        path_not_empty: not a_path.is_empty
    do
        Result := loader.load_from_file (a_path)
        if Result = Void then
            last_error := loader.last_error
        else
            last_error := Void
        end
    ensure
        error_on_failure: Result = Void implies last_error /= Void
        success_clears_error: Result /= Void implies last_error = Void
    end

generate_state_diagram (a_doc: SPEC_DOCUMENT): SPEC_VIZ_RESULT
    require
        doc_not_void: a_doc /= Void
    do
        Result := state_diagram_gen.generate (a_doc)
    ensure
        result_not_void: Result /= Void
    end

generate_all (a_doc: SPEC_DOCUMENT; a_output_dir: STRING): BOOLEAN
    require
        doc_not_void: a_doc /= Void
        output_dir_not_void: a_output_dir /= Void
        output_dir_not_empty: not a_output_dir.is_empty
    do
        -- generates state diagram, screen mockups, traceability report
        -- saves all to output directory
    ensure
        error_on_failure: not Result implies last_error /= Void
    end

invariant
    loader_not_void: loader /= Void
    state_diagram_gen_not_void: state_diagram_gen /= Void
    screen_mockup_gen_not_void: screen_mockup_gen /= Void
    traceability_gen_not_void: traceability_gen /= Void
end
```

### SPEC_DOCUMENT

```eiffel
make (a_name, a_version: STRING)
    require
        name_not_void: a_name /= Void
        name_not_empty: not a_name.is_empty
        version_not_void: a_version /= Void
    ensure
        name_set: name = a_name
        version_set: version = a_version
        states_empty: states.is_empty
        transitions_empty: transitions.is_empty
        screens_empty: screens.is_empty
    end

add_state (a_state: SPEC_STATE)
    require
        state_not_void: a_state /= Void
        not_duplicate: state_by_id (a_state.id) = Void
    ensure
        state_added: states.has (a_state)
        count_increased: states.count = old states.count + 1
    end

state_by_id (a_id: STRING): detachable SPEC_STATE
    require
        id_not_void: a_id /= Void
    ensure
        found_has_id: attached Result as r implies r.id.same_string (a_id)
    end

initial_state: detachable SPEC_STATE
    ensure
        is_initial: attached Result as r implies r.is_initial
        unique: across states as s count (s.is_initial) <= 1 end
    end

states_model: MML_SET [STRING]
    -- Model query: set of all state IDs
    do
        create Result.default_create
        across states as s loop
            Result := Result & s.id
        end
    ensure
        all_ids: across Result as r all exists s in states such s.id = r end
    end

invariant
    name_not_void: name /= Void
    version_not_void: version /= Void
    states_not_void: states /= Void
    transitions_not_void: transitions /= Void
    screens_not_void: screens /= Void
    no_duplicate_state_ids: across states as s1 all across states as s2 all
        (s1 = s2) or (not s1.id.same_string (s2.id)) end end
end
```

### SPEC_STATE

```eiffel
make (a_id, a_label: STRING)
    require
        id_not_void: a_id /= Void
        id_not_empty: not a_id.is_empty
        label_not_void: a_label /= Void
        label_not_empty: not a_label.is_empty
    ensure
        id_set: id = a_id
        label_set: label = a_label
        is_initial_false: not is_initial
        is_final_false: not is_final
    end

set_initial (a_flag: BOOLEAN)
    do
        is_initial := a_flag
    ensure
        set: is_initial = a_flag
        if_initial_not_final: is_initial implies not is_final
    end

set_final (a_flag: BOOLEAN)
    do
        is_final := a_flag
    ensure
        set: is_final = a_flag
        if_final_not_initial: is_final implies not is_initial
    end

invariant
    not_both_initial_final: not (is_initial and is_final)
    id_not_empty: not id.is_empty
    label_not_empty: not label.is_empty
end
```

### SPEC_VIZ_RESULT

```eiffel
is_success: BOOLEAN
    do
        Result := content /= Void
    ensure
        correct: Result = (content /= Void)
    end

content: detachable STRING
error_message: detachable STRING
name: detachable STRING

invariant
    success_xor_error: (content /= Void) xor (error_message /= Void)
    success_has_content: (content /= Void) implies (error_message = Void)
    failure_has_error: (error_message /= Void) implies (content = Void)
end
```

### STATE_DIAGRAM_GENERATOR

```eiffel
generate (a_doc: SPEC_DOCUMENT): SPEC_VIZ_RESULT
    require
        doc_not_void: a_doc /= Void
        doc_has_states: not a_doc.states.is_empty
    do
        -- 1. Build DOT representation from a_doc
        -- 2. Invoke GraphViz via adapter
        -- 3. Return SPEC_VIZ_RESULT with SVG or error
    ensure
        result_not_void: Result /= Void
        success_has_svg: Result.is_success implies (Result.content /= Void)
        failure_has_error: not Result.is_success implies (Result.error_message /= Void)
    end

invariant
    adapter_not_void: adapter /= Void
end
```

### SCREEN_MOCKUP_GENERATOR

```eiffel
generate_all (a_doc: SPEC_DOCUMENT): ARRAYED_LIST [SPEC_VIZ_RESULT]
    require
        doc_not_void: a_doc /= Void
    do
        -- Generate one SPEC_VIZ_RESULT per screen in a_doc
    ensure
        result_not_void: Result /= Void
        count_matches_screens: Result.count = a_doc.screens.count
        all_results_valid: across Result as r all r.is_success or r.error_message /= Void end
    end
```

### SPEC_LOADER

```eiffel
load_from_file (a_path: STRING): detachable SPEC_DOCUMENT
    require
        path_not_void: a_path /= Void
        path_not_empty: not a_path.is_empty
    do
        -- 1. Open and read file
        -- 2. Parse JSON
        -- 3. Validate against GUI_JSON_SPEC_PROTOCOL
        -- 4. Build SPEC_DOCUMENT or set last_error
    ensure
        error_on_failure: Result = Void implies last_error /= Void
        success_clears_error: Result /= Void implies last_error = Void
    end

last_error: detachable STRING

invariant
    error_on_void_result: (last_error = Void) or (Result_was_void_in_load)
end
```

---

## Frame Conditions (via MML |=|)

For any operation modifying state:

```eiffel
set_initial (a_flag: BOOLEAN)
    ensure
        set: is_initial = a_flag
        other_state_unchanged: (old label) = label  -- frame condition
        nothing_else_changes: |=| old Current
    end
```

All mutations use frame conditions to document what does NOT change.

---

## Contract Completeness Checklist

For each feature:
- [ ] **What changed?** (direct effect: `is_initial = a_flag`)
- [ ] **How did it change?** (relationship to old: `is_initial /= (old is_initial)`)
- [ ] **What did NOT change?** (frame: `label = old label`)
- [ ] **Precondition guards?** (prevent invalid inputs)
- [ ] **Postcondition verifiable?** (can be checked in test)

---

## MML Usage

State counts, transition coverage, reachability can be verified:

```eiffel
-- Model queries
states_model: MML_SET [STRING]  -- All state IDs
transitions_model: MML_SET [STRING]  -- All transitions
screens_model: MML_SET [STRING]  -- All screen IDs

-- Invariants using MML
unique_state_ids: across states as s count (s.id) end = states.count
```

---

## Ready for Interface Design

Yes - All contracts are complete, MML models defined, frame conditions clear.
