# simple_spec_viz

**GUI Specification Visualization Tool** - Convert JSON GUI specifications into state machine diagrams, screen mockups, and traceability matrices.

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](LICENSE)
[![Eiffel: void-safe SCOOP](https://img.shields.io/badge/Eiffel-void--safe%20SCOOP-blue.svg)](https://www.eiffel.org/)
[![Version: 1.0.0](https://img.shields.io/badge/Version-1.0.0-green.svg)](CHANGELOG.md)

## Overview

`simple_spec_viz` is an Eiffel library for visualizing GUI specifications written in the `GUI_JSON_SPEC_PROTOCOL` format. It parses JSON specification files and generates:

1. **State Machine Diagrams** (SVG via GraphViz)
   - Visual representation of application state flows
   - Transition guards and actions labeled
   - Initial and final states marked

2. **Screen Mockups** (SVG)
   - Text-based layout of UI screens and widgets
   - Widget types and labels positioned in grid
   - One mockup per screen in specification

3. **Traceability Matrix** (Markdown)
   - Maps requirements to states and screens
   - Identifies unimplemented requirements
   - Documents coverage of specification

## Quick Start

### As a Library

```eiffel
create {SIMPLE_SPEC_VIZ}.make as viz
if attached viz.load_from_file ("my_spec.json") as doc then
    -- Generate state diagram
    if attached viz.generate_state_diagram (doc) as diagram then
        if diagram.is_success then
            io.put_string (diagram.content)
        end
    end

    -- Generate screen mockups
    across viz.generate_screen_mockups (doc) as mockup_cursor loop
        if mockup_cursor.item.is_success then
            io.put_string (mockup_cursor.item.content)
        end
    end

    -- Generate traceability report
    if attached viz.generate_traceability_report (doc) as report then
        if report.is_success then
            io.put_string (report.content)
        end
    end
else
    io.put_string ("Error: " + viz.last_error)
end
```

### Via CLI

```bash
# Visualize specification
simple_spec_viz visualize my_spec.json --output-dir ./output/

# View documentation
simple_spec_viz docs widget button
simple_spec_viz docs state-machine
simple_spec_viz docs pattern auth_flow
simple_spec_viz docs example wizard

# Get help
simple_spec_viz --help
```

## Specification Format

The `GUI_JSON_SPEC_PROTOCOL` format includes:

- **States:** Distinct application states (e.g., idle, loading, error)
- **Transitions:** State-to-state flows with guards and actions
- **Screens:** UI layouts with widgets
- **Requirements:** Traceability links to implementation
- **Traceability:** Maps requirements to states and screens

See [GUI_JSON_SPEC_PROTOCOL.md](docs/GUI_JSON_SPEC_PROTOCOL.md) for complete specification.

## Features

### Core Library (SIMPLE_SPEC_VIZ)
- ✓ Load JSON specifications from files or strings
- ✓ Parse states, transitions, screens, and requirements
- ✓ Validate against schema
- ✓ Generate state machine diagrams (SVG via GraphViz)
- ✓ Generate screen mockups (SVG text-based)
- ✓ Generate traceability reports (Markdown)
- ✓ Error handling with descriptive messages

### Quality Standards
- ✓ void-safe (void_safety=all)
- ✓ SCOOP-compatible (concurrency=scoop)
- ✓ 100% Design by Contract (preconditions, postconditions, invariants)
- ✓ 54 comprehensive tests (27 unit + 27 adversarial)
- ✓ Zero warnings on compilation

## Architecture

### Public Classes

| Class | Purpose |
|-------|---------|
| **SIMPLE_SPEC_VIZ** | Facade coordinating all components |
| **SPEC_LOADER** | JSON parser and validator |
| **SPEC_DOCUMENT** | Root container for loaded specification |
| **STATE_DIAGRAM_GENERATOR** | Generates SVG state diagrams |
| **SCREEN_MOCKUP_GENERATOR** | Generates SVG screen mockups |
| **TRACEABILITY_REPORT_GENERATOR** | Generates Markdown reports |

### Data Models

| Class | Purpose |
|-------|---------|
| **SPEC_STATE** | State definition with actions |
| **SPEC_TRANSITION** | Transition with guards and requirements |
| **SPEC_SCREEN** | Screen with widget collection |
| **SPEC_WIDGET** | Widget with type, label, position, size |
| **SPEC_REQUIREMENT** | Traceability link definition |
| **SPEC_VIZ_RESULT** | Result container (success OR error, XOR pattern) |

### Supporting Classes

| Class | Purpose |
|-------|---------|
| **TRACEABILITY_MATRIX** | Maps requirements to states/screens |
| **SVG_RENDERER** | SVG generation utilities |
| **GRAPHVIZ_ADAPTER** | GraphViz rendering integration |

## Installation

### Via ECF (Eiffel Configuration File)

```xml
<library name="simple_spec_viz" location="$SIMPLE_EIFFEL/simple_spec_viz/simple_spec_viz.ecf"/>
```

### System Requirements

- Eiffel compiler: EiffelStudio 25.02+
- GraphViz: 2.40+ (for state diagram rendering)
- Eiffel libraries:
  - base (ISE EiffelStudio)
  - simple_json 1.0.0+
  - simple_graphviz 1.0.0+
  - simple_mml 1.0.1+

### Eiffel Configuration

Required settings in your project's ECF:

```xml
<capability>
    <concurrency support="scoop"/>
    <void_safety support="all"/>
</capability>
```

## Usage Examples

### Example 1: Load and Generate All Outputs

```eiffel
create {SIMPLE_SPEC_VIZ}.make as viz

if attached viz.load_from_file ("app_spec.json") as doc then
    -- Generate and save all outputs
    viz.generate_all (doc, "./output/")
else
    io.put_string ("Failed to load: " + viz.last_error)
end
```

### Example 2: Parse and Query States

```eiffel
create {SPEC_LOADER}.make as loader

if attached loader.load_from_file ("spec.json") as doc then
    -- Find initial state
    if attached doc.initial_state as init_state then
        io.put_string ("Initial: " + init_state.name)
    end

    -- List all final states
    across doc.final_states as final_cursor loop
        io.put_string ("Final: " + final_cursor.item.name)
    end

    -- Find transitions from a state
    across doc.transitions_from ("S-001") as trans_cursor loop
        io.put_string ("Transition: " + trans_cursor.item.event)
    end
else
    io.put_string ("Error: " + loader.last_error)
end
```

### Example 3: Error Handling

```eiffel
-- Use Result pattern (no exceptions)
if attached viz.load_from_file (spec_file) as doc then
    -- Success case
else
    -- Error case
    if attached viz.last_error as error then
        io.put_string ("Error: " + error)
        -- Error message includes: type + location + suggested fix
    end
end
```

## Error Handling

All functions use the **Result Pattern** instead of exceptions:

- Functions return `Void` on error
- Error details stored in `last_error` attribute
- Error format: `"Error type: details at location. Suggested fix: ..."`

Example:
```
Error: JSON parsing failed at line 15, column 8. Check for unclosed brackets.
```

## Performance

- **Typical spec** (10 states, 20 transitions, 5 screens): < 1 second
- **Large spec** (100 states): < 5 seconds
- **Stress test** (50 widgets per screen): < 1 second

Tested with adversarial inputs and stress conditions.

## Canonical Examples

Seven working examples in `/examples`:

1. **auth_flow** - Login/logout with error handling
2. **data_entry_form** - Form validation states
3. **crud_application** - Full CRUD operations
4. **dashboard** - Complex layout with many widgets
5. **wizard** - Multi-step onboarding
6. **settings** - Nested configuration panels
7. **loading_pattern** - Async data loading with retry

Each includes:
- `*.json` - Complete specification
- `state_machine.svg` - Generated diagram
- `screens.svg` - Generated mockups
- `README.md` - Explanation and patterns

## Testing

```bash
cd simple_spec_viz

# Compile and run full test suite (54 tests)
ec.sh -batch -config simple_spec_viz.ecf -target simple_spec_viz_tests -c_compile
./EIFGENs/simple_spec_viz_tests/F_code/simple_spec_viz.exe

# Expected output:
# === SUMMARY ===
# Passed: 54
# Failed: 0
# Total:  54
```

### Test Coverage

- 27 unit tests (core functionality)
- 27 adversarial tests (edge cases, stress, error recovery)
- 100% class coverage
- 100% feature coverage
- SCOOP concurrency tested
- Void safety verified
- Error recovery tested

## Dependencies

### Required

| Library | Version | Purpose |
|---------|---------|---------|
| base | ISE stdlib | Fundamental types |
| simple_json | 1.0.0+ | JSON parsing and validation |
| simple_graphviz | 1.0.0+ | State diagram rendering |
| simple_mml | 1.0.1+ | Mathematical model queries for postconditions |

### Optional

| Library | Version | Purpose |
|---------|---------|---------|
| simple_logger | 1.0.0+ | CLI application logging |

## Design Principles

1. **Design by Contract:** All public features have preconditions, postconditions, and invariants
2. **Result Pattern:** No exceptions; functions return results with error details
3. **Void Safety:** void_safety=all; all detachable types guarded
4. **SCOOP Safe:** Concurrency-ready; no thread-unsafe patterns
5. **Immutability:** Data models mostly immutable after creation
6. **Facade Pattern:** Single entry point (SIMPLE_SPEC_VIZ) coordinating components
7. **Composition:** Uses simple_* libraries, not ISE stdlib equivalents

## Development Workflow

simple_spec_viz follows the **Eiffel Spec Kit 8-phase workflow**:

- ✓ Phase 0: Intent capture and refinement (Grok AI review)
- ✓ Phase 1: Contract design (Design by Contract)
- ✓ Phase 2: Review and synopsis
- ✓ Phase 3: Task decomposition
- ✓ Phase 4: Implementation with frozen contracts
- ✓ Phase 5: Test generation and verification (54 tests)
- ✓ Phase 6: Hardening (adversarial testing)
- ✓ Phase 7: Ship checklist

Phases are documented in `.eiffel-workflow/evidence/`.

## License

MIT License - See [LICENSE](LICENSE) file

## Contributing

Contributions welcome! Please:

1. Follow Eiffel naming conventions (CLASSES_LIKE_THIS, features_like_this)
2. Add Design by Contract to all public features
3. Write tests (unit + adversarial cases)
4. Maintain void_safety=all and concurrency=scoop
5. Update CHANGELOG.md

## Support

- **GitHub Issues:** [simple-eiffel/simple_spec_viz/issues](https://github.com/simple-eiffel/simple_spec_viz/issues)
- **Documentation:** See docs/ directory
- **Examples:** See examples/ directory

## Roadmap

### Phase 2 (Future)
- [ ] PNG/PDF export (via GraphViz)
- [ ] Interactive SVG with JavaScript
- [ ] Web UI for specification editor
- [ ] REST API for remote visualization
- [ ] Performance: < 1 second for 500 states

### Phase 3 (Future)
- [ ] Code generation (Eiffel, Python, TypeScript)
- [ ] Constraint solver for state reachability
- [ ] Visual specification editor (web-based)
- [ ] Real-time preview during design

## Acknowledgments

Built with the Simple Eiffel ecosystem:
- [simple_json](https://github.com/simple-eiffel/simple_json) - JSON parsing
- [simple_graphviz](https://github.com/simple-eiffel/simple_graphviz) - GraphViz integration
- [simple_mml](https://github.com/simple-eiffel/simple_mml) - Mathematical model library

## Citation

If you use simple_spec_viz in research or production, please cite:

```
simple_spec_viz - GUI Specification Visualization Tool
Version 1.0.0
https://github.com/simple-eiffel/simple_spec_viz
```

---

**Last Updated:** 2026-01-25
**Maintainer:** Larry Rix
**Project Status:** Production Ready ✓
