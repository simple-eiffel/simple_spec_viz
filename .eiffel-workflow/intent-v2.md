# Intent: simple_spec_viz (Refined - v2.0)

**Refined based on Grok AI review (10 probing questions, all resolved)**

---

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
1. **GUI Developers** (Eiffel experience, JSON familiarity, state machine understanding)
   - Review AI-generated specs, iterate before implementation
   - Prerequisites: Basic Eiffel knowledge, JSON editing skills, STATE_MACHINE_GUIDE.md concepts

2. **AI Design Systems** (eiffel-gui-ux)
   - Auto-generate JSON, validate with visualizations
   - Prerequisites: Implements GUI_JSON_SPEC_PROTOCOL.md v1.0+ format

3. **Spec Teams** (eiffel-spec)
   - Validate state machine patterns early
   - Prerequisites: Understanding of specification workflow

### Secondary Users
4. **Documentation Writers** - Generate visual examples for reference docs
5. **Training Materials** - Create canonical examples (auth flow, CRUD, wizard, etc.)
6. **Compliance/QA** - Verify traceability matrix covers all requirements

### User Prerequisites (Resolved Q5)

Users need:
- **Eiffel knowledge:** Basic understanding of Eiffel syntax and contracts (reference: EIFFEL_EXPERT_BRIEFING.md)
- **JSON literacy:** Ability to read/write JSON files and understand structure
- **State machine concepts:** Understanding from STATE_MACHINE_GUIDE.md (state, transition, guard, action, initial/final states)
- **CLI familiarity:** Comfortable running command-line tools with arguments and flags
- **SVG viewer:** Standard browser (Firefox, Chrome, Safari, Edge) for viewing generated diagrams

---

## Acceptance Criteria (Refined)

### Must Have (Phase 1 MVP)

#### Loading & Parsing
- [x] Load JSON specifications from files
  - Format: GUI_JSON_SPEC_PROTOCOL.md v1.0+ (version pinned, resolved Q6)
  - Input validation: Validate against schema; exit with error if invalid (resolved Q4-Option B)
  - Error handling: Report missing required fields ('states', 'transitions', 'screens') with suggestions (resolved Q3-Option A)

#### State Machine Diagrams
- [x] Generate state machine diagrams as SVG
  - States: Shown as labeled boxes
  - Transitions: Shown as labeled arrows with guards (e.g., "on_login_success [if credentials valid]")
  - Entry/exit actions: Displayed as state annotations (e.g., "entry: show_spinner")
  - Initial state: Marked with circle marker (●)
  - Final states: Marked with double circle marker (◉)
  - Accessibility: WCAG 2.1 Level AA compliance (resolved Q2-Option B)
    - Minimum font size: 12pt
    - Color contrast: 4.5:1 or higher
    - Scalable to 200% zoom without clarity loss
    - No overlapping elements in diagrams with up to 10 states

#### Screen Mockups
- [x] Generate screen mockups as SVG
  - Widgets: Shown with type (BUTTON, TEXT_FIELD, etc.) matching WIDGET_CATALOG.md
  - Layout: Text-based positioning showing widget arrangement
  - One SVG per screen in spec
  - Consistency: All widgets referenced in spec must be defined

#### Traceability Matrix
- [x] Generate traceability matrix as Markdown
  - Columns: Requirement | Realized In | Implementation Path
  - Requirements: Traced to states and screens
  - Gaps: Report if requirement has no implementation path
  - Automated verification: Diff-based comparison of elements (resolved Q7-Option B)

#### CLI Tool
- [x] Provide CLI tool with command: `simple_spec_viz visualize <spec.json> --output <dir>`
  - Input: Path to JSON spec file
  - Output: Directory for SVG + Markdown files
  - Error messages: Type, location (line number), suggested fix (resolved Q3-Option A)
  - Exit codes: 0 on success, non-zero on error

