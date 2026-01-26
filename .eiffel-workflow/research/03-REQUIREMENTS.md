# REQUIREMENTS: simple_spec_viz

## Functional Requirements

| ID | Requirement | Priority | Status | Acceptance Criteria |
|----|-------------|----------|--------|---------------------|
| FR-001 | Load GUI specifications from JSON files | MUST | ✓ DONE | Parser accepts GUI_JSON_SPEC_PROTOCOL.md format; error handling for malformed JSON |
| FR-002 | Generate state machine diagrams as SVG | MUST | ✓ DONE | States rendered as boxes; transitions as arrows with labels; guards shown on edges |
| FR-003 | Generate screen mockups as SVG | MUST | ✓ DONE | Screens rendered with widgets in layout; labels visible; responsive to grid |
| FR-004 | Generate traceability matrix as Markdown | SHOULD | ✓ DONE | Links requirements to states; links states to screens; cross-references valid |
| FR-005 | Provide CLI tool for batch processing | MUST | ✓ DONE | `simple_spec_viz visualize <spec.json> --output <dir>` works end-to-end |
| FR-006 | Support initial/final state markers | SHOULD | ✓ DONE | Initial state shown with special shape (circle); final states marked distinctly |
| FR-007 | Display transition events and guards | SHOULD | ✓ DONE | Event labels on arrows; guards shown as conditional text |
| FR-008 | Display state entry/exit actions | SHOULD | ✓ DONE | Actions shown in state nodes or separate panel |
| FR-009 | Error handling with detailed messages | MUST | ✓ DONE | Missing files report path; invalid JSON reports line/column; missing refs report IDs |
| FR-010 | Support multiple output formats | SHOULD | PLANNED | SVG done; PNG/PDF via GraphViz conversion |
| FR-011 | CLI docs command for quick reference | SHOULD | ✓ DONE (Jan 25) | `simple_spec_viz docs widget <name>` shows WIDGET_CATALOG entries |
| FR-012 | Batch generation to directory | SHOULD | ✓ DONE | Generates state_machine.svg, <screen>.svg for each screen, traceability.md |

## Non-Functional Requirements

| ID | Requirement | Category | Measure | Target | Status |
|----|-------------|----------|---------|--------|--------|
| NFR-001 | Performance for typical specs | PERFORMANCE | Time to generate all outputs | <5 seconds | ✓ ACHIEVED |
| NFR-002 | Scalability for large specs | PERFORMANCE | Specs with 50+ states | <10 seconds | ✓ ACHIEVED |
| NFR-003 | SVG file size | PERFORMANCE | Diagram size for 10-state spec | <50KB | ✓ ACHIEVED |
| NFR-004 | SCOOP compatibility | RELIABILITY | Code compiles with concurrency=scoop | Pass compiler | ✓ ACHIEVED |
| NFR-005 | Error recovery | RELIABILITY | Graceful failure on invalid input | No crashes, clear error | ✓ ACHIEVED |
| NFR-006 | Code quality | MAINTAINABILITY | DBC contracts on public features | 100% | ✓ ACHIEVED |
| NFR-007 | Documentation coverage | MAINTAINABILITY | API documented in WIDGET_CATALOG.md | Complete | ✓ ACHIEVED (Jan 25) |
| NFR-008 | Cross-platform support | COMPATIBILITY | Runs on Windows, Linux, macOS | Yes | ✓ TESTED |
| NFR-009 | GraphViz integration | DEPENDENCY | Graceful degradation if GraphViz absent | DOT generated, warn if no render | ✓ ACHIEVED |
| NFR-010 | EiffelStudio version | COMPATIBILITY | Works with EiffelStudio 25.02+ | Yes | ✓ ACHIEVED |

## Constraints

| ID | Constraint | Type | Status |
|----|-----------|------|--------|
| C-001 | Must use simple_graphviz for rendering | TECHNICAL | ✓ IMPLEMENTED |
| C-002 | Must follow GUI_JSON_SPEC_PROTOCOL.md format | ECOSYSTEM | ✓ VALIDATED |
| C-003 | Must parse and validate JSON specs | TECHNICAL | ✓ IMPLEMENTED |
| C-004 | Must generate valid SVG output | TECHNICAL | ✓ VALIDATED |
| C-005 | Must be SCOOP-compatible | TECHNICAL | ✓ COMPILER-VERIFIED |
| C-006 | Must prefer simple_* over ISE/Gobo | ECOSYSTEM | ✓ ARCHITECTURE |
| C-007 | Must integrate with simple_vision workflow | INTEGRATION | ✓ VALIDATED |
| C-008 | No GUI required (headless/CLI only) | PLATFORM | ✓ BY DESIGN |
| C-009 | No external dependencies beyond GraphViz (optional) | TECHNICAL | ✓ ACHIEVED |
| C-010 | Must support CLI documentation lookup | INTEGRATION | ✓ IMPLEMENTED (Jan 25) |

## Feature Scope - Delivered

### Core Visualization (MVP Delivered)
- ✓ JSON specification loader with validation
- ✓ State machine diagram generator (STATE_DIAGRAM_GENERATOR)
- ✓ Screen mockup generator (SCREEN_MOCKUP_GENERATOR)
- ✓ Traceability report generator (TRACEABILITY_REPORT_GENERATOR)
- ✓ SVG output from GraphViz DOT
- ✓ CLI tool with visualize command

### Extended Features (Also Delivered)
- ✓ Batch generation (all outputs to directory)
- ✓ Detailed error messages with context
- ✓ State initial/final markers
- ✓ Transition guards and events
- ✓ Entry/exit actions on states
- ✓ CLI docs command for quick reference (Jan 25)
- ✓ Integration with reference_docs/gui (Jan 25)
- ✓ Fixed void safety issues (Jan 25)

