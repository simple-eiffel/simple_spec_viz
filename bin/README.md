# simple_spec_viz - CLI Distribution

**Binary:** simple_spec_viz.exe (2.2MB)
**Version:** 1.0.0

## Contents

This folder contains the finalized (F_code) simple_spec_viz CLI with all required runtime dependencies.

### Files

```
bin/
├── simple_spec_viz.exe          (2.2MB - Main executable)
├── *.dll                        (63 GraphViz runtime DLLs)
├── graphviz/                    (Header files - required for runtime)
├── config8                      (GraphViz configuration)
└── README.md                    (This file)
```

## GraphViz Dependencies

The CLI requires GraphViz runtime libraries to generate SVG diagrams:

**DLLs included (63 total):**
- gvc.dll, cgraph.dll, cdt.dll (Core GraphViz)
- gvplugin_core.dll, gvplugin_dot_layout.dll, gvplugin_neato_layout.dll (Layout engines)
- cairo-2.dll, pango-1.0-0.dll, fontconfig-1.dll (Graphics rendering)
- zlib1.dll, libexpat.dll, libpng16.dll (Data compression/formats)
- msvcp140.dll, vcruntime140.dll (MSVC runtime)
- All other supporting libraries

**Configuration:**
- config8 - GraphViz plugin configuration

**Headers:**
- graphviz/ directory - Header files required for initialization

## Usage

### Basic Command

```batch
simple_spec_viz.exe visualize <spec.json> -o <output_dir>
```

### Example

```batch
cd D:\priv\DevKit
D:\prod\simple_spec_viz\bin\simple_spec_viz.exe visualize devkit_windows_viz.json -o output
```

### Output

Generates in output directory:
- `state_machine.svg` - State diagram visualization
- `<screen_id>.svg` - Screen mockups
- `traceability.md` - Requirements traceability report

## Distribution

To deploy simple_spec_viz CLI:

1. Copy entire `bin/` folder to target location
2. Ensure all DLLs are in the same directory as .exe
3. Ensure graphviz/ subdirectory is present
4. Ensure config8 file is present

**Important:** Do NOT remove any DLLs or the graphviz/ directory. All are required for runtime.

## Troubleshooting

**Error: "Layout type: dot not recognized"**
- Solution: Verify config8 and graphviz/ directory are present

**Error: Exit code -1073741515**
- Solution: Missing DLLs - verify all 63 .dll files are in bin/ folder

**Error: "Failed to render"**
- Solution: Check graphviz configuration and ensure plugins can be loaded

## Build Information

- **Compiler:** EiffelStudio 25.02
- **Configuration:** -finalize -c_compile
- **Target:** F_code (finalized production)
- **Runtime:** Windows x86-64

---

**Version:** 1.0.0
**Date:** 2026-01-25