#### Error Handling
- [x] Provide error handling with clear, actionable messages
  - File not found: "File not found: /path/to/spec.json. Verify file path and permissions."
  - Invalid JSON: "Invalid JSON at line 42: Missing closing brace. See GUI_JSON_SPEC_PROTOCOL.md."
  - Broken references: "Widget reference 'UNKNOWN_WIDGET' at line 89 not in WIDGET_CATALOG.md. Valid widgets: BUTTON, TEXT_FIELD, ..."
  - Empty spec: "No states defined; visualization skipped. Add at least one state to spec."
  - GraphViz missing: "GraphViz not found. Install with: brew install graphviz (macOS), apt-get install graphviz (Linux), choco install graphviz (Windows)." (resolved Q8-Option A)

#### Eiffel Standards
- [x] Compile with void_safety=all (Eiffel void-safe)
- [x] Compile with concurrency=scoop (SCOOP-compatible)
- [x] 100% DBC coverage (every public feature has pre/post/invariants)
- [x] Design by Contract: All public features specify what they require and ensure
- [x] Production-ready code (Phase 1 implementation)

#### Performance
- [x] Performance for typical specs (resolved Q1-Option A)
  - **"Typical specs"** defined as: up to 10 states, 20 transitions, 5 screens
  - Target: < 5 seconds to generate all outputs
  - Based on 7 canonical examples in reference_docs/gui/examples/

### Should Have (Phase 2+)

- [ ] CLI documentation lookup: `simple_spec_viz docs widget <name>`
- [ ] Reference documentation integration (read from D:/prod/reference_docs/gui)
- [ ] PNG/PDF export (currently SVG only)
- [ ] Interactive SVG (clickable elements, zoom/pan)
- [ ] Multiple export formats

### Out of Scope (Explicitly NOT - Resolved Q10-Option C)

**Phase 1: No interactivity at all**
- NO JavaScript in SVG (`<script>` tags forbidden)
- NO clickable elements or event handlers
- NO tooltip hover effects (even basic SVG `<title>` elements deferred)
- NO zoom/pan functionality
- NO animations or transitions

**Interactive editing:**
- Use simple_gui_designer or Figma for editing specs
- simple_spec_viz is view-only visualization

**Real-time updates:**
- Batch mode via CLI only
- No continuous/live preview

**Code generation:**
- That's eiffel-gui-ux's responsibility
- simple_spec_viz validates, doesn't generate

**WebUI/REST API:**
- Headless CLI tool only
- No HTTP server or REST endpoints

**Database integration:**
- File-based I/O only
- No persistent storage

**Multi-user collaboration:**
- Single-user workflow
- Share diagrams via files/version control

**Composite states:**
- Simple flat state machines only
- Sub-machines deferred to Phase 4

**Version control:**
- No built-in version control
- Use git for spec history

---

## Controlling Vision: reference_docs/gui Guidance

The reference documentation (WIDGET_CATALOG.md, STATE_MACHINE_GUIDE.md, 7 examples) provides the **controlling view** for what simple_spec_viz should enable:

### Canonical Examples (Resolved Q1, Q7)

**7 examples with measurable success criteria:**

| Example | States | Transitions | Screens | Visualization Success Criteria |
|---------|--------|-------------|---------|-------------------------------|
| auth_flow | 4 (logged_out, logging_in, logged_in, error) | 6 | 4 | All states visible, guards show `[if credentials valid]`, entry actions show |
| data_entry_form | 6 | 12 | 3 | Validation state transitions visible, all guards labeled |
| crud_application | 7 | 15 | 5 | List/Create/Edit/Delete screens linked to states |
| dashboard | 3 | 6 | 1 | Layout shows all widgets in grid |
| wizard | 5 | 10 | 5 | Step progression clear (step1 → step2 → step3 → complete) |
| settings | 4 | 8 | 2 | Nested panel states visible |
| loading_pattern | 5 | 12 | 4 | Async state transitions (idle → loading → loaded/error) with retry logic |