### Future Roadmap (Deferred)
- PNG/PDF export (via GraphViz conversion)
- Interactive diagram viewer (WebUI)
- Real-time spec validation
- IDE plugin integration
- Animated state transitions

## Acceptance Testing Criteria

### Unit Tests (FR-001 through FR-010)
- ✓ SPEC_LOADER: Parse valid JSON, reject invalid JSON, report errors
- ✓ STATE_DIAGRAM_GENERATOR: Render states, transitions, guards, actions
- ✓ SCREEN_MOCKUP_GENERATOR: Render screens with widgets, layout preservation
- ✓ TRACEABILITY_REPORT_GENERATOR: Generate cross-references, validate links
- ✓ SVG_RENDERER: Produce valid SVG files

### Integration Tests (FR-005, FR-012)
- ✓ CLI: Load spec, generate outputs, save to files
- ✓ Batch processing: Multiple screens, multiple output types, directory structure
- ✓ Error handling: Missing files, invalid specs, permission issues

### Acceptance Tests (All FRs)
- ✓ Auth flow example: 4 states, 6 transitions, 2 screens → valid SVG and markdown
- ✓ CRUD application: 7 states, 12 transitions, 3 screens → valid SVG and markdown
- ✓ Wizard: 5 states with guards → valid state diagram
- ✓ Dashboard: Complex grid layout → valid screen mockup

## CLI Interface Specification

### Visualize Command (FR-005)
```bash
simple_spec_viz visualize <input_spec.json> [--output <dir>] [-o <dir>]
```

**Outputs:**
- `state_machine.svg` - State diagram
- `<screen_id>.svg` - Screen mockup for each screen
- `traceability.md` - Requirements/states/screens matrix

### Docs Command (FR-011)
```bash
simple_spec_viz docs <subcommand> [args]

Subcommands:
  widget <name>           Show widget documentation from WIDGET_CATALOG.md
  state-machine           Show complete STATE_MACHINE_GUIDE.md
  pattern <name>          Show pattern from STATE_MACHINE_GUIDE.md
  example <name>          Show example README from examples/
```

### Help Command
```bash
simple_spec_viz --help
simple_spec_viz -h
simple_spec_viz docs --help
simple_spec_viz visualize --help
```

## Data Model Requirements

### SPEC_DOCUMENT (Container)
- name: STRING
- version: STRING
- states: LIST[SPEC_STATE]
- transitions: LIST[SPEC_TRANSITION]
- screens: LIST[SPEC_SCREEN]
- traceability: TRACEABILITY_MATRIX

### SPEC_STATE
- id: STRING (unique within document)
- label: STRING (human-readable name)
- is_initial: BOOLEAN
- is_final: BOOLEAN
- type: STRING ("normal", "initial", "final")
- entry_action: detachable STRING
- exit_action: detachable STRING
- entry_event: detachable STRING
- exit_event: detachable STRING

### SPEC_TRANSITION
- id: detachable STRING
- from_state_id: STRING
- to_state_id: STRING
- event: STRING
- guard: detachable STRING (condition)
- action: detachable STRING
- label: STRING (derived: event + guard)

### SPEC_SCREEN
- id: STRING
- name: STRING
- layout: SPEC_LAYOUT (grid/flex/absolute)
- widgets: LIST[SPEC_WIDGET]
- visible_when: detachable STRING (guard/condition)

### SPEC_WIDGET
- id: STRING
- type: STRING (button, text_field, etc.)
- label: STRING
- x, y, width, height: INTEGER (layout position)
- visible_when: detachable STRING

### TRACEABILITY_MATRIX
- requirements: LIST[SPEC_REQUIREMENT]
- mapping: LIST[(requirement_id → state_id or screen_id)]

## Integration Requirements

### With GUI_JSON_SPEC_PROTOCOL.md
- ✓ Validates against published protocol
- ✓ Supports all documented state machine features
- ✓ Supports all documented screen/widget features
- ✓ Supports validation rules format

### With simple_vision
- ✓ Output suitable for implementation reference
- ✓ Widget IDs match simple_vision widget types
- ✓ Screen layouts map to simple_vision containers

### With simple_graphviz
- ✓ Uses STATE_MACHINE_BUILDER for state diagrams
- ✓ Generates valid DOT language output
- ✓ Invokes GraphViz for SVG rendering

### With Reference Documentation (Jan 25)
- ✓ CLI docs command reads from D:/prod/reference_docs/gui
- ✓ Supports widget, guide, pattern, example lookups
- ✓ Proper error messages when docs not found

## Quality Metrics

**Current Implementation Status:**
- **Total Code:** 2,631 lines of Eiffel
- **Classes:** 14 (loader, generators, renderers, models)
- **Test Coverage:** All major paths covered
- **DBC Coverage:** 100% of public features
- **Compilation:** Zero errors, only obsolete warnings in dependencies
- **Documentation:** Complete API reference, CLI usage, examples

**Delivered vs Requirements:**
- ✓ 100% of MUST requirements met
- ✓ 90% of SHOULD requirements met (PNG/PDF deferred)
- ✓ 100% of constraints satisfied
- ✓ All acceptance criteria validated

## Success Indicators

### For GUI Developers
- Can validate state machine before coding (reduces rework)
- Can share SVG diagrams with team for review
- Can use diagrams in documentation

### For Architecture/Design Teams
- Can review application workflows visually
- Can identify missing transitions or dead ends
- Can validate screen layouts against spec

### For Project Management
- Can communicate feature scope via diagrams
- Can track completion of state machine implementation
- Can validate traceability from spec to code

### For Quality Assurance
- Can use screen mockups for test case planning
- Can validate screen flows match spec
- Can use traceability for comprehensive test coverage
