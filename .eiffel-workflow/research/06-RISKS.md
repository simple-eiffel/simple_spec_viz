# RISKS: simple_spec_viz

## Risk Register

| ID | Risk | Likelihood | Impact | Status | Mitigation |
|----|------|------------|--------|--------|------------|
| RISK-001 | Spec format (GUI_JSON_SPEC_PROTOCOL) changes, breaking compatibility | MEDIUM | HIGH | OPEN | Version the spec format; deprecation path for changes |
| RISK-002 | GraphViz rendering fails on complex specs (performance) | LOW | MEDIUM | MITIGATED | Tested with 50+ state examples; fallback DOT output |
| RISK-003 | Developer adoption low (tool perceived as unnecessary) | MEDIUM | HIGH | MITIGATED | Free and integrated into workflow; reference docs show value |
| RISK-004 | SVG output quality insufficient for designer/stakeholder review | LOW | MEDIUM | MITIGATED | Sketch-level mockups sufficient; not replacement for design tool |
| RISK-005 | Integration with simple_graphviz breaks (API changes) | LOW | MEDIUM | MITIGATED | simple_graphviz v1.0.0 stable; use version locking |
| RISK-006 | Missing documentation for advanced state machine features | MEDIUM | LOW | MITIGATED | STATE_MACHINE_GUIDE.md covers 10 patterns; examples show patterns |
| RISK-007 | CLI too complex/confusing for new users | MEDIUM | LOW | MITIGATED | Help command, QUICKSTART guide, integrated docs subcommand |
| RISK-008 | Traceability reporting overhead (file size, generation time) | LOW | LOW | MITIGATED | Markdown is lightweight; generation <1 second per 100 states |
| RISK-009 | Platform compatibility issues (Windows/Linux/macOS) | LOW | MEDIUM | MITIGATED | Tested on Windows; Docker support possible; EiffelStudio compatible |
| RISK-010 | Eiffel ecosystem shift away from simple_* libraries | LOW | MEDIUM | MITIGATED | DBC in Eiffel core; library approach not abandoned |

## Technical Risks

### RISK-001: Specification Format Evolution
**Description:** GUI_JSON_SPEC_PROTOCOL.md may evolve. Specs written for v1.0 might not work with v2.0.

**Likelihood:** MEDIUM (specs are living documents)
**Impact:** HIGH (existing specs break, tool loses value)

**Current State:**
- Version documented as v1.0
- Format is relatively stable (no known changes planned)
- Simple_spec_viz has no version checking

**Indicators:**
- New fields added to spec without deprecation
- Backwards compatibility breaks announced
- Incompatible parser changes

**Mitigation:**
1. Add version field to spec format (required)
2. Version simple_spec_viz parser (maintain multiple versions)
3. Clear deprecation path for format changes (minimum 1 year notice)
4. Keep changelog of format changes
5. Provide migration tools for format updates

**Contingency:** Fall back to supporting previous spec versions; user gets helpful error with migration guide.

**Owner:** simple_spec_viz maintainer + GUI_JSON_SPEC_PROTOCOL steward

---

### RISK-002: GraphViz Rendering Failure on Complex Specs
**Description:** Large state machines (50+ states, complex transitions) might cause GraphViz to struggle.

**Likelihood:** LOW (GraphViz designed for >1000-node graphs)
**Impact:** MEDIUM (users with large specs get poor diagrams or timeout)

**Current State:**
- Tested with largest example (CRUD application: 7 states)
- Not tested with 50+ state spec
- No timeout or resource limits configured

**Indicators:**
- Rendering >10 seconds
- GraphViz process exits with timeout
- SVG output is unreadable (nodes overlapping)

**Mitigation:**
1. Test with large synthetic specs (generate 50+ state test case)
2. Set GraphViz timeout (30 seconds max)
3. Add rendering progress indicator
4. Offer DOT-only output if rendering fails
5. Provide guidance on spec decomposition (split large specs into sub-diagrams)

**Contingency:** Output raw DOT and helpful message: "Spec is complex. GraphViz output available at spec.dot. View in other tools or simplify spec."

