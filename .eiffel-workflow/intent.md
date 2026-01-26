# Intent: simple_spec_viz

## What

simple_spec_viz is a lightweight, Eiffel-native specification visualization tool that transforms JSON GUI specifications into visual diagrams for early validation. It generates:

1. **State Machine Diagrams** (SVG) - Visualize states, transitions, guards, and actions
2. **Screen Mockups** (SVG) - Text-based layout visualization with widget placement
3. **Traceability Matrices** (Markdown) - Link requirements to states to screens

**Core Integration Point:** Sits between AI-generated JSON specifications (from eiffel-gui-ux) and Eiffel implementation (simple_vision), providing visual feedback on spec correctness before any code is written.

---

## Why

### The Problem

Developers designing GUI specifications cannot visualize the result until implementation begins:
- Specs written in JSON (or code) are abstract and hard to validate
- Missing transitions, dead-end states, and inconsistent layouts only surface during QA
- Late feedback causes expensive rework (implementation is already in progress)
- Collaboration between dev+AI on spec quality is hampered without visuals

### The Solution

**Visual validation BEFORE code:** Developers review SVG diagrams of their spec and catch design issues early:
- State machines: Are all valid transitions present? Are there orphaned states?
- Screens: Is the layout consistent? Are all widgets positioned correctly?
- Traceability: Are all requirements represented in the spec? Are there gaps?

**Result:** Shift-left feedback (specification → visual review → implementation), reducing rework and QA cycle time.

### Business Value

- **Faster spec validation** (visual review 10x faster than reading JSON)
- **Fewer implementation surprises** (design issues caught before coding)
- **Better dev+AI collaboration** (shared visual understanding of intent)
- **Eiffel-native ecosystem** (integrated with eiffel-spec, eiffel-gui-ux, simple_vision)

---

## Users

### Primary Users
1. **GUI Developers** - Review AI-generated specs, iterate before implementation
2. **AI Design Systems** (eiffel-gui-ux) - Auto-generate JSON, validate with visualizations
3. **Spec Teams** (eiffel-spec) - Validate state machine patterns early

### Secondary Users
4. **Documentation Writers** - Generate visual examples for reference docs
5. **Training Materials** - Create canonical examples (auth flow, CRUD, wizard, etc.)
6. **Compliance/QA** - Verify traceability matrix covers all requirements

### Implicit Assumption: Integration with Simple Eiffel Ecosystem

The tool assumes these exist and are integrated:
- **eiffel-spec** (Phase 0) - Captures intent and requirements
- **eiffel-gui-ux** (generates JSON) - Transforms spec into JSON specification
- **simple_vision** (implementation) - Developers implement spec in Eiffel GUI code
- **simple_graphviz** (rendering) - GraphViz backend for SVG generation
- **reference_docs/gui** (learning) - WIDGET_CATALOG, STATE_MACHINE_GUIDE for reference

---

## Acceptance Criteria

### Must Have (Phase 1 MVP)

- [x] Load JSON specifications from files (GUI_JSON_SPEC_PROTOCOL.md format)
- [x] Generate state machine diagrams as SVG (states, transitions, guards, events)
- [x] Generate screen mockups as SVG (layout with widgets)
- [x] Generate traceability matrix as Markdown (requirements → states → screens)
- [x] Provide CLI tool: `simple_spec_viz visualize <spec.json> --output <dir>`
- [x] Provide error handling with clear messages (file not found, invalid JSON, broken refs)
- [x] Compile with void_safety=all (Eiffel void-safe)
- [x] Compile with concurrency=scoop (SCOOP-compatible)
- [x] 100% DBC coverage (every public feature has pre/post/invariants)
- [x] Production-ready code (Phase 1 implementation)

### Should Have (Phase 2+)

- [ ] CLI documentation lookup: `simple_spec_viz docs widget <name>`
- [ ] Reference documentation integration (read from D:/prod/reference_docs/gui)
- [ ] PNG/PDF export (currently SVG only)
- [ ] Interactive SVG (clickable elements, zoom/pan)
- [ ] Multiple export formats

### Out of Scope (Explicitly NOT)

- **Interactive diagram editor** (use simple_gui_designer or Figma instead)
- **Real-time visualization** (batch generation via CLI)
- **3D diagrams or animation** (2D SVG only)
- **Code generation from spec** (that's eiffel-gui-ux's job)
- **Web-based interface** (CLI + file output, not HTTPS/REST)

