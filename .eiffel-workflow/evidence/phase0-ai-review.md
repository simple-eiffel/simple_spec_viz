# Phase 0: AI Review Response

**STATUS: PENDING** - Awaiting AI review and user feedback.

---

## Instructions

This file will be completed when:

1. **You review the intent document** using the probing questions in:
   ```
   ../.eiffel-workflow/prompts/phase0-intent-review.md
   ```

2. **Submit to an external AI reviewer** (if desired):
   - Copy the entire prompt file
   - Submit to Ollama, Grok, Gemini, or another Claude session
   - Request 8-12 probing questions following the template

3. **Paste AI's response below** this section

4. **Answer each probing question** with clarifications to the intent

5. **Return to Claude Code** and say "review complete" with your answers

---

## Placeholder for AI Review Output

```
### Question 1: Define "Typical Specs"
**Quote from intent:**
> Fast enough (< 5 seconds for typical specs)
**Why it's vague:**
The term "typical specs" is not defined, leaving ambiguity about what constitutes a baseline for performance testing. Without specifics on size, complexity, or examples, it's hard to measure or test if the tool meets this criterion, potentially leading to disputes during acceptance.
**Concrete alternatives:**
1. Option A: Define as specs with up to 10 states, 20 transitions, and 5 screens, based on the 7 canonical examples in reference_docs/gui.
2. Option B: Define as specs with 50+ states and 100+ transitions, aligning with Phase 3 performance optimization goals.
3. Option C: Define as any spec under 1MB JSON file size with no more than 3 nested levels in state hierarchies.
**Recommendation:** Option A, as it ties directly to the documented examples for immediate Phase 1 relevance.

### Question 2: Clarify "Human-Readable" Diagrams
**Quote from intent:**
> SVG diagrams are human-readable (clear state names, visible transitions)
**Why it's vague:**
"Human-readable" lacks measurable standards, such as font sizes, spacing, or clutter thresholds. Without these, subjective interpretations could result in diagrams that are legible to some users but not others, making it untestable.
**Concrete alternatives:**
1. Option A: Require minimum font size of 12pt, transition labels no longer than 20 characters, and no overlapping elements in diagrams with up to 10 states.
2. Option B: Use accessibility standards like WCAG 2.1 Level AA, ensuring color contrast ratios of 4.5:1 and scalable vector graphics without loss of clarity at 200% zoom.
3. Option C: Define as passing a user test where 80% of 5 developers can identify all states and transitions in under 30 seconds.
**Recommendation:** Option B, as it incorporates established standards for broader usability and compliance.

### Question 3: Specify Error Message Clarity
**Quote from intent:**
> Provide error handling with clear messages (file not found, invalid JSON, broken refs)
**Why it's vague:**
"Clear messages" is subjective; it doesn't specify format, detail level, or user guidance. This could lead to messages that are technically accurate but not helpful for non-expert users, reducing the tool's user-friendliness.
**Concrete alternatives:**
1. Option A: Messages must include error type, location (e.g., line number in JSON), and a suggested fix (e.g., "Check widget reference at line 42; ensure it matches WIDGET_CATALOG.md").
2. Option B: Messages formatted as structured output (e.g., JSON-like: {"error": "Invalid JSON", "details": "Missing 'states' key", "fix": "Add required field per GUI_JSON_SPEC_PROTOCOL.md"}).
3. Option C: Messages limited to 100 characters, with a link to documentation (e.g., "Invalid transition guard. See STATE_MACHINE_GUIDE.md for examples.").
**Recommendation:** Option A, as it provides actionable guidance tied to the tool's ecosystem.

### Question 4: Handle Empty or Invalid Specs
**Quote from intent:**
> Load JSON specifications from files (GUI_JSON_SPEC_PROTOCOL.md format)
**Why it's vague:**
No mention of edge cases like empty JSON files, missing required fields (e.g., no states), or invalid formats (e.g., non-JSON content). This assumes all inputs are well-formed, potentially causing crashes or undefined behavior without specified handling.
**Concrete alternatives:**
1. Option A: For empty specs, generate empty diagrams with a warning message: "No states defined; visualization skipped."
2. Option B: Validate against a schema; if invalid, exit with error and list missing fields (e.g., "Required: 'states', 'transitions'").
3. Option C: Fallback to default template (e.g., single "initial" state) for partial specs, logging inconsistencies.
**Recommendation:** Option B, as it ensures robustness and ties to the protocol document for consistency.

### Question 5: Assumptions on User Skills
**Quote from intent:**
> Developers review SVG diagrams of their spec and catch design issues early
**Why it's vague:**
Assumes users (e.g., GUI Developers) have implicit knowledge of state machines, JSON editing, and tools like GraphViz or SVG viewers, without stating prerequisites. This could exclude junior users or require unstated training.
**Concrete alternatives:**
1. Option A: Explicitly state users need basic Eiffel knowledge, familiarity with JSON, and understanding of state machine concepts from STATE_MACHINE_GUIDE.md.
2. Option B: Add a "Prerequisites" section requiring no prior knowledge beyond CLI usage, with tool providing inline tutorials in error messages.
3. Option C: Assume intermediate skills (e.g., 1+ year Eiffel experience) and link to reference_docs/gui for self-learning.
**Recommendation:** Option A, as it aligns with the primary users (GUI Developers) and ecosystem integration.

### Question 6: Define Integration Points
**Quote from intent:**
> Core Integration Point: Sits between AI-generated JSON specifications (from eiffel-gui-ux) and Eiffel implementation (simple_vision)
**Why it's vague:**
Integration is described high-level without specifics on data flow, APIs, or handoffs (e.g., how JSON is passed, version compatibility). This hides dependencies on exact formats or behaviors of eiffel-gui-ux and simple_vision.
**Concrete alternatives:**
1. Option A: Specify input as JSON from eiffel-gui-ux v1.0+, output files consumable by simple_vision via file paths, with no direct API calls.
2. Option B: Define a shared protocol (e.g., extend GUI_JSON_SPEC_PROTOCOL.md) with version pinning (e.g., compatible with eiffel-gui-ux commit hash XYZ).
3. Option C: Make integration loose: tool runs standalone, with optional flags for eiffel-gui-ux output directories.
**Recommendation:** Option B, to ensure traceability and prevent breakage from upstream changes.

### Question 7: Measure "Visualize Perfectly"
**Quote from intent:**
> 7 canonical examples (auth_flow, data_entry_form, crud_application, dashboard, wizard, settings, loading_pattern) must visualize perfectly
**Why it's vague:**
"Visualize perfectly" is untestable without criteria like exact matching to reference images or specific elements rendered. This could lead to subjective acceptance, ignoring variations in rendering engines.
**Concrete alternatives:**
1. Option A: Define as pixel-perfect match to golden SVG files in reference_docs/gui/examples/.
2. Option B: Require all states, transitions, and widgets from the example JSON to appear in outputs, verified by automated diff.
3. Option C: Pass if a manual review confirms no missing elements and layouts match descriptions in STATE_MACHINE_GUIDE.md.
**Recommendation:** Option B, as it enables automated testing while focusing on content accuracy.

### Question 8: GraphViz Error Handling
**Quote from intent:**
> simple_graphviz (rendering) - GraphViz backend for SVG generation
**Why it's vague:**
Assumes GraphViz is installed and available via subprocess, without handling cases like missing installation, timeouts, or failures. This is a hidden dependency that could break the tool on user machines.
**Concrete alternatives:**
1. Option A: Check for GraphViz at runtime; if missing, output error with install instructions (e.g., "Install GraphViz via brew install graphviz").
2. Option B: Provide a fallback to text-based diagrams (e.g., ASCII art) if GraphViz fails, with a warning.
3. Option C: Bundle GraphViz as a dependency in simple_graphviz, ensuring it's always available.
**Recommendation:** Option A, as it keeps the tool lightweight while guiding users.

### Question 9: Reassess MML Necessity
**Quote from intent:**
> YES - Required MML is mandatory for Phase 1.
**Why it's vague:**
The decision assumes MML is essential for frame conditions without considering if standard Eiffel contracts suffice for Phase 1 MVP. This might introduce over-engineering or unnecessary complexity for a lightweight tool.
**Concrete alternatives:**
1. Option A: Make MML optional, using it only for collections with mutations; fallback to basic postconditions for MVP.
2. Option B: Require MML for all collections as stated, but defer full implementation to Phase 2.
3. Option C: Eliminate MML if 100% DBC coverage can be achieved without it, simplifying dependencies.
**Recommendation:** Option A, to balance precision with Phase 1 simplicity.

### Question 10: Scope of "Out of Scope"
**Quote from intent:**
> Out of Scope (Explicitly NOT) - Interactive diagram editor (use simple_gui_designer or Figma instead)
**Why it's vague:**
While listed, it assumes alternatives like simple_gui_designer exist and are integrated, without clarifying if partial interactivity (e.g., hover tooltips) creeps in. This could blur scope boundaries.
**Concrete alternatives:**
1. Option A: Strictly no interactivity in Phase 1-3; defer all to Phase 8 (full editor).
2. Option B: Allow basic SVG attributes (e.g., titles for tooltips) but no clickable actions.
3. Option C: Explicitly state any SVG feature beyond static rendering is out, with examples of forbidden elements (e.g., <script> tags).
**Recommendation:** Option C, to prevent feature creep with clear examples.
Probing questions from AI reviewer will appear below this comment.

Each question follows the format:
- Quote from intent
- Why it's vague
- Concrete alternatives
- Recommendation

Author will then answer each question to refine the intent document.
```

---

## What Happens After Review

Once AI review is complete and questions are answered:

1. **intent-v2.md will be created** with answers incorporated
2. **Dependency audit** will be run (check if all simple_* libraries are available)
3. **Gaps will be identified** (if any ISE/Gobo deps are needed, why, and what future simple_* library could fill the gap)
4. **Final approval** will be requested before proceeding to Phase 1

---

## Current Status

- [x] Initial intent.md created
- [x] Review prompt created (phase0-intent-review.md)
- [ ] AI review conducted
- [ ] User feedback received
- [ ] intent-v2.md created
- [ ] Dependency audit completed
- [ ] Final approval given

---

**Waiting for your action. When ready, provide AI review results or answers to the probing questions above.**
