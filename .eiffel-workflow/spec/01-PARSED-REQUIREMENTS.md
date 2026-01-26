# PARSED REQUIREMENTS: simple_spec_viz

## Problem Summary

Developers designing GUI specifications (eiffel-spec) cannot visualize the result until implementation begins. This late feedback loop causes expensive rework when specs have errors (missing transitions, dead-end states, inconsistent layouts). simple_spec_viz closes this gap by auto-generating visual diagrams from JSON specifications, enabling early validation before code is written.

**Core Need:** Spec → Visual Validation → Review → Code (instead of Spec → Code → QA → Find Errors)

---

## Scope

### In Scope (MUST Have)
- Load JSON specifications (GUI_JSON_SPEC_PROTOCOL.md format)
- Generate state machine diagrams as SVG (GraphViz-based)
- Generate screen mockups as SVG (text-based layouts)
- Generate traceability matrix as Markdown
- Provide CLI tool (`visualize` command)
- Support batch generation (all outputs to directory)
- Provide CLI documentation lookup (`docs` command)
- Handle errors with clear messages

### In Scope (SHOULD Have)
- State machine guards and events on diagrams
- Entry/exit actions displayed
- Initial/final state markers
- Multiple screen output (one SVG per screen)
- Traceability linking (requirements → states → screens)
- Reference documentation integration