**Success definition (Resolved Q7-Option B):**
- ✓ All states from JSON appear in output diagram
- ✓ All transitions from JSON appear with correct labels
- ✓ All widgets from JSON appear in screen mockups
- ✓ Verified by automated diff of element counts

### What the Reference Docs Show

**WIDGET_CATALOG.md** lists 40+ widget types with:
- Description and purpose
- Factory methods (simple_vision API)
- JSON spec format (what simple_spec_viz must parse)
- Contracts (preconditions, postconditions)
- Common usage patterns
- Visual placement examples

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
2. **STATE_MACHINE_PATTERNS Support**: Diagrams must clearly show the 10+ common patterns (guards, actions, entry/exit)
3. **Example-Driven Learning**: 7 canonical examples visualize perfectly (all elements present, verified by automated diff)
4. **Traceability to Widgets**: Screen mockups show which widgets are used (BUTTON, TEXT_FIELD, etc.) matching WIDGET_CATALOG names
5. **Visual Feedback Loop**: Developers comparing diagrams to STATE_MACHINE_GUIDE.md should see their spec matches expected patterns

---

## Dependencies (REQUIRED - simple_* First Policy)

### Current Dependencies (Resolved Q6: Version Pinning)

| Need | Library | Version | Justification |
|------|---------|---------|---------------|
| JSON parsing | simple_json | Latest | Industry-standard JSON support in simple_* ecosystem |
| GraphViz rendering | simple_graphviz | v1.0.0+ | State diagram rendering via GraphViz (released Jan 24, 2026) |
| File I/O | simple_file | Latest | Cross-platform file operations |
| Subprocess execution | simple_process | Latest | Run GraphViz subprocess safely |
| Mathematical contracts | simple_mml | 1.0.1+ | MML_SET, MML_SEQUENCE for frame conditions (resolved Q9) |
| Core types | base (ISE) | ISE 25.02+ | Fundamental types (STRING, INTEGER, BOOLEAN) |

### Integration Version Pinning (Resolved Q6-Option B)

- **eiffel-gui-ux compatibility:** v1.0+ (JSON output format follows GUI_JSON_SPEC_PROTOCOL.md v1.0)
- **simple_vision compatibility:** v1.0+ (widgets listed in WIDGET_CATALOG.md)
- **GraphViz requirement:** v2.40+  (minimum version for SVG rendering reliability)

### No New ISE/Gobo Dependencies

All dependencies are simple_* or base ISE. No external dependencies added.

---

## MML Decision (REQUIRED - Resolved Q9)

**Does simple_spec_viz need MML model queries for precise postconditions?**

### Decision: YES - Required (but with MVP optimization)

**Phase 1:** MML used for collection mutations (resolved Q9-Option A)
- `add_state`: postcondition uses `|=| old states` to express "other states unchanged"
- `add_transition`: postcondition uses MML to express ordering invariant
- `add_screen`: postcondition uses MML to express reference integrity

**Phase 1 Optimization:** Make MML usage focused on mutations only
- Don't over-specify immutable operations
- Frame conditions only where state actually changes
- Balances precision with Phase 1 simplicity

### Rationale

simple_spec_viz manages critical data structures (state machine definitions). Postconditions must be precise enough to prevent bugs:
- Invariant: No duplicate state IDs (verified with MML)
- Frame condition: Adding a state doesn't modify transitions (verified with `|=|`)
- Completeness: Traceability mapping is consistent (verified with cross-references)

MML provides the mathematical language for this precision without over-engineering.

---

## Out of Scope Details (Resolved Q10-Option C)

### Strictly No Interactivity in Phase 1-3

**Forbidden SVG elements:**
- `<script>` tags (no JavaScript execution)
- `<a>` tags with href (no navigation)
- `<animate>` or `<transition>` tags (no animations)
- Event handlers (onclick, onhover, etc.)
- CSS `<style>` blocks (only inline styling for colors/fonts)

