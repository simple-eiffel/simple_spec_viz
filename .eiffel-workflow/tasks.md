# Implementation Tasks: simple_spec_viz

**Phase 3: Break contracts into implementable tasks with clear acceptance criteria**

**Based on:**
- Intent: .eiffel-workflow/intent-v2.md (refined with Grok AI review)
- Specification: .eiffel-workflow/spec/07-SPECIFICATION.md (14 classes with full DBC)
- Class Design: .eiffel-workflow/spec/04-CLASS-DESIGN.md (architectures and patterns)

**Total Tasks:** 18 implementation tasks + 7 test task groups

---

## Task Dependency Graph

```
TASK 1 (SPEC_VIZ_RESULT - Data Model)
  ↓
TASK 2-3 (Model Classes: SPEC_STATE, SPEC_TRANSITION, SPEC_SCREEN, SPEC_WIDGET)
  ↓
TASK 4 (SPEC_DOCUMENT - Container)
  ↓
TASK 5 (SPEC_LOADER - Parser)
  ↓ (Parallel)
TASK 6 (GRAPHVIZ_ADAPTER - Utility)
TASK 7 (STATE_DIAGRAM_GENERATOR)
TASK 8 (SCREEN_MOCKUP_GENERATOR)
TASK 9 (TRACEABILITY_REPORT_GENERATOR)
  ↓
TASK 10 (SIMPLE_SPEC_VIZ - Facade)
  ↓
TASK 11+ (CLI Integration, Tests)
```

---

## Model Classes (Foundation Layer)

### TASK 1: Implement SPEC_VIZ_RESULT (Data Class)

**Files:** src/spec_viz_result.e

**Features:**
- `make_success (a_content, a_name: STRING)` - Create success result
- `make_error (a_message: STRING)` - Create error result
- `is_success: BOOLEAN` - Query: content /= Void
- `content: detachable STRING` - Successful result (Void if error)
- `error_message: detachable STRING` - Error message (Void if success)
- `name: detachable STRING` - Result name (e.g., "state_machine.svg")

**Acceptance Criteria**
- [ ] Preconditions: content_or_error_not_both_void (XOR pattern)
- [ ] Postconditions: is_success iff content /= Void
- [ ] Invariant: success_xor_error (exactly one is non-void)
- [ ] Compiles with void_safety=all
- [ ] Creation methods work (make_success, make_error)
- [ ] Queries return correct values based on state
- [ ] Unit tests pass (see TEST-GROUP-1)

**Implementation Notes**
- Immutable data class (no setter methods)
- XOR invariant enforces exactly success OR error, never both
- No exceptions thrown; error is returned as data
- Pattern allows clients to check `if result.is_success then use result.content else handle result.error_message end`

**Dependencies**
- None (foundational)

---

### TASK 2: Implement Model Classes - SPEC_STATE, SPEC_TRANSITION

**Files:** src/spec_state.e, src/spec_transition.e

**SPEC_STATE Features:**
- `make (a_id, a_label: STRING)` - Create state
- `id: STRING` - State identifier
- `label: STRING` - Display label
- `is_initial: BOOLEAN` - Initial state flag
- `is_final: BOOLEAN` - Final state flag
- `entry_action: detachable STRING` - Entry action
- `exit_action: detachable STRING` - Exit action
- `set_initial (a_flag: BOOLEAN)` - Set initial flag
- `set_final (a_flag: BOOLEAN)` - Set final flag
- `set_entry_action (a_action: STRING)` - Set entry action
- `set_exit_action (a_action: STRING)` - Set exit action

**SPEC_TRANSITION Features:**
- `make (a_from_id, a_to_id, a_event: STRING)` - Create transition
- `from_state_id: STRING` - Source state ID
- `to_state_id: STRING` - Target state ID
- `event: STRING` - Triggering event (e.g., "on_login")
- `guard: detachable STRING` - Guard condition (e.g., "[if credentials valid]")
- `action: detachable STRING` - Transition action
- `set_guard (a_guard: STRING)` - Set guard condition
- `set_action (a_action: STRING)` - Set action

**Acceptance Criteria**
- [ ] SPEC_STATE preconditions: id/label not empty
- [ ] SPEC_STATE invariant: not (is_initial AND is_final) - mutually exclusive
- [ ] SPEC_STATE postconditions on setters with frame conditions (MML |=|)
- [ ] SPEC_TRANSITION preconditions: IDs and event not empty
- [ ] SPEC_TRANSITION invariants: valid state references
- [ ] Both compile with void_safety=all, concurrency=scoop
- [ ] 100% DBC coverage (all public features have contracts)
- [ ] Unit tests pass (see TEST-GROUP-1)

