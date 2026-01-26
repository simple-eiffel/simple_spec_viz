# LANDSCAPE: simple_spec_viz

## Existing Solutions

### Figma (Web-based Design Tool)
| Aspect | Assessment |
|--------|------------|
| Type | SaaS Design Platform |
| Platform | Web (browser-based) |
| URL | https://www.figma.com |
| Maturity | MATURE |
| License | Commercial (freemium model) |

**Strengths:**
- Real-time collaboration with designers
- Excellent for UI/UX mockups with high fidelity
- Responsive design with Auto Layout
- Component systems and design tokens
- Extensive plugin ecosystem
- Export to various formats

**Weaknesses:**
- Not designed for state machine visualization
- Expensive for individual developers ($12-80/month per user)
- Overkill for spec-driven development workflows
- Requires interactive design tool (not CLI/headless)
- Learning curve for developers vs designers

**Relevance:** 20% - Good for UI mockups, poor for state machine diagrams and spec validation

**Related Info:** [Top SaaS Wireframing Tools 2025 Comparison](https://digdesigns.com/top-saas-wireframing-tools-2025-figma-uxpin-balsamiq-compared/)

### UXPin (Code-based Design Tool)
| Aspect | Assessment |
|--------|------------|
| Type | SaaS Design Platform |
| Platform | Web + code integration |
| URL | https://www.uxpin.com |
| Maturity | MATURE |
| License | Commercial |

**Strengths:**
- Code-based design approach (closer to developers)
- Advanced interactive prototyping
- Design system integration
- Development-friendly workflow

**Weaknesses:**
- Still interactive tool (not automation-friendly)
- Expensive ($20-100/month)
- Doesn't handle state machine diagrams
- Not integrated with Eiffel ecosystem

**Relevance:** 15% - Developer-friendly but still not for spec visualization

**Related Info:** [UXPin vs Figma Comparison](https://www.uxpin.com/studio/blog/prototyping-in-figma-vs-uxpin/)

### Balsamiq (Low-Fidelity Wireframing)
| Aspect | Assessment |
|--------|------------|
| Type | Wireframing Tool |
| Platform | Desktop, Web |
| URL | https://balsamiq.com |
| Maturity | MATURE |
| License | Commercial ($89/year or SaaS) |

**Strengths:**
- Quick and simple wireframe creation
- Hand-drawn aesthetic reduces over-design
- Good for ideation and early-stage concepts
- Affordable compared to Figma/UXPin
- Export to various formats

**Weaknesses:**
- Low-fidelity only (not suitable for final specs)
- No state machine support
- Interactive tool only
- Limited programmatic access
- Not integrated with development workflows

**Relevance:** 10% - Good for ideation, not for automated spec visualization

**Related Info:** [Balsamiq vs Figma Comparison](https://balsamiq.com/support/sales/other-tools/)

### PlantUML (Diagram-as-Code)
| Aspect | Assessment |
|--------|------------|
| Type | Open Source Diagram Tool |
| Platform | Java-based (platform independent) |
| URL | https://plantuml.com |
| Maturity | MATURE |
| License | GPL v3 (open source) |

**Strengths:**
- State diagram support via text-based syntax
- Diagram-as-code (version control friendly)
- Extensive diagram types (UML, flowcharts, state machines, etc.)
- Can integrate with documentation
- Free and open source
- Support for multiple output formats (SVG, PNG, PDF)

**Weaknesses:**
- Text-based syntax (learning curve)
- Limited to what PlantUML supports
- Rendering quality depends on layout engine
- Not Eiffel-specific
- Requires Java runtime

**Relevance:** 60% - Excellent for state diagrams, but not integrated with spec model

**Related Info:** [PlantUML vs Mermaid Comparison](https://www.gleek.io/blog/mermaid-vs-plantuml), [PlantUML Documentation](https://plantuml.com)

### Mermaid (Markdown Diagrams)
| Aspect | Assessment |
|--------|=========|
| Type | Open Source Diagram Tool |
| Platform | JavaScript-based |
| URL | https://mermaid.ai |
| Maturity | MATURE |
| License | MIT (open source) |

**Strengths:**
- State diagram support with simple syntax
- Markdown-like syntax (easy for developers)
- Renders in GitHub, GitLab, Notion, etc.
- Very simple learning curve
- Free and open source
- Good output quality for state diagrams

**Weaknesses:**
- Limited customization compared to PlantUML
- Not designed for complex diagrams
- Requires JavaScript (can't run headless in native code)
- Limited for screen layout visualization
- Does traceability only through markdown comments

**Relevance:** 50% - Great for state diagrams, limited for full spec visualization

**Related Info:** [Mermaid State Diagrams Documentation](https://mermaid.ai/open-source/syntax/stateDiagram.html)

### GraphViz (Graph Visualization)
| Aspect | Assessment |
|--------|=========|
| Type | Open Source Graph Tool |
| Platform | Platform independent |
| URL | https://graphviz.org |
| Maturity | VERY MATURE (since 1991) |
| License | EPL 1.0 (open source) |

**Strengths:**
- DOT language for graph specification
- Excellent layout algorithms (automatically positions nodes)
- Produces high-quality SVG/PDF output
- Supports subgraphs (clustering)
- Very fast rendering
- Well-documented and stable
- Active community

**Weaknesses:**
- No built-in understanding of state machine semantics
- Requires learning DOT syntax
- Less specialized than PlantUML for state machines
- But more flexible for custom layouts

**Relevance:** 85% - **BEST MATCH** - Flexible, fast, produces high-quality output. **Currently used by simple_spec_viz**

**Related Info:** [GraphViz vs PlantUML vs Mermaid Comparison](https://medium.com/towards-data-engineering/from-drawing-to-generation-how-mermaid-draw-io-06832d918736)

## Eiffel Ecosystem Check

### ISE Libraries
- **EiffelVision 2**: Cross-platform GUI framework for Eiffel. Used by simple_vision as base library. Heavy-weight, not suitable for spec visualization alone.
- **WEL (Windows Eiffel Library)**: Win32 API wrapper. Lower-level than needed for our use case.
- **EiffelWeb**: Web development framework. Not relevant for desktop GUI specs.

### simple_* Libraries
- **simple_vision**: GUI framework wrapping EiffelVision-2. Primary target for visualization output. (Reference: [simple-eiffel GitHub](https://github.com/simple-eiffel))
- **simple_graphviz**: Graph visualization library using GraphViz. **Directly used by simple_spec_viz for rendering state diagrams and screen layouts.**
- **simple_json**: JSON parsing. Could be used for spec loading.
- **simple_process**: Process execution. Used by simple_spec_viz to invoke GraphViz.

### Gobo Libraries
- **GE_GRAPH**: Generic graph library from Gobo. Lightweight but not visualization-focused.
- **GE_FILE**: File I/O. Overlaps with simple_file.

### Gap Analysis

**What exists:**
- GraphViz (excellent state diagram rendering)
- simple_graphviz (Eiffel wrapper for GraphViz)
- simple_vision (GUI framework for implementation)
- simple_json (JSON parsing)
- simple_process (subprocess execution)

**What was missing (now built in simple_spec_viz):**
- JSON specification loader for GUI specs
- State diagram generator that translates SPEC_STATE/SPEC_TRANSITION → GraphViz DOT → SVG
- Screen mockup generator (text-based layouts as SVG)
- Traceability matrix generator (requirements → states → screens)
- CLI tool integration

## Comparison Matrix

| Feature | Figma | UXPin | Balsamiq | PlantUML | Mermaid | GraphViz | simple_spec_viz |
|---------|-------|-------|----------|----------|---------|----------|-----------------|
| State Diagrams | ✗ | ✗ | ✗ | ✓ | ✓ | ✓ | ✓ |
| Screen Layouts | ✓ | ✓ | ✓ | ✗ | ✗ | ~ | ✓ |
| Traceability | ✗ | ✗ | ✗ | ✗ | ✗ | ✗ | ✓ |
| JSON Input | ✓ | ✓ | ✗ | ✗ | ✗ | ✗ | ✓ |
| CLI/Headless | ✗ | ✗ | ✗ | ✓ | ~ | ✓ | ✓ |
| Free/OSS | ✗ | ✗ | ✗ | ✓ | ✓ | ✓ | ✓ |
| Eiffel Integration | ✗ | ✗ | ✗ | ✗ | ✗ | ✓ | ✓ |
| Workflow Ready | ✗ | ✗ | ✗ | ✗ | ✗ | ~ | ✓ |

## Patterns Identified

| Pattern | Seen In | Adopt in simple_spec_viz? |
|---------|---------|---------------------------|
| DOT language for graph specs | GraphViz, Mermaid | YES - Use simple_graphviz |
| Fluent API for building diagrams | Figma, PlantUML | YES - Documented in README |
| Automated layout | GraphViz, Mermaid | YES - GraphViz handles it |
| SVG output | PlantUML, GraphViz, Mermaid, Figma | YES - Primary output format |
| JSON configuration | Most tools | YES - Use GUI_JSON_SPEC_PROTOCOL |
| State machine guards/actions | PlantUML, AWS StepFunctions | YES - Supported in SPEC_TRANSITION |
| Markdown documentation | Mermaid, PlantUML | YES - Traceability report |

**Key Pattern:** All modern tools are moving toward **specification-as-code** with machine-readable formats, enabling version control, automation, and integration into development pipelines.

## Build vs Buy vs Adapt

| Option | Effort | Risk | Fit |
|--------|--------|------|-----|
| **Build** (simple_spec_viz) | MEDIUM | MEDIUM | 95% |
| **Adopt** (PlantUML) | LOW | MEDIUM | 60% |
| **Adopt** (Figma) | LOW | HIGH | 20% |
| **Adapt** (GraphViz) | MEDIUM | LOW | 85% |

## Initial Recommendation

**Decision: BUILD + ADAPT**

**Rationale:**
1. No existing tool covers all three needs (state diagrams + screen layouts + traceability) *and* integrates with Eiffel
2. GraphViz is excellent for state diagrams; simple_graphviz already wraps it
3. JSON spec format (GUI_JSON_SPEC_PROTOCOL) requires custom parsing anyway
4. Screen mockup generation is unique to our use case (others focus on design tools)
5. Traceability matrix is novel requirement not available elsewhere
6. Simple_spec_viz can be lightweight and headless (no UI overhead)
7. Integration with eiffel-research → eiffel-spec → implementation workflow is uniquely valuable
8. **Eiffel ecosystem preference**: Build in Eiffel using simple_* libraries

**Simple_spec_viz is the right choice** because it's purpose-built for the spec-driven GUI workflow that simple_vision enables.

## Key Dependencies Validated

| Library | Purpose | Status |
|---------|---------|--------|
| simple_graphviz | State diagram rendering via GraphViz DOT | ✓ Stable, v1.0.0 |
| simple_json | JSON spec parsing | ✓ Available |
| simple_process | Invoke GraphViz renderer | ✓ Available |
| simple_file | File I/O for specs and outputs | ✓ Available |
| GraphViz | Backend renderer (external tool) | ✓ Optional but recommended |

## Ecosystem Integration Points

**Upstream (spec generation):**
- eiffel-research (identifies GUI needs)
- eiffel-spec (documents GUI spec requirements)
- eiffel-gui-ux (generates JSON spec from specification)

**Our tool (visualization):**
- simple_spec_viz (validates spec visually)

**Downstream (implementation):**
- simple_vision (implements GUI in Eiffel)
- Claude Code (interactive spec generation via /eiffel.gui-ux skill)

This creates a complete pipeline: **Research → Spec → Visualize → Code → Deploy**

## Market Analysis

The GUI specification tool market is dominated by:
1. **Design tools** (Figma, UXPin, Adobe XD) - focus on UI/UX design, expensive
2. **Diagram tools** (PlantUML, Mermaid) - focus on technical documentation, free but limited
3. **No integrated solutions** for spec-driven development that include state machines, screens, and traceability

**simple_spec_viz fills a unique niche**: Lightweight, headless, integrated with Eiffel ecosystem, purpose-built for spec validation before coding.
