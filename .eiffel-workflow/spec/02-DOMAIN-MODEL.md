# DOMAIN MODEL: simple_spec_viz

## Domain Concepts

### Concept: Specification Document
**Definition:** Complete GUI specification in JSON format, container for all specification elements
**Attributes:**
- name: STRING (application name)
- version: STRING (semantic version)
- states: LIST[SPEC_STATE] (all states in state machine)
- transitions: LIST[SPEC_TRANSITION] (all state transitions)
- screens: LIST[SPEC_SCREEN] (all UI screens)
- traceability: TRACEABILITY_MATRIX (requirements → states → screens)

**Behaviors:**
- Load from JSON file (parsing, validation)
- Query state by ID
- Query screen by ID
- Find initial state
- Find all final states
- Find transitions from/to a state
- Generate model queries (MML_SET of state IDs, screen IDs)

**Will Become:** `SPEC_DOCUMENT`

**Rationale:** Root container for entire specification; central to all operations

---

### Concept: State (in state machine)
**Definition:** Single state in application's state machine (e.g., logged_out, authenticating, logged_in)
**Attributes:**
- id: STRING (unique identifier, e.g., "logged_out")
- label: STRING (human-readable name, e.g., "Logged Out")
- is_initial: BOOLEAN (true for starting state)
- is_final: BOOLEAN (true for terminal states)
- entry_action: detachable STRING (what happens when entering state, e.g., "show_login_form")
- exit_action: detachable STRING (what happens when leaving state)

**Behaviors:**
- Determine if state is initial/final/normal
- Get entry and exit actions (query)
- Provide context for transition diagrams

**Will Become:** `SPEC_STATE`

**Rationale:** Fundamental unit of state machine; visual element in diagrams

---

### Concept: Transition (between states)
**Definition:** Event and condition causing movement from one state to another
**Attributes:**
- from_state_id: STRING (source state ID)
- to_state_id: STRING (target state ID)
- event: STRING (triggering event, e.g., "login")
- guard: detachable STRING (condition for transition, e.g., "username_not_empty")
- action: detachable STRING (side effect during transition)
- label: STRING (display label, derived from event + guard)

**Behaviors:**
- Query source and target states
- Check if transition matches source/target pair
- Generate diagram label (event + guard)
- Validate transition references valid states

**Will Become:** `SPEC_TRANSITION`

**Rationale:** Represents dynamic behavior; edges in state diagram

---

### Concept: Screen (UI layout)
**Definition:** Single screen/view in the application, containing widgets in a layout
**Attributes:**
- id: STRING (unique screen identifier, e.g., "login_form")
- name: STRING (human-readable name, e.g., "Login Form")
- layout_type: STRING ("grid", "flexbox", "absolute")
- widgets: LIST[SPEC_WIDGET] (UI elements on screen)
- visible_when: detachable STRING (state guard, e.g., "logged_out", shown only in this state)
- description: detachable STRING (purpose of screen)

**Behaviors:**
- List all widgets on screen
- Query widget by ID
- Determine visibility conditions
- Calculate bounding box for SVG rendering
- Generate mockup SVG

**Will Become:** `SPEC_SCREEN`

**Rationale:** Visual element; rendered as mockup; appears in diagram output

---

### Concept: Widget (UI control)
**Definition:** Single UI control on a screen (button, text field, label, etc.)
**Attributes:**
- id: STRING (unique widget ID, e.g., "login_button")
- type: STRING (widget type: "button", "text_field", "label", "dropdown", etc.)
- label: STRING (display text or button label)
- x, y: INTEGER (grid position)
- width, height: INTEGER (size in grid units)
- visible_when: detachable STRING (state guard for visibility)
- properties: HASH_TABLE[STRING, STRING] (widget-specific props: placeholder, options, etc.)

**Behaviors:**
- Render as SVG box with label
- Determine visibility in state
- Provide layout bounding box

**Will Become:** `SPEC_WIDGET`

**Rationale:** Leaf element of UI structure; rendered in screen mockup

---

### Concept: Traceability Matrix
**Definition:** Cross-reference linking requirements to states and states to screens
**Attributes:**
- requirements: LIST[SPEC_REQUIREMENT] (list of requirements)
- requirement_state_map: HASH_TABLE[req_id, state_ids] (requirement → states)
- requirement_screen_map: HASH_TABLE[req_id, screen_ids] (requirement → screens)

**Behaviors:**
- Link requirement to state(s)
- Link requirement to screen(s)
- Query which requirements a state satisfies
- Query which requirements a screen implements
- Generate traceability markdown report