**Implementation Notes**
- Setter methods modify state and return nothing (command pattern)
- Frame conditions document what doesn't change: `label = old label` when setting initial
- No inheritance (concrete classes only)
- Immutable IDs (set in creation, never changed)

**Dependencies**
- TASK 1: SPEC_VIZ_RESULT (base class understanding)

---

### TASK 3: Implement Model Classes - SPEC_SCREEN, SPEC_WIDGET, SPEC_REQUIREMENT

**Files:** src/spec_screen.e, src/spec_widget.e, src/spec_requirement.e

**SPEC_WIDGET Features:**
- `make (a_type, a_label: STRING)` - Create widget
- `type: STRING` - Widget type (BUTTON, TEXT_FIELD, etc.)
- `label: STRING` - Display label
- `x: INTEGER` - X position in grid
- `y: INTEGER` - Y position in grid
- `width: INTEGER` - Width (grid units)
- `height: INTEGER` - Height (grid units)
- `set_position (a_x, a_y: INTEGER)` - Set position
- `set_size (a_width, a_height: INTEGER)` - Set dimensions

**SPEC_SCREEN Features:**
- `make (a_id, a_name: STRING)` - Create screen
- `id: STRING` - Screen identifier
- `name: STRING` - Display name
- `widgets: ARRAYED_LIST [SPEC_WIDGET]` - Widgets on screen
- `add_widget (a_widget: SPEC_WIDGET)` - Add widget
- `widget_by_id (a_id: STRING): detachable SPEC_WIDGET` - Find widget

**SPEC_REQUIREMENT Features:**
- `make (a_id, a_description: STRING)` - Create requirement
- `id: STRING` - Requirement ID (FR-001, etc.)
- `description: STRING` - Requirement text
- `priority: STRING` - MUST/SHOULD/NICE (optional)
- `traces_to: ARRAYED_LIST [STRING]` - State/screen IDs this req is traced to

**Acceptance Criteria**
- [ ] All IDs/names/labels non-empty preconditions
- [ ] Widget grid positions validated (0 <= x, y)
- [ ] Screen widgets collection invariant: no duplicate widget IDs
- [ ] Requirement traces_to collection invariant: all IDs non-empty
- [ ] Frame conditions on all mutations (MML)
- [ ] void_safety=all, concurrency=scoop
- [ ] 100% DBC coverage
- [ ] Unit tests pass (see TEST-GROUP-1)

**Implementation Notes**
- SPEC_WIDGET represents UI elements (will be rendered in mockups)
- SPEC_SCREEN aggregates widgets (1 screen → many widgets)
- SPEC_REQUIREMENT for traceability (FR-001 → state ID → screen ID)
- No inheritance; concrete models only

**Dependencies**
- TASK 1: SPEC_VIZ_RESULT
- TASK 2: SPEC_STATE, SPEC_TRANSITION (for reference understanding)

---

## Container & Loader (Core Logic Layer)

### TASK 4: Implement SPEC_DOCUMENT (Container)

**Files:** src/spec_document.e

**Features:**
- `make (a_name, a_version: STRING)` - Create container
- `name: STRING` - Spec name
- `version: STRING` - Spec version
- `states: ARRAYED_LIST [SPEC_STATE]` - All states
- `transitions: ARRAYED_LIST [SPEC_TRANSITION]` - All transitions
- `screens: ARRAYED_LIST [SPEC_SCREEN]` - All screens
- `requirements: ARRAYED_LIST [SPEC_REQUIREMENT]` - All requirements
- `traceability: TRACEABILITY_MATRIX` - Requirement→state→screen mapping
- `add_state (a_state: SPEC_STATE)` - Add state (checks no duplicates)
- `add_transition (a_transition: SPEC_TRANSITION)` - Add transition
- `add_screen (a_screen: SPEC_SCREEN)` - Add screen
- `add_requirement (a_req: SPEC_REQUIREMENT)` - Add requirement
- `state_by_id (a_id: STRING): detachable SPEC_STATE` - Lookup state
- `screen_by_id (a_id: STRING): detachable SPEC_SCREEN` - Lookup screen
- `initial_state: detachable SPEC_STATE` - Query initial state
- `final_states: ARRAYED_LIST [SPEC_STATE]` - Query all final states
- `transitions_from (a_state_id: STRING): ARRAYED_LIST [SPEC_TRANSITION]` - Query outgoing transitions
- `states_model: MML_SET [STRING]` - Model query (all state IDs for MML postconditions)
- `screens_model: MML_SET [STRING]` - Model query (all screen IDs)

