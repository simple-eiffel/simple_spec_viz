# INTERFACE DESIGN: simple_spec_viz

## Public API Summary

### Creation
| Feature | Purpose | Typical Use |
|---------|---------|-------------|
| `make` | Default creation, initialize facade | `create {SIMPLE_SPEC_VIZ}.make` |

### Core Operations
| Feature | Returns | Purpose |
|---------|---------|---------|
| `load_from_file` | `detachable SPEC_DOCUMENT` | Load spec from JSON file |
| `load_from_json` | `detachable SPEC_DOCUMENT` | Load spec from JSON string |
| `generate_state_diagram` | `SPEC_VIZ_RESULT` | Create state machine SVG |
| `generate_screen_mockups` | `ARRAYED_LIST [SPEC_VIZ_RESULT]` | Create screen mockup SVGs |
| `generate_traceability_report` | `SPEC_VIZ_RESULT` | Create markdown traceability |
| `generate_all` | `BOOLEAN` | Generate all outputs to directory |

### Status/Error Queries
| Feature | Returns | Purpose |
|---------|---------|---------|
| `last_error` | `detachable STRING` | Error message from last operation |

---

## Fluent/Builder Pattern (if applicable)

simple_spec_viz does NOT use fluent API (immutable after creation). Load and operate sequentially:

```eiffel
create {SIMPLE_SPEC_VIZ}.make

if attached obj.load_from_file ("auth_flow.json") as spec then
    state_result := obj.generate_state_diagram (spec)
    if state_result.is_success then
        save_to_file (state_result.content, "state_machine.svg")
    end
end
```

---

## Error Handling Pattern

**Result Pattern** (XOR: success OR error, never both):

```eiffel
result := obj.generate_state_diagram (spec)

if result.is_success then
    -- Use result.content (guaranteed non-null)
    save_svg (result.content)
else
    -- Use result.error_message (guaranteed non-null)
    report_error (result.error_message)
end
```

No exceptions thrown; errors returned in result.

---

## Command-Query Separation

| Feature | Type | Modifies State? | Returns Value? | CQS |
|---------|------|-----------------|----------------|-----|
| `make` | Command | YES (creation) | Self | Exception to CQS |
| `load_from_file` | Command/Query | YES (sets last_error) | SPEC_DOCUMENT | Special |
| `generate_state_diagram` | Query | NO | SPEC_VIZ_RESULT | YES (pure) |
| `generate_all` | Command | YES (creates files) | BOOLEAN | Exception (files as side effect) |
| `last_error` | Query | NO | STRING | YES (pure) |

**Note:** `load_from_file` violates pure CQS (modifies last_error while returning document). This is acceptable for error handling.

---

## SPEC_DOCUMENT Public API

```eiffel
-- Creation
make (a_name, a_version: STRING)

-- Queries
state_by_id (a_id: STRING): detachable SPEC_STATE
screen_by_id (a_id: STRING): detachable SPEC_SCREEN
initial_state: detachable SPEC_STATE
final_states: ARRAYED_LIST [SPEC_STATE]
transitions_from (a_state_id: STRING): ARRAYED_LIST [SPEC_TRANSITION]
transitions_to (a_state_id: STRING): ARRAYED_LIST [SPEC_TRANSITION]

-- Model queries
states_model: MML_SET [STRING]
screens_model: MML_SET [STRING]

-- Commands
add_state (a_state: SPEC_STATE)
add_transition (a_transition: SPEC_TRANSITION)
add_screen (a_screen: SPEC_SCREEN)

-- Attributes
name: STRING
version: STRING
states: ARRAYED_LIST [SPEC_STATE]
transitions: ARRAYED_LIST [SPEC_TRANSITION]
screens: ARRAYED_LIST [SPEC_SCREEN]
traceability: TRACEABILITY_MATRIX
```

---

## Generator Base Interface (Optional)

If implementing shared interface:

```eiffel
deferred class GENERATOR

deferred
    generate: SPEC_VIZ_RESULT
        -- Generate output from specification.
    end

invariant
    result_not_void: (generate /= Void)
end

class STATE_DIAGRAM_GENERATOR inherit GENERATOR
    -- Implements generate for state machines
end

class SCREEN_MOCKUP_GENERATOR inherit GENERATOR
    -- Implements generate for screens (note: different signature)
end
```