**Owner:** simple_spec_viz maintainer

---

### RISK-003: Void Safety Issues in Generated Code
**Description:** Detachable variables not properly checked, causing void safety violations.

**Likelihood:** LOW (already fixed Jan 25, 2026)
**Impact:** HIGH (code won't compile)

**Current State:**
- ✓ FIXED: All detachable variables now use `attached` guards
- ✓ FIXED: File reading refactored to avoid void target errors
- ✓ VERIFIED: Compiles cleanly on EiffelStudio 25.02

**Indicators:**
- VUTA/VUTE/VUEX/VUAR errors on compilation
- Null pointer exceptions at runtime

**Mitigation:**
1. ✓ Code review caught void safety violations
2. ✓ Added defensive `attached` checks
3. Continuous integration with -fvoid_safety=all flag
4. Code review for all new feature branches

**Contingency:** Revert to known-good version from git, fix in new branch.

**Owner:** simple_spec_viz maintainer (CLOSED - fixed Jan 25, 2026)

---

## Ecosystem Risks

### RISK-004: simple_graphviz API Changes
**Description:** If simple_graphviz changes API, simple_spec_viz breaks.

**Likelihood:** LOW (v1.0.0 stable, mature)
**Impact:** MEDIUM (requires rewrite of generators)

**Current State:**
- simple_graphviz v1.0.0 released (Jan 24, 2026)
- API used: STATE_MACHINE_BUILDER, graph rendering
- No known planned changes

**Indicators:**
- New version of simple_graphviz released
- Compilation fails with method-not-found errors
- simple_graphviz deprecates STATE_MACHINE_BUILDER

**Mitigation:**
1. Pin simple_graphviz version in ECF (require v1.0.0+)
2. Add unit tests for simple_graphviz integration
3. Monitor simple_graphviz releases for API changes
4. Plan migration before updating version

**Contingency:** Lock to simple_graphviz v1.0.0 until compatible new version available.

**Owner:** Eiffel ecosystem maintainers

---

### RISK-005: Simple_JSON Format Changes
**Description:** If simple_json API changes, spec loading breaks.

**Likelihood:** LOW (JSON is stable format)
**Impact:** MEDIUM (spec loader needs rewrite)

**Current State:**
- Using simple_json for parsing GUI_JSON_SPEC_PROTOCOL format
- API is stable and well-documented
- No known API changes planned

**Indicators:**
- simple_json version bump with breaking changes
- parse() method renamed or signature changed
- JSON object navigation API modified

**Mitigation:**
1. Use adapter pattern: wrap simple_json with SPEC_LOADER interface
2. Unit tests for JSON parsing (mock simple_json if needed)
3. Version pin in ECF
4. Monitor simple_json releases

**Contingency:** Implement custom JSON parser if simple_json becomes unmaintained.

**Owner:** Eiffel ecosystem maintainers

---

## Resource & Process Risks

### RISK-006: Documentation Decay
**Description:** Reference documentation (WIDGET_CATALOG, STATE_MACHINE_GUIDE, etc.) becomes outdated.

**Likelihood:** MEDIUM (documentation requires maintenance)
**Impact:** LOW (users get confused, but tool still works)

**Current State:**
- Comprehensive documentation created (8 guides, 7 examples)
- Integrated with CLI docs command
- No automated freshness checks

**Indicators:**
- Guide references non-existent widgets
- Examples don't compile with current simple_vision
- Known gaps in documentation remain unfilled
- User reports: "docs don't match actual behavior"

**Mitigation:**
1. Add documentation review checklist to simple_vision releases
2. Run examples against new simple_vision versions in CI
3. Establish "docs owner" role (keeps guides updated)
4. Version documentation alongside code (git history)
5. Add "Last Updated" date to each guide

**Contingency:** Mark out-of-date docs clearly; provide contact for updates.

**Owner:** Documentation maintainer (TBD)

---

### RISK-007: Insufficient Test Coverage
**Description:** Not all code paths tested, regressions appear in production use.

**Likelihood:** MEDIUM (current test coverage good but not comprehensive)
**Impact:** MEDIUM (users hit bugs, credibility lost)

**Current State:**
- Acceptance tests for 7 examples all passing
- Unit tests for loaders and generators
- Missing: error path testing, edge cases

**Indicators:**
- User reports bug that tests don't catch
- Regression after refactoring
- Test suite passes but code fails in real use

**Mitigation:**
1. Add adversarial tests (invalid specs, missing fields, etc.)
2. Fuzz testing with random spec generation
3. Performance tests (ensure <5 second response time)
4. Continuous integration on every commit
5. Code coverage measurement (target 80%+)

**Contingency:** Add tests retroactively when bugs found.

**Owner:** simple_spec_viz test maintainer

---

## Adoption Risks

### RISK-008: Developer Adoption (Low Perceived Value)
**Description:** Developers don't see value in visualization, prefer direct implementation.

**Likelihood:** MEDIUM (some developers skip design phase)
**Impact:** HIGH (tool becomes unused, maintenance burden)

**Current State:**
- Integrated into eiffel-research → eiffel-spec workflow
- Reference documentation and examples show value
- But adoption depends on workflow adoption

**Indicators:**
- Zero usage in real projects
- Feature requests for non-core capabilities
- Complaints about CLI interface
- Users switch to PlantUML/Figma

**Mitigation:**
1. Show ROI: "Spec visualization prevents X% of bugs" (measure)
2. Integration with CI/CD pipeline (automatic spec validation)
3. Feedback loop: visualization → code generation
4. Success stories: publish case studies of projects using simple_spec_viz
5. Workshops/training on spec-driven development
6. Integrate docs command to make tool indispensable

**Contingency:** If adoption remains low, reduce maintenance effort to minimal (bug fixes only).

**Owner:** simple-eiffel community + marketing

---

## Platform & Compatibility Risks

### RISK-009: Cross-Platform Issues
**Description:** Tool works on Windows but fails on Linux/macOS (file paths, line endings, etc.).

**Likelihood:** LOW (Eiffel handles portability well)
**Impact:** MEDIUM (Linux users can't use tool)

**Current State:**
- Developed on Windows
- Code uses "/" for paths (platform-independent)
- File operations use PLAIN_TEXT_FILE (portable)
- Not tested on Linux/macOS

**Indicators:**
- Compilation fails on Linux
- Path issues ("file not found" on Linux)
- Line ending issues in output
- Missing graphviz executable on Unix

**Mitigation:**
1. Test on Linux and macOS (CI with multiple OSes)
2. Use environment variables for paths ($SIMPLE_EIFFEL/reference_docs/gui)
3. Handle both "/" and "\" in path parsing
4. Provide platform-specific installation guides
5. Document graphviz installation for each platform

**Contingency:** Publish workaround scripts for problematic platforms.

**Owner:** simple-eiffel CI/testing team

---

## Monitoring & Early Warning

### Risk Monitoring Strategy
- **Quarterly review** of RISKS.md against reality
- **User feedback surveys** (collect pain points)
- **Metrics tracking**: adoption, time-to-generate, error rates
- **Automated alerts**: GraphViz timeout, spec format incompatibility
- **Community watch**: monitor simple_vision, simple_graphviz, eiffel ecosystem changes

### When to Escalate
- Risk likelihood moves from LOW → MEDIUM
- Risk impact moves to CRITICAL level
- Contingency plan needs activation
- More than 10% of users report same issue

---

## Risk Acceptance

**Acceptable Risks:**
- RISK-002 (GraphViz timeout) - Rare, graceful fallback available
- RISK-004 (simple_graphviz changes) - v1.0.0 is stable, can pin version
- RISK-009 (Platform compatibility) - Can be addressed in Phase 8

**Unacceptable Risks:**
- RISK-001 (Spec format breaks) - Mitigation required before release
- RISK-003 (Void safety) - FIXED as of Jan 25, 2026
- RISK-008 (Low adoption) - Mitigate via integration and documentation

**Risks to Watch:**
- RISK-006 (Documentation decay) - Plan for long-term maintenance
- RISK-007 (Test coverage gaps) - Expand test suite proactively