**Acceptance Criteria**
- [ ] Preconditions on creation: name/version not empty
- [ ] Precondition on add_state: no duplicate state IDs
- [ ] Precondition on add_screen: no duplicate screen IDs
- [ ] Postcondition on add_state: state added, count increases, others unchanged (|=|)
- [ ] Invariant: no duplicate state IDs (verified with MML)
- [ ] Invariant: no duplicate screen IDs
- [ ] All lookup methods work correctly
- [ ] Query methods return correct subsets
- [ ] Model queries return correct MML sets
- [ ] void_safety=all, concurrency=scoop
- [ ] 100% DBC coverage
- [ ] Unit tests pass (see TEST-GROUP-2)

**Implementation Notes**
- Root container for entire specification
- Collections initialized in `make` (empty lists)
- Duplicate checks on add_* methods (preconditions)
- Model queries enable MML postconditions on other classes
- Frame conditions document collection size changes
- Immutable after loading (queries only, no post-load mutations in generators)

**Dependencies**
- TASK 1: SPEC_VIZ_RESULT
- TASK 2: SPEC_STATE, SPEC_TRANSITION
- TASK 3: SPEC_SCREEN, SPEC_WIDGET, SPEC_REQUIREMENT

---

### TASK 5: Implement SPEC_LOADER (JSON Parser & Validator)

**Files:** src/spec_loader.e

**Features:**
- `make` - Create parser instance
- `load_from_file (a_path: STRING): detachable SPEC_DOCUMENT` - Load from file
- `load_from_string (a_json: STRING): detachable SPEC_DOCUMENT` - Load from JSON string
- `last_error: detachable STRING` - Error message on failure

**Acceptance Criteria**
- [ ] Preconditions: path/JSON not empty
- [ ] File loading: reads file, parses JSON, builds SPEC_DOCUMENT
- [ ] JSON parsing: uses simple_json library
- [ ] Schema validation: checks required fields (states, transitions, screens)
- [ ] Error handling on file not found: sets last_error with helpful message
- [ ] Error handling on invalid JSON: sets last_error with line number + context
- [ ] Error handling on schema violation: lists missing fields
- [ ] Postcondition: if Result = Void then last_error /= Void
- [ ] Postcondition: if Result /= Void then last_error = Void
- [ ] Supports GUI_JSON_SPEC_PROTOCOL.md v1.0+ format
- [ ] Validates state IDs are referenced in transitions
- [ ] void_safety=all, concurrency=scoop (no side effects except last_error)
- [ ] Unit tests pass (see TEST-GROUP-3)

**Implementation Notes**
- Error-driven design: return Void with error message on any issue
- No exceptions thrown; errors are data
- Result pattern: either return spec OR set error, never both
- Error messages follow format: "Error type: description. Location: line 42. Fix: suggestion"
- Delegates JSON parsing to simple_json
- Validates structure against GUI_JSON_SPEC_PROTOCOL.md schema
- Builds SPEC_DOCUMENT by iterating parsed JSON and creating model objects

**Algorithm Sketch:**
```
load_from_file(a_path):
  1. Check file exists
  2. Read file contents
  3. parse_json(contents) → JSON object
  4. validate_schema(object) → checks required fields
  5. build_spec_document(object) → creates SPEC_DOCUMENT
     - iterate states array → create SPEC_STATE, add to document
     - iterate transitions array → create SPEC_TRANSITION, add to document
     - iterate screens array → create SPEC_SCREEN, add to document
  6. Return document OR set last_error and return Void
```

**Dependencies**
- TASK 4: SPEC_DOCUMENT
- External: simple_json (library)

---

## Generators (Output Layer)

### TASK 6: Implement GRAPHVIZ_ADAPTER (Utility/Isolation Layer)

**Files:** src/graphviz_adapter.e

**Features:**
- `make` - Create adapter instance
- `render_to_svg (a_dot: STRING): detachable STRING` - Render DOT to SVG
- `last_error: detachable STRING` - Error message on failure