**Will Become:** `TRACEABILITY_MATRIX`

**Rationale:** Ensures completeness; QA validates coverage; generates markdown report

---

### Concept: Requirement
**Definition:** Business or functional requirement that the spec must satisfy
**Attributes:**
- id: STRING (requirement ID, e.g., "REQ-001")
- description: STRING (requirement description)
- type: STRING ("functional", "non-functional")

**Behaviors:**
- Link to states that satisfy it
- Link to screens that implement it

**Will Become:** `SPEC_REQUIREMENT`

**Rationale:** Traceability element; validates coverage

---

### Concept: Generator (State Diagram)
**Definition:** Component that transforms SPEC_DOCUMENT into a state diagram (SVG)
**Attributes:**
- (stateless, takes document as input)

**Behaviors:**
- Accept SPEC_DOCUMENT
- Create GraphViz DOT representation
- Invoke GraphViz to render SVG
- Return SVG content or error
- Handle rendering failures gracefully

**Will Become:** `STATE_DIAGRAM_GENERATOR`

**Rationale:** Separates state diagram generation from other generators

---

### Concept: Generator (Screen Mockup)
**Definition:** Component that transforms SPEC_SCREEN into a mockup SVG
**Attributes:**
- (stateless)

**Behaviors:**
- Accept SPEC_SCREEN
- Render widgets as SVG boxes with labels
- Respect layout grid
- Return SVG content or error
- Generate one SVG per screen

**Will Become:** `SCREEN_MOCKUP_GENERATOR`

**Rationale:** Separates screen visualization from state machine visualization

---

### Concept: Generator (Traceability Report)
**Definition:** Component that transforms SPEC_DOCUMENT into a traceability markdown report
**Attributes:**
- (stateless)

**Behaviors:**
- Accept SPEC_DOCUMENT
- Generate markdown table: requirement → states → screens
- Add cross-references
- Return markdown content

**Will Become:** `TRACEABILITY_REPORT_GENERATOR`

**Rationale:** Separates reporting from diagram generation

---

### Concept: Loader
**Definition:** Component that parses JSON file into SPEC_DOCUMENT
**Attributes:**
- (stateless or minimal state)

**Behaviors:**
- Open file by path
- Parse JSON using simple_json
- Validate against GUI_JSON_SPEC_PROTOCOL schema
- Build SPEC_DOCUMENT from parsed JSON
- Return SPEC_DOCUMENT or error with details

**Will Become:** `SPEC_LOADER`

**Rationale:** Centralizes parsing and validation logic

---

### Concept: Facade (SIMPLE_SPEC_VIZ)
**Definition:** Single entry point coordinating all generators and loaders
**Attributes:**
- loader: SPEC_LOADER
- state_diagram_gen: STATE_DIAGRAM_GENERATOR
- screen_mockup_gen: SCREEN_MOCKUP_GENERATOR
- traceability_gen: TRACEABILITY_REPORT_GENERATOR
- last_error: detachable STRING

**Behaviors:**
- Load spec from file (delegates to loader)
- Load spec from JSON string
- Generate state diagram
- Generate screen mockups (all)
- Generate traceability report
- Batch generate all outputs
- Report errors

**Will Become:** `SIMPLE_SPEC_VIZ`

**Rationale:** Single API for library users; hides complexity of multiple generators

---

### Concept: Result (Operation)
**Definition:** Container for operation result (success or error)
**Attributes:**
- is_success: BOOLEAN
- content: detachable STRING (output if successful)
- error_message: detachable STRING (error details if failed)
- name: detachable STRING (filename for this result)