**Allowed in static SVG:**
- Shapes: `<rect>`, `<circle>`, `<path>` (state boxes, transitions)
- Text: `<text>` elements (state names, transition labels)
- Groups: `<g>` for organizing elements
- Basic styling: `fill`, `stroke`, `font-size` attributes (for accessibility)
- Optional: `<title>` elements for basic metadata (deferred to Phase 2 if tools don't use them)

---

## Success Criteria Summary (All Resolved)

### Functional Success
- [x] Can visualize all 7 canonical examples from reference_docs/gui/examples/
- [x] SVG diagrams are human-readable (WCAG 2.1 Level AA, 12pt+ font, no overlaps for up to 10 states)
- [x] CLI tool integrates into dev workflow (one command: visualize)
- [x] Traceability matrix catches incomplete specs (automated diff verification)
- [x] Error messages guide users to fix issues (type + location + fix suggestion)

### Technical Success
- [x] Compiles with void_safety=all (no Void pointer issues)
- [x] Compiles with concurrency=scoop (safe for parallelization)
- [x] 100% DBC coverage (every public feature has contracts)
- [x] No exceptions thrown (Result pattern for errors)
- [x] Fast enough (< 5 seconds for typical specs: 10 states, 20 transitions, 5 screens)

### Integration Success
- [x] Reads GUI_JSON_SPEC_PROTOCOL.md v1.0+ format correctly
- [x] Outputs SVG that can be reviewed in browsers (static, no scripts)
- [x] Outputs Markdown that integrates with documentation
- [x] Works with reference_docs/gui/ examples (all 7 visualize with all elements present)
- [x] Version pinning: Compatible with eiffel-gui-ux v1.0+, simple_vision v1.0+, GraphViz v2.40+

### User Success
- [x] Developers (with Eiffel/JSON/state machine background) catch design issues before coding
- [x] Patterns from STATE_MACHINE_GUIDE.md visualize correctly
- [x] Widgets from WIDGET_CATALOG.md are represented in mockups
- [x] Traceability shows requirements → states → screens mapping
- [x] Error messages help junior developers find and fix spec issues

---

## Design Principles Driving Implementation

1. **Simplicity over Features** - Do one thing well (visualize specs), not everything
2. **Spec-First Design** - Specification phase (research → design) drives implementation
3. **Visual Clarity** - Diagrams must be understandable at a glance (WCAG AA, no clutter)
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
- **Grok Review:** D:\prod\simple_spec_viz\.eiffel-workflow\evidence\phase0-ai-review.md (10 questions resolved)

---

## Next Steps (Phase 1 Implementation)

1. **Write Tests** (via /eiffel.verify)
   - Unit tests for SPEC_LOADER (JSON parsing)
   - Unit tests for generators (DOT/SVG generation)
   - Integration tests (full workflow: JSON → diagrams)

2. **Implement Classes** (via /eiffel.implement)
   - SIMPLE_SPEC_VIZ (facade)
   - SPEC_LOADER (JSON parser with schema validation)
   - STATE_DIAGRAM_GENERATOR (DOT builder with WCAG AA formatting)
   - SCREEN_MOCKUP_GENERATOR (SVG layout with widget rendering)
   - TRACEABILITY_REPORT_GENERATOR (Markdown writer)

3. **Verify Contracts** (via /eiffel.verify)
   - Ensure all postconditions hold
   - Ensure frame conditions are maintained (MML)
   - No contract violations

4. **Performance & Hardening** (via /eiffel.harden)
   - Stress test with 50+ state specs
   - Handle GraphViz timeouts gracefully (check availability, report errors)
   - Add error recovery

5. **Document & Ship** (via /eiffel.ship)
   - Create API documentation
   - Add CLI help and examples
   - Ship v1.0.0

---

**Status: INTENT REFINED AND APPROVED**

All 10 Grok probing questions answered and incorporated into design.

Ready for Phase 1 implementation.