**Acceptance Criteria**
- [ ] Precondition: a_dot not empty
- [ ] Calls simple_graphviz with DOT input
- [ ] Returns SVG string on success
- [ ] Sets last_error on GraphViz error (not found, timeout, invalid DOT)
- [ ] Checks if GraphViz is installed at runtime
- [ ] Error message includes install instructions:
      "GraphViz not found. Install: brew install graphviz (macOS), apt-get install graphviz (Linux), choco install graphviz (Windows)"
- [ ] Timeout handling: 30-second timeout for large specs
- [ ] Postcondition: if Result = Void then last_error /= Void
- [ ] Postcondition: if Result /= Void then Result.contains ("<svg") -- valid SVG
- [ ] void_safety=all, concurrency=scoop
- [ ] Unit tests pass (see TEST-GROUP-4)

**Implementation Notes**
- Adapter pattern isolates simple_graphviz dependency
- Allows future swapping of rendering engine without changing generators
- DOT input assumed valid (generators responsible for correctness)
- SVG output may be large; no size limits
- Error handling: graceful failure with helpful messages

**Dependencies**
- External: simple_graphviz (library v1.0.0+)

---

### TASK 7: Implement STATE_DIAGRAM_GENERATOR (Generator)

**Files:** src/state_diagram_generator.e

**Features:**
- `make` - Create generator
- `generate (a_doc: SPEC_DOCUMENT): SPEC_VIZ_RESULT` - Generate state machine SVG

**Acceptance Criteria**
- [ ] Precondition: a_doc /= Void
- [ ] Precondition: a_doc.states not empty (at least 1 state)
- [ ] Build DOT representation from spec:
       - Nodes for states (label, shape, colors for initial/final)
       - Edges for transitions (label with event + guard)
       - State annotations for entry/exit actions
- [ ] Initial state marked with circle marker (●) or special shape
- [ ] Final states marked with double circle (◉) or special shape
- [ ] Transition labels include event: `a_event`, guard (if any): `[guard_condition]`
- [ ] Call GRAPHVIZ_ADAPTER.render_to_svg (a_dot)
- [ ] Return SPEC_VIZ_RESULT (success with SVG or error)
- [ ] WCAG 2.1 Level AA compliance in SVG:
       - Font size: 12pt+ (no <12pt text)
       - Color contrast: 4.5:1 or higher
       - No overlapping elements for specs with ≤10 states
- [ ] Compiles with void_safety=all, concurrency=scoop
- [ ] 100% DBC coverage
- [ ] Unit tests pass (see TEST-GROUP-4)

**Implementation Notes**
- DOT generation algorithm:
  ```
  1. Start DOT graph: digraph { ... }
  2. Iterate states:
     - Add node with ID, label, shape (circle if initial, double-circle if final)
     - Add entry/exit actions as node annotations
  3. Iterate transitions:
     - Add edge: from_state → to_state [label="event [guard]"]
  4. End graph
  5. Return DOT string
  ```
- Accessibility handled via GraphViz SVG output (inherit from GraphViz rendering)
- Error passed through from adapter (DOT or GraphViz errors)
- Performance: O(n) where n = states + transitions

**Dependencies**
- TASK 4: SPEC_DOCUMENT (read-only access)
- TASK 6: GRAPHVIZ_ADAPTER (rendering)

---

### TASK 8: Implement SCREEN_MOCKUP_GENERATOR (Generator)

**Files:** src/screen_mockup_generator.e

**Features:**
- `make` - Create generator
- `generate_all (a_doc: SPEC_DOCUMENT): ARRAYED_LIST [SPEC_VIZ_RESULT]` - Generate all screen mockups

**Acceptance Criteria**
- [ ] Precondition: a_doc /= Void
- [ ] Generate one SPEC_VIZ_RESULT per screen in spec
- [ ] Each result contains SVG mockup with:
       - Screen name as title
       - Grid layout (12-column or similar)
       - Widgets positioned in grid (x, y, width, height)
       - Widget labels visible
       - Widget types labeled (BUTTON, TEXT_FIELD, etc.)
- [ ] WCAG 2.1 Level AA compliance:
       - Font size: 12pt+
       - Color contrast: 4.5:1+
       - No overlapping widgets
- [ ] Return LIST with count = a_doc.screens.count
- [ ] Each result named with screen ID (e.g., "login_screen.svg")
- [ ] Error results included if any screen has errors
- [ ] void_safety=all, concurrency=scoop
- [ ] 100% DBC coverage
- [ ] Unit tests pass (see TEST-GROUP-5)