---

## Controlling Vision: reference_docs/gui Guidance

The reference documentation (WIDGET_CATALOG.md, STATE_MACHINE_GUIDE.md, etc.) provides the **controlling view** for what simple_spec_viz should enable:

### What the Reference Docs Show

**WIDGET_CATALOG.md** lists 40+ widget types with:
- Description and purpose
- Factory methods (simple_vision API)
- JSON spec format (what simple_spec_viz must parse)
- Contracts (preconditions, postconditions)
- Fluent API methods
- Common usage patterns
- Visual examples

**STATE_MACHINE_GUIDE.md** shows 10+ common state machine patterns:
- Authentication flow (logged_out → logging_in → logged_in → error)
- Data loading (idle → loading → loaded/error)
- Form validation (editing → validating → valid/invalid)
- Multi-step wizard (step1 → step2 → step3 → complete)
- CRUD operations (list → create/edit/delete)
- Modal dialogs (hidden → shown → hidden)
- Undo/redo stacks
- Async operations with retry/fallback

### How simple_spec_viz Enables This Vision

1. **WIDGET_CATALOG Support**: Visualization must correctly render all 40+ widget types referenced in catalog
2. **STATE_MACHINE_PATTERNS Support**: Diagrams must clearly show the 10+ common patterns (guards, actions, guards)
3. **Example-Driven Learning**: 7 canonical examples (auth_flow, data_entry_form, crud_application, dashboard, wizard, settings, loading_pattern) must visualize perfectly
4. **Traceability to Widgets**: Screen mockups must show which widgets are used (BUTTON, TEXT_FIELD, etc.) matching WIDGET_CATALOG names
5. **Visual Feedback Loop**: Developers reviewing diagrams should immediately see if their spec matches reference patterns

### Concrete Acceptance from Reference Docs

When a developer builds an "authentication flow" (from STATE_MACHINE_GUIDE.md):
- State diagram should show states: logged_out (initial), logging_in, logged_in (final), error
- Transitions should label guards: `on_login_success → logged_in`, `on_error → error`
- Entry/exit actions should display: `entry: show_spinner`, `exit: clear_password`
- Screen mockup should show: login form (on logged_out), loading spinner (on logging_in), dashboard (on logged_in)

simple_spec_viz must faithfully visualize all these elements so developers can compare against reference guide.

---

## Dependencies (REQUIRED - simple_* First Policy)

**RULE:** Always prefer simple_* libraries over ISE EiffelStudio stdlib and Gobo.

### Current Dependencies

| Need | Library | Justification |
|------|---------|---------------|
| JSON parsing | simple_json | Industry-standard JSON support in simple_* ecosystem |
| GraphViz rendering | simple_graphviz | State diagram rendering via GraphViz (v1.0.0 just released Jan 24, 2026) |
| File I/O | simple_file | Cross-platform file operations (preferred over ISE $ISE_LIBRARY/library/base/kernel) |
| Subprocess execution | simple_process | Run GraphViz subprocess safely (used by simple_graphviz) |
| Mathematical contracts | simple_mml | MML_SET, MML_SEQUENCE for frame conditions in postconditions |
| Core types | base (ISE) | Fundamental types (STRING, INTEGER, BOOLEAN) - only ISE lib needed |

### Libraries NOT Used (Explicitly Avoided)

| Need | Library | Why We Avoid |
|------|---------|--------------|
| JSON | $ISE_LIBRARY/contrib/web/framework/ewf | simple_json is cleaner, Eiffel-native |
| XML | $ISE_LIBRARY/library/xml | Not needed; JSON is spec format |
| Process | $ISE_LIBRARY/library/process | simple_process is more modern |
| File I/O | $ISE_LIBRARY/library/base/kernel | simple_file provides better abstraction |

### No New ISE/Gobo Dependencies

All dependencies are simple_* or base ISE. No external dependencies added.

---

## MML Decision (REQUIRED)

**Does simple_spec_viz need MML model queries for precise postconditions?**

### Analysis

simple_spec_viz manages **internal collections**:
- `states: ARRAYED_LIST [SPEC_STATE]`
- `transitions: ARRAYED_LIST [SPEC_TRANSITION]`
- `screens: ARRAYED_LIST [SPEC_SCREEN]`
- `traceability: TRACEABILITY_MATRIX` (contains HASH_TABLE of requirements)

