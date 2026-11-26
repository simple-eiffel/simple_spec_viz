# simple_spec_viz - CLI Distribution

**Binary:** simple_spec_viz.exe (2.2MB)
**Version:** 1.0.0

## Contents

This folder contains the finalized (F_code) simple_spec_viz CLI with all required runtime dependencies.

### Files

```
bin/
├── simple_spec_viz.exe          (2.2MB - Main executable)
├── *.dll                        (60 runtime DLLs)
├── graphviz/                    (Header files - required for runtime)
├── config8                      (GraphViz configuration)
└── README.md                    (This file)
```

## GraphViz Dependencies

The CLI requires GraphViz runtime libraries to generate SVG diagrams:

**DLLs included (60 total):**
- gvc.dll, cgraph.dll, cdt.dll (Core GraphViz 16.1.2)
- gvplugin_core.dll, gvplugin_dot_layout.dll, gvplugin_neato_layout.dll (Layout engines)
- cairo-2.dll, pango-1.0-0.dll, fontconfig-1.dll (Graphics rendering)
- zlib1.dll, libexpat.dll, libpng16.dll (Data compression/formats)
- msvcp140.dll, vcruntime140.dll (MSVC runtime)
- All other supporting libraries

**Configuration:**
- config8 - GraphViz plugin configuration

**Headers:**
- graphviz/ directory - Header files required for initialization

## Where the DLLs come from (2026-11-26)

One version per DLL name across the simple_* fleet: a DLL another library owns is a
byte-identical copy of the owner's file. simple_graphviz's `bin/` (not in git) holds the same 60.

| Source | DLLs |
|---|---|
| Graphviz 16.1.2, `windows_10_cmake_Release_Graphviz-16.1.2-win64.zip` (SHA-256 `0924501672e796e05d3b6dd402d518e352ed28e9329dc668f40ce52357aa9f4b`, as GitLab publishes) | cdt, cgraph, cgraph++, gvc, gvc++, pathplan, xdot, gvplugin_*, config8, and Graphviz's own third-party set: cairo-2, glib/gio/gobject/gmodule 2.78.4, pango* 1.50.14, harfbuzz, fribidi-0, pcre2-8, ffi-8, intl-8, iconv-2, libgd, libwebp, libsharpyuv, gts, brotli*, bz2, zlib1 |
| simple_cairo (owner) | fontconfig-1, pixman-1-0, freetype (2.14.3), libexpat (2.9.0), libpng16 (1.6.59), zlib (1.3.1) |
| simple_pdf (owner) | tiff (4.7.2), liblzma (5.8.3), zstd (1.6.0), deflate (1.26), jpeg8 (libjpeg-turbo 3.2.1), Lerc (4.3.0) |
| libjpeg-turbo 3.2.1, official `libjpeg-turbo-3.2.1-vc-x64.exe` (signed by Darrell Commander) | jpeg62 |
| Microsoft Visual C++ 14.50.35719 (Microsoft-signed) | vcruntime140, vcruntime140_1, msvcp140, msvcp140_1, msvcp140_2, msvcp140_atomic_wait, msvcp140_codecvt_ids, concrt140 |

- **Checked before the swap:** every import of every DLL here resolves, by name and by ordinal.
  gvc.dll and fontconfig-1.dll import Expat by ordinal, libgd.dll imports jpeg62 by ordinal, and
  tiff.dll imports jpeg8 by ordinal; each ordinal names the same function in the new file.
- **Removed:** tcl86t (Tcl 8.6.10), tcldot, tcldot_builtin, tclplan, gdtclft, gvpr, ANN and
  getopt. Only Tcl and Graphviz's command-line programs load them; none ships here.
- **Graphviz's own third-party set** (glib, pango, cairo-2 and the rest) is what Graphviz 16.1.2
  ships, unchanged from 14.1.1.
- **Proved:** with only this folder and System32 on PATH, simple_spec_viz 60/0, simple_graphviz
  72/0, and Graphviz's dot.exe renders SVG, PNG and PDF (cairo), PNG, JPEG and GIF (gd), WebP,
  and PNG and BMP (GDI+), and neato PNG.
- **To change one:** change it at its owner first, then copy it here and into simple_graphviz/bin.

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
- Solution: Missing DLLs - verify all 60 .dll files are in bin/ folder

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