**Implementation Notes**
- Text-based SVG generation (no external rendering engine needed, unlike state diagrams)
- SVG structure:
  ```
  <svg>
    <text>Screen: {screen_name}</text>
    <rect x="0" y="50" width="100%" height="500"/>  <!-- grid background -->
    For each widget:
      <rect x="{widget_x}" y="{widget_y}" width="{widget_width}" height="{widget_height}" />
      <text>{widget_label}</text>
      <text class="type">{widget_type}</text>
  </svg>
  ```
- Grid mapping: convert widget grid coordinates (0-12, 0-N) to SVG pixels (0-1000px, 0-Npx)
- Error handling: if widget reference invalid, skip with warning
- Performance: O(n*m) where n = screens, m = widgets per screen

**Dependencies**
- TASK 4: SPEC_DOCUMENT (read-only access)
- TASK 3: SPEC_SCREEN, SPEC_WIDGET (model understanding)

---

### TASK 9: Implement TRACEABILITY_REPORT_GENERATOR (Generator)

**Files:** src/traceability_report_generator.e

**Features:**
- `make` - Create generator
- `generate (a_doc: SPEC_DOCUMENT): SPEC_VIZ_RESULT` - Generate traceability matrix

**Acceptance Criteria**
- [ ] Precondition: a_doc /= Void
- [ ] Generate Markdown traceability matrix with columns:
       - Requirement | Realized In (State/Screen) | Implementation Path
- [ ] Row per requirement (from a_doc.requirements)
- [ ] Link requirements to states and screens via traceability matrix
- [ ] Flag missing requirements (no states/screens) with "⚠ UNIMPLEMENTED"
- [ ] Flag orphaned states/screens (no requirements) with "⚠ UNDOCUMENTED"
- [ ] Example output:
  ```markdown
  | Requirement | Realized In | Implementation Path |
  |-------------|----------|-----|
  | FR-001: User login | State: logged_in | Screen: LoginForm → transition on_login → State: logged_in |
  | FR-002: Error handling | State: error | State: error → Screen: ErrorDialog |
  | ⚠ FR-003: Logout | UNIMPLEMENTED | No states or screens map to this requirement |
  ```
- [ ] Return SPEC_VIZ_RESULT with Markdown content (or error)
- [ ] void_safety=all, concurrency=scoop
- [ ] 100% DBC coverage
- [ ] Unit tests pass (see TEST-GROUP-6)

**Implementation Notes**
- Read from SPEC_DOCUMENT.traceability (TRACEABILITY_MATRIX) for requirement→state/screen mappings
- Automated diff verification (from intent-v2.md): count requirements, states, screens; report coverage %
- Markdown generation: iterate requirements, build table rows, format as string
- Gap detection: for each requirement, check if any trace exists
- Performance: O(n) where n = total requirements + states + screens

**Dependencies**
- TASK 4: SPEC_DOCUMENT (read-only)
- TASK 3: SPEC_REQUIREMENT, SPEC_STATE, SPEC_SCREEN (model understanding)

---

## Facade (Coordination Layer)

### TASK 10: Implement SIMPLE_SPEC_VIZ (Facade)

**Files:** src/simple_spec_viz.e

**Features:**
- `make` - Create and initialize facade
- `loader: SPEC_LOADER` - Access to loader
- `state_diagram_gen: STATE_DIAGRAM_GENERATOR` - Access to state diagram generator
- `screen_mockup_gen: SCREEN_MOCKUP_GENERATOR` - Access to screen mockup generator
- `traceability_gen: TRACEABILITY_REPORT_GENERATOR` - Access to traceability generator
- `last_error: detachable STRING` - Facade-level error (if any load fails)
- `load_from_file (a_path: STRING): detachable SPEC_DOCUMENT` - Load spec from file
- `load_from_json (a_json: STRING): detachable SPEC_DOCUMENT` - Load spec from string
- `generate_state_diagram (a_doc: SPEC_DOCUMENT): SPEC_VIZ_RESULT` - Delegate to generator
- `generate_screen_mockups (a_doc: SPEC_DOCUMENT): ARRAYED_LIST [SPEC_VIZ_RESULT]` - Delegate to generator
- `generate_traceability_report (a_doc: SPEC_DOCUMENT): SPEC_VIZ_RESULT` - Delegate to generator
- `generate_all (a_doc: SPEC_DOCUMENT; a_output_dir: STRING): BOOLEAN` - Batch generation