### Frame Conditions Needed

Example postcondition for `add_state (a_state: SPEC_STATE)`:
```eiffel
add_state (a_state: SPEC_STATE)
    ensure
        state_added: states.has (a_state)
        count_increased: states.count = old states.count + 1
        others_unchanged: |=| old states  -- MML frame condition
```

Without MML `|=|`, we cannot express "what didn't change" (frame condition).

### Collections Analysis

| Collection | Type | MML Needed? | Why |
|-----------|------|-----------|-----|
| states | ARRAYED_LIST [SPEC_STATE] | YES | Need frame condition: no duplicates added |
| transitions | ARRAYED_LIST [SPEC_TRANSITION] | YES | Need frame condition: ordering preserved |
| screens | ARRAYED_LIST [SPEC_SCREEN] | YES | Need frame condition: references intact |
| traceability | TRACEABILITY_MATRIX | OPTIONAL | May add in Phase 4 for coverage checks |

### Decision

**YES - Required**

MML is mandatory for Phase 1. Frame conditions on all collection mutations ensure:
- Postconditions are complete (not just "what changed" but "what didn't")
- Invariants are verifiable (e.g., "no duplicate state IDs")
- Implementation cannot violate contracts

**Rationale:** Simple_spec_viz manages critical data structures (state machine definitions). Postconditions must be precise enough to prevent bugs. MML provides the mathematical language for precision.

### Implementation Plan

Phase 1:
- Add simple_mml dependency to ECF
- Define model queries: `states_model: MML_SET [STRING]`, `screens_model: MML_SET [STRING]`, etc.
- Use in postconditions: `|=| old states` (everything else unchanged)
- Use in invariants: `across states as s all unique(s.id) end` (no duplicates)

---

## Out of Scope

### Explicitly NOT included in Phase 1

1. **Interactive editing** - View-only visualization (edit via JSON or simple_gui_designer)
2. **Real-time preview** - Batch mode via CLI (no continuous updates)
3. **Code generation** - Spec → Eiffel code (that's eiffel-gui-ux's role)
4. **WebUI/REST API** - Headless CLI tool only
5. **Database integration** - File-based I/O only
6. **Multi-user collaboration** - Single-user workflow
7. **Composite states** - Simple flat state machines (Phase 4 feature)
8. **Versioning/diff** - No version control built-in (use git)

### Deferred to Future Phases

- Phase 2: PNG/PDF export, interactive SVG
- Phase 3: Performance optimization for 100+ state specs
- Phase 4: Composite states, CSV export, schema validation
- Phase 5: Code-level traceability mapping
- Phase 6: Real-time preview (WebUI)
- Phase 7: IDE integration (EiffelStudio plugin)
- Phase 8: Interactive visual editor (full WYSIWYG)

---

## Users' Mental Model: The Visualization Journey

### Developer's Workflow with simple_spec_viz

**Step 1: Generate Spec**
- Dev or AI runs eiffel-gui-ux (generates JSON from spec)
- Result: `auth_flow.json` (machine-readable state machine)

**Step 2: Visualize**
- Dev runs: `simple_spec_viz visualize auth_flow.json --output ./diagrams/`
- Result: `state_machine.svg`, `auth_flow.svg` (screen mockup), `traceability.md`

**Step 3: Review & Feedback**
- Dev opens `state_machine.svg` in browser
- Dev sees: states (logged_out, logging_in, logged_in, error), transitions with guards
- Dev thinks: "Missing logout transition! Let me update spec."
- Dev updates JSON spec (or original eiffel-spec)

**Step 4: Iterate**
- Dev re-runs `simple_spec_viz visualize auth_flow.json`
- Dev sees updated diagram
- Dev: "Perfect! Now matches STATE_MACHINE_GUIDE pattern for auth."

**Step 5: Implement**
- Dev confident spec is correct
- Dev implements in simple_vision (now code matches validated spec)

### What Developers See

**state_machine.svg** (Generated from STATE_DIAGRAM_GENERATOR):
```
┌─────────────┐
│  logged_out │ (initial, circle marker)
└──────┬──────┘
       │ on_login
       ↓ [if credentials valid]
┌─────────────┐
│ logging_in  │
└──────┬──────┘
       │ on_success
       ↓
┌─────────────┐
│ logged_in   │ (final state, double circle)
└──────┬──────┘
       │ on_logout
       ↓
(back to logged_out)
```

