# DECISIONS: simple_spec_viz

## Decision Log

### D-001: Rendering Engine Selection
**Question:** Should we use PlantUML, Mermaid, GraphViz, or build custom SVG rendering?

**Options:**
1. **PlantUML**: Pre-built state machine rendering, but Java dependency, less control over output
   - Pros: Feature-rich, stable, supports state machine semantics
   - Cons: Java runtime dependency, external process, harder to customize, not Eiffel-native

2. **Mermaid**: JavaScript-based, simple syntax, but limited customization
   - Pros: Easy to use, good output quality for state diagrams
   - Cons: Requires Node.js/browser, can't run headless in native code, limited extensibility

3. **GraphViz**: Excellent layout, flexible DOT language, already used in Eiffel ecosystem
   - Pros: Mature, battle-tested, beautiful layouts, simple_graphviz wrapper exists, optional dependency
   - Cons: Learning curve for DOT syntax, less semantic understanding than PlantUML

4. **Custom SVG**: Full control, no dependencies, but large effort
   - Pros: Complete control, minimal dependencies, native Eiffel
   - Cons: Massive development effort, layout algorithms hard to get right, maintenance burden

**Decision:** **Use GraphViz via simple_graphviz**

**Rationale:**
- simple_graphviz already wraps GraphViz with fluent API
- Flexible enough for state diagrams, screen layouts, and custom diagrams
- Battle-tested (used in production for 20+ years)
- Can work without GraphViz installed (just generate DOT, warn on render)
- Aligns with Eiffel ecosystem preference
- Separates concerns: spec parsing (Eiffel) vs rendering (GraphViz)

**Implications:**
- Must implement generators that produce DOT format from SPEC_DOCUMENT
- Must handle cases where GraphViz not installed gracefully
- Must provide good error messages if GraphViz fails

**Reversible:** YES - Could switch to PlantUML or Mermaid, but would need significant refactoring

### D-002: JSON vs YAML vs Other Format
**Question:** What format should GUI specifications use?

**Options:**
1. **JSON**: Strongly-typed, widely understood, good editor support, GUI_JSON_SPEC_PROTOCOL.md exists
2. **YAML**: More human-readable, less structured, learning curve for some developers
3. **Eiffel**: Native language, but requires compilation to change specs
4. **XML**: Verbose, outdated, poor developer experience

**Decision:** **Use JSON (GUI_JSON_SPEC_PROTOCOL.md)**

**Rationale:**
- Protocol already defined and documented
- Integrates with eiffel-gui-ux skill (AI generates JSON)
- Simple_json library available for parsing
- Version control friendly
- Tool ecosystem support (VS Code, JSON Schema validation)
- Industry standard for configuration/specification

**Implications:**
- Must implement robust JSON parsing with helpful error messages
- Must validate against schema for completeness
- Must handle version migration if format evolves

**Reversible:** YES - Could add YAML parser alongside JSON, or implement Eiffel DSL later

### D-003: Headless vs Interactive Tool
**Question:** Should simple_spec_viz be headless/CLI or interactive with UI?

**Options:**
1. **Headless/CLI**: File-based processing, integrate into scripts/pipelines, no GUI required
   - Pros: Simple to build, easy to integrate, no GUI dependency, good for automation
   - Cons: No interactive validation, can't edit spec in tool, must switch to other tools for iteration

2. **Interactive GUI**: EiffelVision-2 based interface, edit specs visually
   - Pros: Single tool for design and validation, immediate feedback, better UX
   - Cons: Large effort (GUI code is substantial), maintenance burden, introduces heavy dependency

3. **Web UI**: Browser-based interface, cloud-deployable
   - Pros: Modern, accessible from anywhere, good UX
   - Cons: Requires web framework (not Eiffel), large effort, infrastructure requirements

**Decision:** **Headless/CLI, with future Web UI as optional**

**Rationale:**
- Matches eiffel-research → eiffel-spec → simple_spec_viz → implementation pipeline
- Developers use eiffel-gui-ux skill for interactive spec generation (AI-assisted)
- simple_spec_viz validates/visualizes the generated spec
- If interactive editing needed, use simple_gui_designer (visual designer tool)
- Keeps simple_spec_viz focused and lightweight
- Easy to integrate into CI/CD pipelines

**Implications:**
- Docs command extends simple_spec_viz for quick reference without switching tools
- Web UI could be added in Phase 8 as separate project
- CLI must be user-friendly with clear error messages

**Reversible:** YES - Can add GUI later without breaking CLI; Web UI is separate project

### D-004: State Diagram Features
**Question:** What state machine features should be visualized?

