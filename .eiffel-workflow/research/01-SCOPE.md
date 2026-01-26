# SCOPE: simple_spec_viz - GUI Specification Visualizer

## Problem Statement

**In one sentence:**
Developers need to visualize GUI specifications (JSON) as diagrams before implementing them, enabling early validation of state machines, screen layouts, and traceability.

**What's wrong today:**
- GUI specs are written as JSON or Eiffel code but lack visual validation
- Developers can't see if state machines have dead ends or invalid transitions until code is written
- No visual feedback loop between spec design and implementation
- State machine patterns and screen layouts are hard to validate without running code
- Complex GUIs need visual traceability between requirements, states, screens, and implementation

**Who experiences this:**
- GUI developers using simple_vision
- System architects designing complex applications
- Teams doing spec-driven development (eiffel-research → eiffel-spec → implementation)
- QA testers validating application workflows

**Impact of not solving:**
- Implementation bugs caused by incomplete or circular state machines
- Screen layouts that don't match requirements
- Lost traceability between spec and implementation
- Slower feedback cycles during development
- Rework when visual design differs from initial spec

## Target Users

| User Type | Needs | Pain Level |
|-----------|-------|------------|
| GUI Developer | Visual validation of state machines before coding | HIGH |
| System Architect | Diagram generation for documentation and presentations | HIGH |
| QA Engineer | Screen mockups to validate layout before testing | MEDIUM |
| Product Manager | State diagrams to understand application flow | MEDIUM |
| DevOps | Traceability reports linking specs to implementation | LOW |

## Success Criteria

| Level | Criterion | Measure |
|-------|-----------|---------|
| MVP | Generate state machine diagrams from JSON spec | SVG output with states and transitions |
| MVP | Generate screen mockups from spec | SVG output showing widget layout |
| MVP | Provide CLI tool for easy access | `simple_spec_viz visualize spec.json` |
| Full | Traceability matrix linking requirements to states/screens | Markdown report with cross-references |
| Full | Integrated docs command for quick reference | `simple_spec_viz docs widget <name>` |
| Full | Claude Code skill for interactive spec generation | `/eiffel.gui-ux` skill integration |

## Scope Boundaries

### In Scope (MUST)
- Load JSON specifications (GUI_JSON_SPEC_PROTOCOL.md format)
- Generate state machine diagrams as SVG with GraphViz
- Generate screen mockups as SVG showing layouts
- Provide simple CLI tool for file-based generation
- Integrate with simple_graphviz for rendering
- Error handling and validation of specs

### In Scope (SHOULD)
- Traceability matrix (requirements → states → screens)
- Multiple output formats (SVG, currently; PNG/PDF in future)
- CLI documentation lookup (`docs` subcommand)
- Integration with eiffel-gui-ux skill for interactive use
- Batch generation (all outputs to directory)
- State diagram features (guards, actions, initial/final markers)

### Out of Scope
- Interactive diagram editor (that's simple_gui_designer)
- Real-time visualization as you type
- 3D visualization
- Animation or interactive state exploration
- Automatic layout optimization beyond GraphViz

### Deferred to Future
- PNG/PDF output (currently SVG only)
- Animated state transitions
- Interactive diagram clicking → jump to code
- WebUI for visualization (currently CLI only)
- Integration with IDEs (EiffelStudio, VS Code plugins)

## Constraints

| Type | Constraint |
|------|------------|
| Technical | Must use simple_graphviz for diagram rendering |
| Technical | Must parse GUI_JSON_SPEC_PROTOCOL.md format |
| Technical | Must generate valid SVG files |
| Technical | Must be SCOOP-compatible for concurrency safety |
| Ecosystem | Must use simple_* libraries instead of ISE/Gobo |
| Ecosystem | Must integrate with simple_vision, simple_spec_viz workflow |
| Platform | Must compile with EiffelStudio 25.02+ |
| Performance | SVG generation should complete in <5 seconds for typical specs |

## Assumptions to Validate

| ID | Assumption | Risk if False |
|----|------------|---------------|
| A-1 | Developers want SVG diagrams before coding | Tool won't be used; need interactive mode instead |
| A-2 | JSON spec format is stable (GUI_JSON_SPEC_PROTOCOL.md v1.0) | Format changes break spec loading |
| A-3 | simple_graphviz can generate needed diagram types | Must implement custom rendering instead |
| A-4 | State machines are central to GUI validation | Diagrams focus on wrong aspects |
| A-5 | CLI-based tool is sufficient (no WebUI needed) | Users demand web-based visualization |

## Research Questions

- What existing GUI specification visualization tools exist? (Figma, UXPin, Balsamiq, Framer)
- How do other frameworks handle spec → visual pipeline? (Flutter, React, Vue)
- What diagram styles best communicate state machines to developers?
- Should we support other spec formats besides JSON (YAML, PlantUML)?
- What metrics indicate successful validation (cycle time, bug reduction)?
- How should error handling work (invalid specs, missing states)?
- What other visualization needs emerge from the eiffel-research → eiffel-spec workflow?

## High-Level Design Direction

Based on initial assessment:

**Current Implementation:**
- simple_spec_viz is a visualization façade (completed Jan 24, 2026)
- Integrates SPEC_LOADER (JSON parsing), STATE_DIAGRAM_GENERATOR, SCREEN_MOCKUP_GENERATOR, TRACEABILITY_REPORT_GENERATOR
- CLI tool with `visualize` command (file-based)
- Extends with `docs` command for quick reference (completed Jan 25, 2026)

**What's Novel:**
- Bridges spec design (eiffel-spec) → visualization → implementation (simple_vision)
- Integrates with Claude Code skills (eiffel-gui-ux) for AI-assisted spec generation
- Provides traceability from requirements through state diagrams to screens
- SVG output suitable for documentation and presentations

**Design Approach:**
- Modular architecture: separate loaders, generators, renderers
- Facade pattern (SIMPLE_SPEC_VIZ) for simple API
- Generator pattern for different output types
- DBC contracts on all public features
- Error handling with detailed messages