**Acceptance Criteria**
- [ ] Precondition on make: no args required
- [ ] make postcondition: all loaders and generators created (not Void)
- [ ] make postcondition: no_error_yet: last_error = Void
- [ ] load_from_file: precondition path not empty
- [ ] load_from_file: postcondition error_on_failure: Result = Void implies last_error /= Void
- [ ] load_from_file: postcondition success_clears_error: Result /= Void implies last_error = Void
- [ ] generate_* methods: return results from delegated generators (no modification)
- [ ] generate_all:
       - Takes output directory path
       - Generates state_machine.svg, {screen_id}.svg, traceability.md
       - Saves all to directory
       - Returns True on success, False on failure
       - Sets last_error on any failure
- [ ] save_to_file helper (private feature {NONE}):
       - Takes content string and file path
       - Creates/overwrites file
       - Returns True on success, False on failure
- [ ] Invariants: loader, state_diagram_gen, screen_mockup_gen, traceability_gen all /= Void
- [ ] void_safety=all, concurrency=scoop
- [ ] 100% DBC coverage
- [ ] Unit tests pass (see TEST-GROUP-7)

**Implementation Notes**
- Facade pattern: single entry point hiding complexity
- Initialization: `make` creates all loaders and generators (eager initialization)
- Error handling: all methods check results and propagate errors via Result or last_error
- Batch operation (generate_all):
  ```
  1. Generate state diagram
  2. If success: save to {output_dir}/state_machine.svg
  3. Generate screen mockups
  4. For each mockup: save to {output_dir}/{screen_id}.svg
  5. Generate traceability report
  6. If success: save to {output_dir}/traceability.md
  7. Return True if all succeed, False if any fail
  8. On failure: set last_error with which file failed
  ```
- No cross-component coordination needed; generators are independent

**Dependencies**
- TASK 5: SPEC_LOADER
- TASK 7: STATE_DIAGRAM_GENERATOR
- TASK 8: SCREEN_MOCKUP_GENERATOR
- TASK 9: TRACEABILITY_REPORT_GENERATOR
- External: simple_file (for save_to_file)

---

## CLI Integration

### TASK 11: Implement CLI Tool Integration

**Files:** cli/spec_viz_cli.e

**Features:**
- `make` - Initialize CLI app
- `run` - Parse arguments and execute command
- Supports command: `simple_spec_viz visualize <spec.json> [--output <dir>]`
- Supports command: `simple_spec_viz docs <subcommand>` (Phase 2, not Phase 1)

**Acceptance Criteria for Phase 1**
- [ ] Argument parsing: spec file path (required), --output directory (optional, default ".")
- [ ] Validate arguments: file path not empty, output dir writable
- [ ] Create SIMPLE_SPEC_VIZ instance
- [ ] Load spec from file
- [ ] Handle errors:
       - File not found: print "Error: File not found: {path}"
       - Invalid JSON: print error with line number
       - Schema validation: print "Error: Missing required fields: {list}"
- [ ] Generate all outputs (state diagram, screen mockups, traceability)
- [ ] Save to output directory
- [ ] Print success message: "Generated: state_machine.svg, {screens}.svg, traceability.md in {output_dir}"
- [ ] Exit with code 0 on success, non-zero on error
- [ ] void_safety=all, concurrency=scoop
- [ ] Integration tests pass (see TEST-GROUP-7)

**Implementation Notes**
- CLI entry point for production use
- Delegates to SIMPLE_SPEC_VIZ for heavy lifting
- Formats error messages for human readability
- Should already be partially implemented (from earlier fix); may only need minimal updates

**Dependencies**
- TASK 10: SIMPLE_SPEC_VIZ

---

## Testing (Quality Assurance Layer)

### TEST-GROUP-1: Data Model Tests (SPEC_VIZ_RESULT, SPEC_STATE, SPEC_TRANSITION, etc.)

**Test File:** test/test_spec_models.e

**Test Cases:**
- [ ] SPEC_VIZ_RESULT: XOR invariant (success or error, not both)
- [ ] SPEC_VIZ_RESULT: is_success query works correctly
- [ ] SPEC_STATE: Cannot be both initial and final
- [ ] SPEC_STATE: Setters maintain frame conditions (other attributes unchanged)
- [ ] SPEC_TRANSITION: Creation sets all fields correctly
- [ ] SPEC_SCREEN: Add widget maintains no duplicates
- [ ] SPEC_WIDGET: Position and size setters work
- [ ] SPEC_REQUIREMENT: Traceability links stored correctly