**Issue:** SCREEN_MOCKUP_GENERATOR.generate_all returns LIST, not single result. May not share interface.

**Decision:** No common interface for Phase 1. SIMPLE_SPEC_VIZ calls directly.

---

## CLI Command Interface

### visualize Command
```bash
simple_spec_viz visualize <spec.json> [--output <dir>] [-o <dir>]

Options:
  <spec.json>       Input JSON specification file
  --output, -o      Output directory (default: current directory)

Output files:
  state_machine.svg           State machine diagram
  <screen_id>.svg             Screen mockup per screen
  traceability.md             Traceability matrix
```

### docs Command
```bash
simple_spec_viz docs <subcommand> [args]

Subcommands:
  widget <name>           Show widget documentation
  state-machine           Show state machine guide
  pattern <name>          Show pattern documentation
  example <name>          Show example documentation
  --help                  Show this help
```

---

## Data Flow Diagrams

```
User Input (CLI/API)
    │
    ├─ visualize command
    │   │
    │   └─ SIMPLE_SPEC_VIZ.load_from_file
    │       └─ SPEC_LOADER (parse JSON)
    │           └─ SPEC_DOCUMENT (validated spec)
    │               │
    │               ├─ STATE_DIAGRAM_GENERATOR.generate
    │               │   ├─ GraphViz DOT generation
    │               │   ├─ GRAPHVIZ_ADAPTER.render
    │               │   └─ SPEC_VIZ_RESULT (SVG)
    │               │
    │               ├─ SCREEN_MOCKUP_GENERATOR.generate_all
    │               │   └─ LIST[SPEC_VIZ_RESULT] (per-screen SVGs)
    │               │
    │               └─ TRACEABILITY_REPORT_GENERATOR.generate
    │                   └─ SPEC_VIZ_RESULT (markdown)
    │
    └─ docs command
        └─ SPEC_VIZ_CLI.execute_docs
            └─ Read markdown from reference_docs/gui
                └─ Output to terminal
```

---

## Integration Points

### With eiffel-gui-ux (spec generation)
- Input: specification.md from eiffel-spec
- eiffel-gui-ux generates: auth_flow.json
- simple_spec_viz loads: auth_flow.json
- Output: state_machine.svg, auth_flow.svg, traceability.md

### With simple_graphviz (rendering)
- Input: SPEC_DOCUMENT (states, transitions)
- Adapter calls: simple_graphviz.state_machine_builder
- Output: DOT string → GraphViz subprocess → SVG

### With reference_docs/gui (documentation)
- docs command reads: D:/prod/reference_docs/gui/WIDGET_CATALOG.md
- Output to terminal: widget documentation

### With simple_vision (implementation)
- Developer reviews: state_machine.svg, screen mockups
- Uses as reference: widget IDs match WIDGET_CATALOG
- Implements spec in Eiffel code

---

## Access Control

All features are public (no feature {NONE} restrictions)
- Library is meant to be used externally
- No private sections for users

Internal classes may have private features (implementation detail).

---

## Version Compatibility

**First version:** 1.0.0
**GUI_JSON_SPEC_PROTOCOL:** v1.0 (locked)
**simple_graphviz:** v1.0.0+ (locked in ECF)
**simple_json:** Latest available

Future: Version negotiation if spec format evolves.

---

## API Stability

**Stable APIs (no planned changes):**
- SIMPLE_SPEC_VIZ.load_from_file
- SIMPLE_SPEC_VIZ.generate_state_diagram
- SIMPLE_SPEC_VIZ.generate_all
- SPEC_DOCUMENT structure

**Extensible (design allows additions):**
- Generate_* methods can add new generators
- SPEC_DOCUMENT can add new collections

**May evolve (Phase 2+):**
- CLI docs command (add search, filtering)
- Export formats (PNG/PDF beyond SVG)

---

## Ready for Specification

Yes - Public API is clear, integration points defined, data flow documented.