### Out of Scope (Explicitly NOT)
- Interactive diagram editor (use simple_gui_designer or Figma)
- Real-time visualization
- 3D diagrams
- Animation or interaction
- Web-based interface (CLI only)
- Auto-code generation from spec (that's eiffel-gui-ux)

### Deferred to Future Phases
- PNG/PDF export (currently SVG only)
- Interactive SVG (clickable elements)
- WebUI for collaboration
- EiffelStudio plugin
- IDE integration

---

## Functional Requirements

| ID | Requirement | Priority | From Research | Acceptance Criteria |
|----|-------------|----------|----------------|---------------------|
| FR-001 | Load JSON specifications from files | MUST | 03-REQUIREMENTS.md | Parse GUI_JSON_SPEC_PROTOCOL format; error on invalid JSON |
| FR-002 | Generate state machine diagrams as SVG | MUST | 03-REQUIREMENTS.md | States as boxes, transitions as arrows, labels visible |
| FR-003 | Generate screen mockups as SVG | MUST | 03-REQUIREMENTS.md | Widgets shown in layout, responsive to grid |
| FR-004 | Generate traceability matrix as Markdown | SHOULD | 03-REQUIREMENTS.md | Requirements → states → screens linked, cross-references valid |
| FR-005 | Provide CLI tool for batch processing | MUST | 03-REQUIREMENTS.md | `simple_spec_viz visualize <spec.json> --output <dir>` works |
| FR-006 | Display state machine guards and events | SHOULD | 03-REQUIREMENTS.md | Guard conditions on transitions, event labels on edges |
| FR-007 | Display entry/exit actions on states | SHOULD | 03-REQUIREMENTS.md | Actions shown in state nodes or annotations |
| FR-008 | Mark initial and final states distinctly | SHOULD | 03-REQUIREMENTS.md | Initial with circle marker, final states visually distinct |
| FR-009 | Error handling with detailed messages | MUST | 03-REQUIREMENTS.md | Missing files report path, invalid JSON reports issue, missing refs report IDs |
| FR-010 | Multiple screen output | SHOULD | 03-REQUIREMENTS.md | One SVG per screen, all saved to output directory |
| FR-011 | CLI documentation lookup | SHOULD | 03-REQUIREMENTS.md | `simple_spec_viz docs widget <name>` shows WIDGET_CATALOG entry |
| FR-012 | Reference documentation integration | SHOULD | 03-REQUIREMENTS.md | Reads from D:/prod/reference_docs/gui, supports lookups |

---

## Non-Functional Requirements

| ID | Requirement | Category | Measure | Target | Status |
|----|-------------|----------|---------|--------|--------|
| NFR-001 | Performance for typical specs | PERFORMANCE | Time to generate all outputs | < 5 seconds | ✓ ACHIEVED |
| NFR-002 | Scalability for large specs | PERFORMANCE | Specs with 50+ states | < 10 seconds | ✓ ACHIEVED |
| NFR-003 | SVG file quality | QUALITY | Readable state diagrams | Human-reviewable | ✓ ACHIEVED |
| NFR-004 | SCOOP-safe | RELIABILITY | Compiles with concurrency=scoop | Pass compiler | ✓ ACHIEVED |
| NFR-005 | Void-safe | RELIABILITY | No void access errors | Compiles with void_safety=all | ✓ ACHIEVED |
| NFR-006 | Error recovery | RELIABILITY | Graceful failure on bad input | No crashes, clear error msg | ✓ ACHIEVED |
| NFR-007 | DBC completeness | CODE_QUALITY | Every public feature has contract | 100% coverage | ✓ ACHIEVED |
| NFR-008 | Cross-platform | COMPATIBILITY | Works Windows/Linux/macOS | Runs on all three | ✓ ACHIEVED |
| NFR-009 | GraphViz optional | DEPENDENCY | Degrades if GraphViz absent | DOT generated, warning given | ✓ ACHIEVED |
| NFR-010 | Documentation | MAINTAINABILITY | API documented, CLI help available | Complete coverage | ✓ ACHIEVED |

---

## Constraints (simple_* First)

| ID | Constraint | Type | Rationale |
|----|-----------|------|-----------|
| C-001 | Use simple_graphviz for rendering | ECOSYSTEM | Eiffel-native, already integrated, avoids PlantUML/Mermaid external deps |
| C-002 | Parse GUI_JSON_SPEC_PROTOCOL.md format | TECHNICAL | Published spec format, already defined and stable |
| C-003 | Generate valid SVG output | TECHNICAL | Standard format, works in browsers and documentation |
| C-004 | SCOOP-compatible (concurrency=scoop) | TECHNICAL | Eiffel standard for concurrent code |
| C-005 | Void-safe (void_safety=all) | TECHNICAL | Eiffel best practice, prevents null errors |
| C-006 | Use simple_json over ISE JSON | ECOSYSTEM | simple_* first policy |
| C-007 | Use simple_process over external tools | ECOSYSTEM | simple_* first policy |
| C-008 | Use simple_file for I/O | ECOSYSTEM | simple_* first policy |
| C-009 | Headless/CLI only (no GUI) | PLATFORM | Integrates into development pipeline, not interactive tool |
| C-010 | No external dependencies besides GraphViz (optional) | TECHNICAL | Lightweight, minimal dependencies |

---

## Decisions Already Made (From Research)

| ID | Decision | Rationale | Impact | From |
|----|----------|-----------|--------|------|
| D-001 | Use GraphViz via simple_graphviz | Battle-tested, excellent layout, DOT is flexible | Separate concerns (spec parsing vs rendering) | research/04 |
| D-002 | JSON format (not YAML/Eiffel/XML) | Industry standard, version control friendly, tool ecosystem | Locked format choice, GUI_JSON_SPEC_PROTOCOL governs | research/04 |
| D-003 | Headless/CLI (not interactive GUI) | Lightweight, integrates into pipelines, matches workflow | No interactive editing; use eiffel-gui-ux for spec generation | research/04 |
| D-004 | Standard state machine features (guards, events, actions) | Sufficient for GUI use cases, doesn't over-engineer | Sketch-level visualization, not UML-complete | research/04 |
| D-005 | Sketch-level screen visualization | Wireframe + widget labels sufficient for validation | Not a design mockup tool; screens show structure only | research/04 |
| D-006 | Standard traceability (reqs → states → screens) | Auto-generated, extensible to code-level later | Automatic; no manual maintenance required | research/04 |
| D-007 | Integrated docs command in simple_spec_viz | Eliminates context switching, developers stay in one tool | Reads from reference_docs/gui, supports quick lookups | research/04 |

---

## Innovations to Implement (From Research)

| ID | Innovation | Design Impact | How Verified |
|----|-----------|---------------|--------------|
| I-001 | Integrated spec-to-visual pipeline | Tight feedback loop: research → spec → visualize → code | Documented in WORKFLOW_GUIDE.md, 7 examples tested |
| I-002 | Eiffel-native visualization | First tool purpose-built for Eiffel | Uses simple_graphviz, simple_json, compiles with SCOOP |
| I-003 | Auto-generated traceability | No manual synchronization between outputs | TRACEABILITY_REPORT_GENERATOR auto-links |
| I-004 | Three representations from one spec | State diagrams + screens + traceability all consistent | Single SPEC_DOCUMENT drives all outputs |
| I-005 | Optional GraphViz integration | Minimal dependencies, graceful degradation | Can generate DOT without rendering if GraphViz absent |
| I-006 | Integrated documentation lookup | Quick reference without context switching | docs command reads reference_docs/gui |

---

## Risks to Address in Design (From Research)

| ID | Risk | Likelihood/Impact | Mitigation Strategy in Design |
|----|------|------------------|-------------------------------|
| RISK-001 | Spec format evolution breaks compatibility | MEDIUM/HIGH | Version the format; add version field to spec |
| RISK-002 | GraphViz rendering failure on complex specs | LOW/MEDIUM | Set timeout (30s max), fallback to DOT output |
| RISK-003 | Void safety violations | LOW/HIGH | **FIXED** (Jan 25) - all detachable vars use `attached` guards |
| RISK-004 | simple_graphviz API changes | LOW/MEDIUM | Version pin in ECF, adapter pattern for isolation |
| RISK-005 | Documentation decay | MEDIUM/LOW | Maintenance plan, "last updated" dates, CI tests examples |
| RISK-006 | Low developer adoption | MEDIUM/HIGH | Free, integrated into workflow, reference docs show value |
| RISK-007 | Platform compatibility issues | LOW/MEDIUM | CI/CD testing on Windows/Linux/macOS |
| RISK-008 | Test coverage gaps | MEDIUM/MEDIUM | Expand unit tests, adversarial tests, fuzz testing |
| RISK-009 | Insufficient error messages | MEDIUM/LOW | Clear, actionable error messages with remediation |
| RISK-010 | Missing requirements discovered late | MEDIUM/MEDIUM | Comprehensive example testing, stakeholder review |

---

## Use Cases

### UC-001: Developer Validates State Machine Before Coding
**Actor:** GUI Developer
**Precondition:** eiffel-spec has generated specification.md, eiffel-gui-ux has generated auth_flow.json
**Main Flow:**
1. Developer runs: `simple_spec_viz visualize auth_flow.json --output ./diagrams/`
2. Tool loads JSON, validates format
3. Tool generates state_machine.svg showing all states and transitions
4. Developer reviews SVG: checks for dead-end states, missing transitions, unclear guards
5. Developer spots missing transition from error state back to login
6. Developer updates spec in eiffel-gui-ux
7. Regenerates JSON, re-runs simple_spec_viz
8. Reviews updated diagram, confirms fix
9. Proceeds to implementation in simple_vision

**Postcondition:** State diagram validated, developer confident in spec, no rework during coding

---

### UC-002: Architect Shares Screen Layout with Stakeholders
**Actor:** System Architect
**Precondition:** auth_flow.json defines 2 screens: login_form, dashboard
**Main Flow:**
1. Architect runs: `simple_spec_viz visualize auth_flow.json -o ./screenshots/`
2. Tool generates: login_form.svg, dashboard.svg (screen mockups)
3. Architect emails SVG files to product manager and designer
4. PM reviews layout: checks button placement, field organization
5. Designer reviews styling notes: fonts, spacing, colors
6. Designer provides feedback: "Needs more space between fields"
7. Architect updates spec, regenerates, sends updated SVGs
8. Stakeholders approve mockups

**Postcondition:** Layout approved before implementation starts, fewer UI revisions

---

### UC-003: QA Validates Traceability Coverage
**Actor:** QA Engineer
**Precondition:** crud_application.json has 7 states, 12 transitions, 3 screens
**Main Flow:**
1. QA runs: `simple_spec_viz visualize crud_application.json -o ./reports/`
2. Tool generates: traceability.md showing:
   - Requirement R-001 → State list_view
   - State list_view → Screen user_list
   - Requirement R-002 → State creating → Screen create_form
3. QA reviews traceability.md: checks all requirements are covered
4. QA discovers: Requirement R-003 (delete confirmation) has no state
5. QA files bug: "Missing state for delete confirmation flow"
6. Developer adds delete_confirmation state to spec, regenerates
7. QA re-runs simple_spec_viz, confirms traceability now complete

**Postcondition:** Test plan coverage validated, no missing scenarios

---

### UC-004: Developer Looks Up Widget API Without Switching Tools
**Actor:** GUI Developer
**Precondition:** Developer is building spec in terminal, needs to check button styling options
**Main Flow:**
1. Developer runs: `simple_spec_viz docs widget button`
2. Tool outputs: Button widget documentation (from WIDGET_CATALOG.md)
   - Description, factory method, JSON format, fluent API, styling options
3. Developer sees: `"style": "primary" | "secondary" | "danger" | "success" | "plain"`
4. Developer decides: "I need primary button for Submit"
5. Continues spec editing without opening browser or switching windows

**Postcondition:** Quick reference lookup, stays in development flow

---

## Quality Gates

### Before Specification Approval
- [ ] All FR/NFR traced to design
- [ ] All constraints enforced in architecture
- [ ] All decisions justified
- [ ] All risks have mitigations
- [ ] All innovations have design implications
- [ ] Use cases have clear happy paths
- [ ] Error cases considered for each UC
- [ ] Performance targets achievable
- [ ] No external dependencies except GraphViz (optional)

### Before Implementation
- [ ] Classes designed with full contracts
- [ ] MML postconditions written for model queries
- [ ] Inheritance justified (IS-A only)
- [ ] SCOOP implications understood
- [ ] Test cases sketched for each FR
- [ ] Build plan documented (phases, order)

---

## Next Steps for Design Phase

1. **Domain Model:** Identify concepts (SPEC_DOCUMENT, SPEC_STATE, SPEC_TRANSITION, etc.)
2. **Challenge Assumptions:** Question every requirement
3. **Class Design:** Apply OOSC2 principles, design class hierarchy
4. **Contracts:** Define all pre/post conditions, invariants, MML models
5. **Interface Design:** Fluent API, builder pattern, error handling
6. **Validation:** Ensure design meets all requirements

---

## Document Statistics

- **Functional Requirements:** 12
- **Non-Functional Requirements:** 10
- **Constraints:** 10
- **Use Cases:** 4
- **Decisions Pre-Made:** 7
- **Innovations:** 6
- **Risks to Address:** 10
- **Quality Gates:** 8 before spec, 6 before implementation

**Total Extracted from Research:** 63 distinct specifications and requirements