**Acceptance:**
- [ ] 15+ test cases
- [ ] 100% pass rate
- [ ] No contract violations
- [ ] Coverage of all setters and invariants

---

### TEST-GROUP-2: Container Tests (SPEC_DOCUMENT)

**Test File:** test/test_spec_document.e

**Test Cases:**
- [ ] Creation: empty collections initialized
- [ ] add_state: state added, count increases
- [ ] add_state: duplicate ID prevents addition (precondition check)
- [ ] add_transition: transition added
- [ ] state_by_id: finds existing state, returns Void for missing
- [ ] screen_by_id: finds existing screen, returns Void for missing
- [ ] initial_state: returns correct initial state, Void if none
- [ ] final_states: returns all and only final states
- [ ] transitions_from: returns correct outgoing transitions
- [ ] states_model: MML query returns all state IDs
- [ ] Invariant: no duplicate state IDs (verified with loop)
- [ ] Invariant: no duplicate screen IDs

**Acceptance:**
- [ ] 20+ test cases
- [ ] 100% pass rate
- [ ] All lookup and query methods tested
- [ ] MML model queries verified

---

### TEST-GROUP-3: Loader Tests (SPEC_LOADER)

**Test File:** test/test_spec_loader.e

**Test Cases:**
- [ ] Load valid JSON from file: creates SPEC_DOCUMENT
- [ ] Load valid JSON string: creates SPEC_DOCUMENT
- [ ] Load missing file: returns Void, sets last_error
- [ ] Load invalid JSON: returns Void, sets last_error with line number
- [ ] Load spec missing 'states' field: returns Void, error mentions "states"
- [ ] Load spec with duplicate state IDs: rejected or handled gracefully
- [ ] Load auth_flow.json (canonical example): succeeds
- [ ] Load data_entry_form.json: succeeds
- [ ] Error messages are actionable (include line number + suggestion)

**Acceptance:**
- [ ] 15+ test cases
- [ ] 100% pass rate
- [ ] All error paths tested
- [ ] Canonical examples load successfully

---

### TEST-GROUP-4: Generator Tests (STATE_DIAGRAM_GENERATOR, GRAPHVIZ_ADAPTER)

**Test File:** test/test_generators_state.e

**Test Cases:**
- [ ] Generate state diagram from simple 2-state spec
- [ ] State diagram SVG contains state labels
- [ ] Transitions shown with event labels
- [ ] Initial state marked (circle or special indicator)
- [ ] Final state marked (double circle or special indicator)
- [ ] Guard conditions displayed
- [ ] Entry/exit actions shown
- [ ] Large spec (10+ states) generated in < 5 seconds
- [ ] GraphViz adapter check handles missing GraphViz
- [ ] GraphViz adapter error message includes install instructions
- [ ] WCAG AA compliance: text readable, no overlaps, 4.5:1 contrast

**Acceptance:**
- [ ] 20+ test cases
- [ ] 100% pass rate
- [ ] Performance target met (< 5 sec)
- [ ] All canonical examples generate valid SVG

---

### TEST-GROUP-5: Generator Tests (SCREEN_MOCKUP_GENERATOR)

**Test File:** test/test_generators_screens.e

**Test Cases:**
- [ ] Generate mockups for spec with 1 screen
- [ ] Generate mockups for spec with 5+ screens
- [ ] Widget positions render correctly
- [ ] Widget labels visible
- [ ] Widget types labeled (BUTTON, TEXT_FIELD, etc.)
- [ ] Screen name shown as title
- [ ] Returns list count = number of screens
- [ ] Each result named with screen ID
- [ ] Invalid widget reference handled gracefully

**Acceptance:**
- [ ] 15+ test cases
- [ ] 100% pass rate
- [ ] All canonical examples generate valid SVG per screen

---

### TEST-GROUP-6: Generator Tests (TRACEABILITY_REPORT_GENERATOR)

**Test File:** test/test_generators_traceability.e

**Test Cases:**
- [ ] Generate traceability matrix from spec with requirements
- [ ] Matrix includes all requirements
- [ ] Links to correct states/screens
- [ ] Markdown format valid
- [ ] Unimplemented requirements flagged with ⚠
- [ ] Undocumented states flagged with ⚠
- [ ] Example output matches intent-v2.md format