**Options:**
1. **Minimal**: Only states and transitions (basic diagram)
2. **Standard**: Add guards, events, entry/exit actions (full semantic display)
3. **Rich**: Add activities, composite states, history states (UML-like)
4. **Advanced**: Add timing constraints, synchronization, forks/joins (full UML)

**Decision:** **Standard (guards, events, actions) with room for Rich features**

**Rationale:**
- Simple_vision's state machine supports guards, events, entry/exit actions
- GUI_JSON_SPEC_PROTOCOL.md includes these features
- Covers 90% of GUI use cases (authentication, forms, CRUD, wizards)
- More than adequate for initial release
- Rich features (composite states) can be added later without breaking current specs
- Rich features rarely needed for UI state machines (different from process modeling)

**Implications:**
- State nodes show entry/exit actions in text
- Transition edges show event + guard condition
- Diagram remains readable even with detailed information
- Future: Add support for composite states if needed

**Reversible:** YES - Can add Rich features in Phase 8

### D-005: Screen Layout Visualization
**Question:** How detailed should screen mockups be?

**Options:**
1. **Wireframe**: Just boxes for containers, basic grid
2. **Sketch**: Add widget types (button, field, list) with labels
3. **Mockup**: Add sizing, colors, styling (text size, colors, spacing)
4. **Prototype**: Add interactive elements, hover states, animations

**Decision:** **Sketch with optional styling (wireframe + widget types + sizing)**

**Rationale:**
- Sketch level sufficient to validate layout before coding
- Can show which widgets go where and relative sizes
- Detailed styling better done in actual UI code or design tool
- Keeps output clean and readable
- Helps catch layout problems early (missing fields, weird spacing)
- Future: Can add more styling detail if CSS/styling data is in spec

**Implications:**
- Widget rendering is text-based SVG (labels and boxes)
- Grid system respected in layout (12-column or custom)
- Responsive breakpoints shown separately
- Styling (colors, fonts) deferred to implementation phase
- Screen mockups help validate requirements but aren't design mockups

**Reversible:** YES - Can enhance styling in Phase 8 with additional spec data

### D-006: Traceability Reporting
**Question:** What should traceability matrix include?

**Options:**
1. **Basic**: States and screens only
2. **Standard**: Requirements → states → screens → code
3. **Rich**: Full requirements → states → screens → widgets → code locations
4. **Detailed**: Add test cases, quality metrics, coverage analysis

**Decision:** **Standard (requirements → states → screens) in Phase 1, extensible to Rich**

**Rationale:**
- Covers primary use case: validate all states and screens are covered
- Links to code/test locations can be added later
- Markdown format easy to extend and version control
- Helps QA and product teams understand scope
- Can be generated from spec without extra metadata (no external database needed)

**Implications:**
- Traceability is generated from spec structure (automatic, no manual entry)
- Can be extended with test case mapping in future phases
- Format is Markdown for readability and version control

**Reversible:** YES - Can add code traceability linking to source files

### D-007: CLI Documentation Command (D-007 new, Jan 25, 2026)
**Question:** Should simple_spec_viz have docs subcommand for quick reference?

**Options:**
1. **Separate tool**: Create new CLI tool for docs lookup
2. **Integrated**: Add docs subcommand to simple_spec_viz
3. **Web service**: Create web-based documentation lookup
4. **IDE plugin**: Integrate directly into EiffelStudio

**Decision:** **Integrated docs subcommand in simple_spec_viz**

**Rationale:**
- Developers already using simple_spec_viz for visualization
- Can reuse CLI framework (argument parsing, I/O)
- Eliminates need for separate tool
- Quick lookup without context switching
- Can be extended for future features (search, filtering)
- Complements eiffel-gui-ux skill for interactive use

**Implications:**
- Read markdown files from D:/prod/reference_docs/gui directory
- Support widget, guide, pattern, example lookups
- Proper error handling when docs not found
- Help text and usage examples

**Reversible:** YES - Can be removed or refactored as separate tool later

---

## Summary

**Critical Decisions Made:**
1. ✓ GraphViz (via simple_graphviz) for rendering → HIGH IMPACT
2. ✓ JSON format (GUI_JSON_SPEC_PROTOCOL) → LOCKED IN
3. ✓ Headless/CLI design → SHAPES ENTIRE ARCHITECTURE
4. ✓ Standard state machine features (guards, events, actions) → SUFFICIENT FOR MVP
5. ✓ Sketch-level screen visualization → BALANCED DETAIL
6. ✓ Standard traceability (reqs → states → screens) → EXTENSIBLE
7. ✓ Integrated docs command → IMPROVES DEVELOPER EXPERIENCE

**All decisions support the core value proposition:** *Lightweight, headless specification visualization integrated with Eiffel development workflow.*