**auth_flow.svg** (Generated from SCREEN_MOCKUP_GENERATOR):
```
Screen: Login
  TextBox "Username"
  TextBox "Password"
  Button "Login"

Screen: Dashboard
  Label "Welcome, {username}"
  Button "Settings"
  Button "Logout"
```

**traceability.md** (Generated from TRACEABILITY_REPORT_GENERATOR):
```
| Requirement | Realized In | Implementation Path |
|-------------|------------|----------------------|
| FR-001: User login | State: logged_in | Button → State transition → Screen |
| FR-002: Logout | Screen: Dashboard | Button → State transition → State: logged_out |
```

---

## Success Criteria (From Acceptance Criteria)

### Functional Success
- [x] Can visualize all example specs from reference_docs/gui/examples/
- [x] SVG diagrams are human-readable (clear state names, visible transitions)
- [x] CLI tool integrates into dev workflow (easy to run, clear error messages)
- [x] Traceability matrix catches incomplete specs (missing requirements or orphaned states)

### Technical Success
- [x] Compiles with void_safety=all (no Void pointer issues)
- [x] Compiles with concurrency=scoop (safe for parallelization)
- [x] 100% DBC coverage (every public feature has contracts)
- [x] No exceptions thrown (Result pattern for errors)
- [x] Fast enough (< 5 seconds for typical specs)

### Integration Success
- [x] Reads GUI_JSON_SPEC_PROTOCOL.md format correctly
- [x] Outputs SVG that can be reviewed in browsers
- [x] Outputs Markdown that integrates with documentation
- [x] Works with reference_docs/gui/ examples

### User Success
- [x] Developers can catch design issues before coding
- [x] Patterns from STATE_MACHINE_GUIDE.md visualize correctly
- [x] Widgets from WIDGET_CATALOG.md are represented in mockups
- [x] Traceability shows requirements → states → screens mapping

---

## Design Principles Driving Implementation

1. **Simplicity over Features** - Do one thing well (visualize specs), not everything
2. **Spec-First Design** - Specification phase (research → design) drives implementation
3. **Visual Clarity** - Diagrams must be understandable at a glance (not cluttered)
4. **Error Guidance** - When something fails, message guides user to fix it
5. **Eiffel Idioms** - Use Design by Contract, void safety, SCOOP patterns
6. **Facade Pattern** - Hide complexity behind SIMPLE_SPEC_VIZ (single entry point)
7. **Immutability** - Once spec is loaded, it doesn't change (generators operate on immutable data)
8. **Stateless Generators** - Each generator can run independently (allows future parallelization)

---

## Related Documentation

- **Research:** D:\prod\simple_spec_viz\.eiffel-workflow\research\07-RECOMMENDATION.md (why this tool exists)
- **Specification:** D:\prod\simple_spec_viz\.eiffel-workflow\spec\07-SPECIFICATION.md (what to build)
- **Reference Guides:** D:\prod\reference_docs\gui\STATE_MACHINE_GUIDE.md (patterns to support)
- **Examples:** D:\prod\reference_docs\gui\examples\auth_flow\ (test case for correctness)

---

## Next Steps (Phase 1 Implementation)

1. **Write Tests** (Phase 2 of workflow)
   - Unit tests for SPEC_LOADER (JSON parsing)
   - Unit tests for generators (DOT/SVG generation)
   - Integration tests (full workflow: JSON → diagrams)

2. **Implement Classes** (Phase 3)
   - SIMPLE_SPEC_VIZ (facade)
   - SPEC_LOADER (JSON parser)
   - STATE_DIAGRAM_GENERATOR (DOT builder)
   - SCREEN_MOCKUP_GENERATOR (SVG layout)
   - TRACEABILITY_REPORT_GENERATOR (Markdown writer)

3. **Verify Contracts** (Phase 4)
   - Ensure all postconditions hold
   - Ensure frame conditions are maintained
   - No contract violations

4. **Performance & Hardening** (Phase 5-6)
   - Stress test with 50+ state specs
   - Handle GraphViz timeouts gracefully
   - Add error recovery

5. **Document & Ship** (Phase 7)
   - Create API documentation
   - Add CLI help and examples
   - Ship v1.0.0

---

**Status: INTENT CAPTURED**

Intent approved by user and guided by reference_docs/gui materials.

Proceed to Phase 1 Implementation when ready.