**Behaviors:**
- Determine success/failure
- Query content (with guarantee it's not null if is_success)
- Query error (with guarantee it's not null if not is_success)

**Will Become:** `SPEC_VIZ_RESULT`

**Rationale:** Uniform error handling across all generators

---

## Concept Relationships

```
SPEC_DOCUMENT (root)
        │
        ├─ contains ──→ SPEC_STATE (many)
        │                   │
        │                   └─ (initial, final, normal)
        │
        ├─ contains ──→ SPEC_TRANSITION (many)
        │                   │
        │                   └─ from/to SPEC_STATE
        │
        ├─ contains ──→ SPEC_SCREEN (many)
        │                   │
        │                   └─ contains ──→ SPEC_WIDGET (many)
        │
        └─ contains ──→ TRACEABILITY_MATRIX
                            │
                            └─ links SPEC_REQUIREMENT to SPEC_STATE/SPEC_SCREEN

Generators (all work with SPEC_DOCUMENT):
    STATE_DIAGRAM_GENERATOR         ──→ SPEC_VIZ_RESULT (SVG)
    SCREEN_MOCKUP_GENERATOR         ──→ LIST[SPEC_VIZ_RESULT] (multiple SVGs)
    TRACEABILITY_REPORT_GENERATOR   ──→ SPEC_VIZ_RESULT (Markdown)

Loader:
    SPEC_LOADER                     ──→ detachable SPEC_DOCUMENT

Facade:
    SIMPLE_SPEC_VIZ (uses all of the above)
```

---

## Domain Rules

| Rule | Description | Enforcement | In Code |
|------|-------------|-------------|---------|
| DR-001 | State ID must be unique within document | Precondition in add_state | SPEC_DOCUMENT.add_state |
| DR-002 | Transition source/target must reference valid states | Validation in loader/generator | SPEC_LOADER, generators |
| DR-003 | Screen ID must be unique within document | Precondition in add_screen | SPEC_DOCUMENT.add_screen |
| DR-004 | Each state must have is_initial OR is_final OR neither, not both | Invariant | SPEC_STATE invariant |
| DR-005 | Initial state query returns at most one state | Postcondition | SPEC_DOCUMENT.initial_state |
| DR-006 | Widget layout must fit screen bounds | Validation in screen generator | SCREEN_MOCKUP_GENERATOR |
| DR-007 | Transition labels must be non-empty (event + guard) | Postcondition | SPEC_TRANSITION.label |
| DR-008 | Traceability map must not reference non-existent states/screens | Validation in traceability generator | TRACEABILITY_REPORT_GENERATOR |
| DR-009 | Generator must always return SPEC_VIZ_RESULT (never throw) | Design principle | All generators |
| DR-010 | Loader must report file not found, invalid JSON, schema error separately | Error specificity | SPEC_LOADER |

---

## Glossary

| Term | Definition | Examples |
|------|------------|----------|
| Specification | Complete, formal description of GUI behavior in JSON format | auth_flow.json, crud_application.json |
| State Machine | Directed graph of states and transitions modeling application behavior | login → authenticating → logged_in |
| Guard | Condition on transition that must be true to transition | username_not_empty, age >= 18 |
| Entry Action | Side effect triggered when entering a state | show_login_form, disable_submit_button |
| Traceability | Linkage between requirements and implementation elements | REQ-001 → login state → login_form screen |
| Widget | Single UI control (button, text field, label, etc.) | "Submit" button, "Username" text field |
| Mockup | Wireframe-level visual representation of screen layout | Screen showing widget positions and labels |
| SVG | Scalable Vector Graphics format for diagrams | state_machine.svg, login_form.svg |
| DOT | Graph description language used by GraphViz | Input language for rendering diagrams |
| Facade | Single API hiding complex subsystems | SIMPLE_SPEC_VIZ coordinates generators |

---

## Domain Patterns

### Builder Pattern
Used for constructing SPEC_DOCUMENT and configuring SIMPLE_SPEC_VIZ:
```
create {SIMPLE_SPEC_VIZ}.make
    .set_{option}
    .execute
```

### Facade Pattern
SIMPLE_SPEC_VIZ simplifies complex coordination of SPEC_LOADER + multiple generators

### Result Pattern
SPEC_VIZ_RESULT encapsulates success/failure instead of throwing exceptions:
```
if result.is_success then
    process(result.content)
else
    handle_error(result.error_message)
end
```

### Separation of Concerns
- SPEC_LOADER: Parsing and validation
- STATE_DIAGRAM_GENERATOR: State machine visualization
- SCREEN_MOCKUP_GENERATOR: Screen layout visualization
- TRACEABILITY_REPORT_GENERATOR: Coverage reporting
- Each handles one concern only

---

## Domain Validation

**Key Questions Answered:**
1. **What is being built?** Visualization tool for GUI specifications
2. **What are the core concepts?** Spec, State, Transition, Screen, Widget, Generators
3. **How do they relate?** Spec contains States/Transitions/Screens; Generators transform them
4. **What are the rules?** Uniqueness, references, relationships enforced
5. **What patterns apply?** Builder, Facade, Result, Separation of Concerns
6. **Is it complete?** Yes - 13 concepts cover all specification and processing needs

**Ready for Class Design:** YES
- Domain is clear
- Concepts are distinct
- Relationships are understood
- Rules are documented
- Patterns are identified