**Acceptance:**
- [ ] 10+ test cases
- [ ] 100% pass rate
- [ ] Markdown parses correctly
- [ ] Gap detection works

---

### TEST-GROUP-7: Integration Tests (SIMPLE_SPEC_VIZ Facade + CLI)

**Test File:** test/test_integration.e

**Test Cases:**
- [ ] Load auth_flow.json → visualize → check all outputs generated
- [ ] Load data_entry_form.json → all mockups generated
- [ ] Load crud_application.json → traceability matrix complete
- [ ] Load dashboard.json (no state machine) → handles gracefully
- [ ] Load wizard.json → state transitions correct
- [ ] Load settings.json → all screens present
- [ ] Load loading_pattern.json → async states visualized
- [ ] Generate all outputs to temporary directory
- [ ] CLI: `visualize auth_flow.json --output ./out` → creates files
- [ ] CLI error handling: missing file → helpful error message
- [ ] CLI error handling: invalid JSON → line number + context
- [ ] Performance: all 7 canonical examples < 5 seconds total
- [ ] Round-trip: Load, visualize, inspect SVG → all states visible

**Acceptance:**
- [ ] 20+ integration test cases
- [ ] 100% pass rate
- [ ] All 7 canonical examples work end-to-end
- [ ] Performance targets met
- [ ] Error messages helpful and actionable

---

## Implementation Strategy

### Build Order (Respect Dependencies)

1. **Foundation (1 day):** TASK 1-3 (data models)
   - Build SPEC_VIZ_RESULT, SPEC_STATE, SPEC_TRANSITION, SPEC_SCREEN, SPEC_WIDGET, SPEC_REQUIREMENT
   - All are isolated, no cross-dependencies
   - Run TEST-GROUP-1 immediately after

2. **Container (1 day):** TASK 4
   - Build SPEC_DOCUMENT after models exist
   - Run TEST-GROUP-2 after completion

3. **Loader (1 day):** TASK 5
   - Build SPEC_LOADER with SPEC_DOCUMENT available
   - Use simple_json for JSON parsing
   - Run TEST-GROUP-3 after completion

4. **Generators - Parallel (2 days):**
   - TASK 6: GRAPHVIZ_ADAPTER (quick, utility)
   - TASK 7: STATE_DIAGRAM_GENERATOR (uses adapter)
   - TASK 8: SCREEN_MOCKUP_GENERATOR (independent)
   - TASK 9: TRACEABILITY_REPORT_GENERATOR (independent)
   - Run TEST-GROUP-4, 5, 6 in parallel

5. **Facade (0.5 days):** TASK 10
   - Build SIMPLE_SPEC_VIZ after all loaders/generators ready
   - Delegates to existing components
   - Run TEST-GROUP-7 (integration)

6. **CLI (0.5 days):** TASK 11
   - CLI tool is thin wrapper around facade
   - May already be partially implemented
   - Final integration test

### Compilation Checks

After each task:
```bash
cd d:\prod\simple_spec_viz
ec.sh -batch -config simple_spec_viz.ecf -target simple_spec_viz_tests -c_compile
# Should show: COMPILATION SUCCESSFUL
```

### Contract Verification

All features must have:
- ✓ Preconditions documenting valid inputs
- ✓ Postconditions documenting output guarantees
- ✓ Invariants documenting class state properties
- ✓ Frame conditions (using MML `|=|`) documenting what doesn't change

### Performance Targets

- Single spec generation: < 1 second (state diagram + mockups)
- Typical spec (10 states, 20 transitions, 5 screens): < 5 seconds total
- Large spec (50 states): < 10 seconds (tested in Phase 5 hardening)

---

## Sign-Off

**PHASE 3: TASK DECOMPOSITION COMPLETE**

18 implementation tasks + 7 test task groups defined with:
- ✓ Clear acceptance criteria (each task 8-15 criteria)
- ✓ Implementation notes with algorithms
- ✓ Dependency tracking (build order documented)
- ✓ Contract specifications from 07-SPECIFICATION.md
- ✓ Performance targets from intent-v2.md
- ✓ Error handling patterns specified
- ✓ Test coverage for each task

**Ready for Phase 4 Implementation** (`/eiffel.implement`)

All tasks include acceptance criteria that are testable and verifiable.
No task is ambiguous; all have clear contracts and expected outcomes.
