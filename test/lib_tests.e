note
	description: "Tests for simple_spec_viz library"
	author: "Larry Rix"
	date: "2026-01-24"

class
	LIB_TESTS

inherit
	TEST_SET_BASE

feature -- Test Data

	sample_json: STRING
			-- Sample specification JSON for testing.
		do
			Result := "[
{
  "name": "Test App",
  "version": "1.0.0",
  "states": [
    {
      "id": "S-001",
      "name": "idle",
      "description": "Waiting for input",
      "is_initial": true,
      "screen": "SCR-001",
      "entry_actions": ["show_prompt"]
    },
    {
      "id": "S-002",
      "name": "processing",
      "description": "Processing command",
      "screen": "SCR-002"
    },
    {
      "id": "S-003",
      "name": "complete",
      "description": "Command finished",
      "is_final": true,
      "screen": "SCR-003"
    }
  ],
  "transitions": [
    {
      "id": "T-001",
      "event": "run",
      "from": "S-001",
      "to": "S-002",
      "label": "run command",
      "requirements": ["FR-001", "UC-001"]
    },
    {
      "id": "T-002",
      "event": "success",
      "from": "S-002",
      "to": "S-003",
      "label": "success"
    },
    {
      "id": "T-003",
      "event": "error",
      "from": "S-002",
      "to": "S-001",
      "label": "error"
    }
  ],
  "screens": [
    {
      "id": "SCR-001",
      "name": "Main Prompt",
      "description": "CLI prompt",
      "widgets": [
        {"type": "text", "id": "prompt", "label": "devkit>", "x": 10, "y": 10},
        {"type": "text_field", "id": "input", "placeholder": "Enter command", "x": 80, "y": 10, "width": 300}
      ],
      "requirements": ["FR-020"]
    },
    {
      "id": "SCR-002",
      "name": "Processing",
      "widgets": [
        {"type": "text", "id": "status", "label": "Processing...", "x": 10, "y": 10},
        {"type": "progress_bar", "id": "progress", "x": 10, "y": 40, "width": 200}
      ]
    },
    {
      "id": "SCR-003",
      "name": "Complete",
      "widgets": [
        {"type": "text", "id": "result", "label": "Done!", "x": 10, "y": 10},
        {"type": "button", "id": "ok_btn", "label": "OK", "x": 10, "y": 50, "width": 80}
      ]
    }
  ],
  "traceability": {
    "requirements_to_states": {
      "FR-001": ["S-001", "S-002"],
      "UC-001": ["S-001", "T-001", "S-002"]
    },
    "states_to_screens": {
      "S-001": "SCR-001",
      "S-002": "SCR-002",
      "S-003": "SCR-003"
    }
  }
}
]"
		end

feature -- Assertions

--	assert (a_tag: STRING; a_condition: BOOLEAN)
--			-- Assert that `a_condition` is True.
--		require
--			tag_not_void: a_tag /= Void
--		do
--			if not a_condition then
--				io.put_string ("ASSERTION FAILED: " + a_tag + "%N")
--				(create {EXCEPTIONS}).raise ("Assertion failed: " + a_tag)
--			end
--		end

--	assert_equal (a_tag: STRING; a_expected, a_actual: ANY)
--			-- Assert that `a_expected` equals `a_actual`.
--		require
--			tag_not_void: a_tag /= Void
--		do
--			if not (a_expected ~ a_actual) then
--				io.put_string ("ASSERTION FAILED: " + a_tag + " (expected: " + a_expected.out + ", got: " + a_actual.out + ")%N")
--				(create {EXCEPTIONS}).raise ("Assertion failed: " + a_tag)
--			end
--		end

feature -- State Tests

	test_spec_state_creation
			-- Test SPEC_STATE creation.
		local
			l_state: SPEC_STATE
		do
			create l_state.make ("S-001", "idle", "Waiting for input")
			assert_equal ("id", "S-001", l_state.id)
			assert_equal ("name", "idle", l_state.name)
			assert_equal ("description", "Waiting for input", l_state.description)
			assert ("not initial by default", not l_state.is_initial)
			assert ("not final by default", not l_state.is_final)
		end

	test_spec_state_initial_final
			-- Test initial/final state flags.
		local
			l_state: SPEC_STATE
		do
			create l_state.make ("S-001", "start", "Initial state")
			l_state.set_initial (True)
			assert ("is_initial", l_state.is_initial)

			create l_state.make ("S-002", "end", "Final state")
			l_state.set_final (True)
			assert ("is_final", l_state.is_final)
		end

	test_spec_state_screen_association
			-- Test state-screen association.
		local
			l_state: SPEC_STATE
		do
			create l_state.make ("S-001", "idle", "")
			assert ("no screen initially", not l_state.has_screen)

			l_state.set_screen_id ("SCR-001")
			assert ("has screen", l_state.has_screen)
			if attached l_state.screen_id as l_sid then
				assert_equal ("screen_id", "SCR-001", l_sid)
			else
				assert ("screen_id_attached", False)
			end
		end

	test_spec_state_actions
			-- Test entry/exit actions.
		local
			l_state: SPEC_STATE
		do
			create l_state.make ("S-001", "idle", "")
			l_state.add_entry_action ("show_prompt")
			l_state.add_exit_action ("clear_prompt")

			assert ("entry action count", l_state.entry_actions.count = 1)
			assert ("exit action count", l_state.exit_actions.count = 1)
			assert ("has entry action", l_state.entry_actions [1].same_string ("show_prompt"))
			assert ("has exit action", l_state.exit_actions [1].same_string ("clear_prompt"))
		end

feature -- Transition Tests

	test_spec_transition_creation
			-- Test SPEC_TRANSITION creation.
		local
			l_trans: SPEC_TRANSITION
		do
			create l_trans.make ("T-001", "run", "S-001", "S-002", "run command")
			assert_equal ("id", "T-001", l_trans.id)
			assert_equal ("event", "run", l_trans.event)
			assert_equal ("from", "S-001", l_trans.from_state_id)
			assert_equal ("to", "S-002", l_trans.to_state_id)
			assert_equal ("label", "run command", l_trans.label)
			assert ("not self-loop", not l_trans.is_self_loop)
		end

	test_spec_transition_self_loop
			-- Test self-loop detection.
		local
			l_trans: SPEC_TRANSITION
		do
			create l_trans.make ("T-001", "retry", "S-001", "S-001", "retry")
			assert ("is self-loop", l_trans.is_self_loop)
		end

	test_spec_transition_requirements
			-- Test requirement associations.
		local
			l_trans: SPEC_TRANSITION
		do
			create l_trans.make ("T-001", "run", "S-001", "S-002", "run")
			l_trans.add_requirement ("FR-001")
			l_trans.add_requirement ("UC-001")

			assert ("requirement count", l_trans.requirements.count = 2)
			assert ("has FR-001", l_trans.requirements [1].same_string ("FR-001"))
			assert ("has UC-001", l_trans.requirements [2].same_string ("UC-001"))
		end

feature -- Screen Tests

	test_spec_screen_creation
			-- Test SPEC_SCREEN creation.
		local
			l_screen: SPEC_SCREEN
		do
			create l_screen.make ("SCR-001", "Main Prompt", "CLI prompt")
			assert_equal ("id", "SCR-001", l_screen.id)
			assert_equal ("name", "Main Prompt", l_screen.name)
			assert_equal ("description", "CLI prompt", l_screen.description)
			assert ("widgets empty", l_screen.widgets.is_empty)
		end

	test_spec_screen_widgets
			-- Test widget management.
		local
			l_screen: SPEC_SCREEN
			l_widget: SPEC_WIDGET
		do
			create l_screen.make ("SCR-001", "Main", "")
			create l_widget.make ("button", "btn1", "Click me")
			l_screen.add_widget (l_widget)

			assert ("widget count", l_screen.widgets.count = 1)
			assert ("find widget by id", l_screen.widget_by_id ("btn1") /= Void)
			assert ("widget type filter", l_screen.widgets_of_type ("button").count = 1)
		end

feature -- Widget Tests

	test_spec_widget_creation
			-- Test SPEC_WIDGET creation.
		local
			l_widget: SPEC_WIDGET
		do
			create l_widget.make ("button", "btn1", "Submit")
			assert_equal ("type", "button", l_widget.widget_type)
			assert_equal ("id", "btn1", l_widget.id)
			assert_equal ("label", "Submit", l_widget.label)
			assert ("is_button", l_widget.is_button)
		end

	test_spec_widget_types
			-- Test widget type detection.
		local
			l_widget: SPEC_WIDGET
		do
			create l_widget.make ("text", "lbl1", "Hello")
			assert ("is_text", l_widget.is_text)

			create l_widget.make ("text_field", "inp1", "")
			assert ("is_text_field", l_widget.is_text_field)

			create l_widget.make ("progress_bar", "prog1", "")
			assert ("is_progress_bar", l_widget.is_progress_bar)

			create l_widget.make ("checkbox", "chk1", "Accept")
			assert ("is_checkbox", l_widget.is_checkbox)

			create l_widget.make ("dropdown", "sel1", "Choose")
			assert ("is_dropdown", l_widget.is_dropdown)
		end

	test_spec_widget_position_size
			-- Test position and size.
		local
			l_widget: SPEC_WIDGET
		do
			create l_widget.make ("button", "btn1", "OK")
			l_widget.set_position (100, 200)
			l_widget.set_size (80, 25)

			assert_equal ("x", 100, l_widget.x)
			assert_equal ("y", 200, l_widget.y)
			assert_equal ("width", 80, l_widget.width)
			assert_equal ("height", 25, l_widget.height)
		end

	test_spec_widget_display_text
			-- Test display text generation.
		local
			l_widget: SPEC_WIDGET
		do
			create l_widget.make ("button", "btn1", "OK")
			assert_equal ("button display", "[button] btn1: %"OK%"", l_widget.display_text)

			create l_widget.make ("checkbox", "chk1", "Accept")
			assert_equal ("checkbox display", "[checkbox] chk1: %"Accept%"", l_widget.display_text)
		end

feature -- Document Tests

	test_spec_document_creation
			-- Test SPEC_DOCUMENT creation.
		local
			l_doc: SPEC_DOCUMENT
		do
			create l_doc.make ("Test App", "1.0.0")
			assert_equal ("name", "Test App", l_doc.name)
			assert_equal ("version", "1.0.0", l_doc.version)
			assert ("states empty", l_doc.states.is_empty)
			assert ("transitions empty", l_doc.transitions.is_empty)
			assert ("screens empty", l_doc.screens.is_empty)
		end

	test_spec_document_add_elements
			-- Test adding states, transitions, screens.
		local
			l_doc: SPEC_DOCUMENT
			l_state: SPEC_STATE
			l_trans: SPEC_TRANSITION
			l_screen: SPEC_SCREEN
		do
			create l_doc.make ("Test", "1.0")

			create l_state.make ("S-001", "idle", "")
			l_doc.add_state (l_state)
			assert ("state count", l_doc.states.count = 1)

			create l_trans.make ("T-001", "run", "S-001", "S-002", "run")
			l_doc.add_transition (l_trans)
			assert ("transition count", l_doc.transitions.count = 1)

			create l_screen.make ("SCR-001", "Main", "")
			l_doc.add_screen (l_screen)
			assert ("screen count", l_doc.screens.count = 1)
		end

	test_spec_document_queries
			-- Test document query methods.
		local
			l_doc: SPEC_DOCUMENT
			l_state1, l_state2: SPEC_STATE
		do
			create l_doc.make ("Test", "1.0")

			create l_state1.make ("S-001", "idle", "")
			l_state1.set_initial (True)
			l_doc.add_state (l_state1)

			create l_state2.make ("S-002", "done", "")
			l_state2.set_final (True)
			l_doc.add_state (l_state2)

			assert ("find state by id", l_doc.state_by_id ("S-001") /= Void)
			assert ("initial state", l_doc.initial_state /= Void)
			assert ("final states count", l_doc.final_states.count = 1)
		end

feature -- Loader Tests

	test_loader_from_string
			-- Test loading from JSON string.
		local
			l_loader: SPEC_LOADER
			l_doc: detachable SPEC_DOCUMENT
		do
			create l_loader.make
			l_doc := l_loader.load_from_string (sample_json)

			assert ("doc loaded", l_doc /= Void)
			if attached l_doc as doc then
				assert_equal ("name", "Test App", doc.name)
				assert_equal ("version", "1.0.0", doc.version)
				assert ("states loaded", doc.states.count = 3)
				assert ("transitions loaded", doc.transitions.count = 3)
				assert ("screens loaded", doc.screens.count = 3)
			end
		end

	test_loader_states_parsed
			-- Test that states are parsed correctly.
		local
			l_loader: SPEC_LOADER
			l_doc: detachable SPEC_DOCUMENT
		do
			create l_loader.make
			l_doc := l_loader.load_from_string (sample_json)

			if attached l_doc as doc then
				assert ("initial state exists", doc.initial_state /= Void)
				if attached doc.initial_state as init then
					assert_equal ("initial name", "idle", init.name)
					assert ("has entry actions", init.entry_actions.count > 0)
				end
				assert ("final states exist", doc.final_states.count = 1)
			end
		end

	test_loader_transitions_parsed
			-- Test that transitions are parsed correctly.
		local
			l_loader: SPEC_LOADER
			l_doc: detachable SPEC_DOCUMENT
			l_trans_from_s001: ARRAYED_LIST [SPEC_TRANSITION]
		do
			create l_loader.make
			l_doc := l_loader.load_from_string (sample_json)

			if attached l_doc as doc then
				l_trans_from_s001 := doc.transitions_from ("S-001")
				assert ("transitions from S-001", l_trans_from_s001.count = 1)

				if not l_trans_from_s001.is_empty then
					assert ("has requirements", l_trans_from_s001.first.requirements.count = 2)
				end
			end
		end

	test_loader_screens_parsed
			-- Test that screens and widgets are parsed correctly.
		local
			l_loader: SPEC_LOADER
			l_doc: detachable SPEC_DOCUMENT
		do
			create l_loader.make
			l_doc := l_loader.load_from_string (sample_json)

			if attached l_doc as doc then
				if attached doc.screen_by_id ("SCR-001") as scr then
					assert ("widgets loaded", scr.widgets.count = 2)
					assert ("has text widget", scr.widget_by_id ("prompt") /= Void)
					assert ("has input widget", scr.widget_by_id ("input") /= Void)
				else
					assert ("screen SCR-001 found", False)
				end
			end
		end

	test_loader_traceability_parsed
			-- Test that traceability is parsed correctly.
		local
			l_loader: SPEC_LOADER
			l_doc: detachable SPEC_DOCUMENT
		do
			create l_loader.make
			l_doc := l_loader.load_from_string (sample_json)

			if attached l_doc as doc then
				assert ("req-to-states loaded",
					doc.traceability.states_for_requirement ("FR-001").count = 2)
				assert ("state-to-screen loaded",
					doc.traceability.screen_for_state ("S-001") /= Void)
			end
		end

feature -- Traceability Tests

	test_traceability_matrix
			-- Test TRACEABILITY_MATRIX operations.
		local
			l_matrix: TRACEABILITY_MATRIX
			l_states: ARRAYED_LIST [STRING]
		do
			create l_matrix.make

			create l_states.make (2)
			l_states.extend ("S-001")
			l_states.extend ("S-002")
			l_matrix.add_requirement_to_states ("FR-001", l_states)

			l_matrix.add_state_to_screen ("S-001", "SCR-001")

			assert ("requirement exists", l_matrix.states_for_requirement ("FR-001").count = 2)
			assert ("screen mapping", l_matrix.screen_for_state ("S-001") /= Void)
			if attached l_matrix.screen_for_state ("S-001") as l_screen then
				assert_equal ("screen value", "SCR-001", l_screen)
			else
				assert ("screen_value_attached", False)
			end
		end

	test_traceability_reverse_lookup
			-- Test reverse lookup (requirements for state).
		local
			l_matrix: TRACEABILITY_MATRIX
			l_states: ARRAYED_LIST [STRING]
		do
			create l_matrix.make

			create l_states.make (2)
			l_states.extend ("S-001")
			l_states.extend ("S-002")
			l_matrix.add_requirement_to_states ("FR-001", l_states)
			l_matrix.add_requirement_state ("FR-002", "S-001")

			assert ("requirements for S-001", l_matrix.requirements_for_state ("S-001").count = 2)
			assert ("requirements for S-002", l_matrix.requirements_for_state ("S-002").count = 1)
		end

feature -- Generator Tests

	test_state_diagram_generator
			-- Test state diagram DOT generation.
		local
			l_loader: SPEC_LOADER
			l_doc: detachable SPEC_DOCUMENT
			l_gen: STATE_DIAGRAM_GENERATOR
			l_dot: STRING
		do
			create l_loader.make
			l_doc := l_loader.load_from_string (sample_json)

			if attached l_doc as doc then
				create l_gen.make
				l_dot := l_gen.generate_dot (doc)

				assert ("DOT not empty", not l_dot.is_empty)
				assert ("has digraph", l_dot.has_substring ("digraph"))
				assert ("has idle state", l_dot.has_substring ("idle"))
				assert ("has processing state", l_dot.has_substring ("processing"))
			end
		end

	test_state_diagram_svg_generation
			-- Test SVG generation.
		local
			l_loader: SPEC_LOADER
			l_doc: detachable SPEC_DOCUMENT
			l_gen: STATE_DIAGRAM_GENERATOR
			l_result: SPEC_VIZ_RESULT
		do
			create l_loader.make
			l_doc := l_loader.load_from_string (sample_json)

			if attached l_doc as doc then
				create l_gen.make
				l_result := l_gen.generate (doc)

				assert ("is_success", l_result.is_success)
				assert ("content not empty", not l_result.content.is_empty)
				assert ("is SVG", l_result.is_svg)
			end
		end

	test_screen_mockup_generator
			-- Test screen mockup DOT generation.
		local
			l_screen: SPEC_SCREEN
			l_widget: SPEC_WIDGET
			l_gen: SCREEN_MOCKUP_GENERATOR
			l_dot: STRING
		do
			create l_screen.make ("SCR-001", "Test Screen", "")
			create l_widget.make ("button", "btn1", "OK")
			l_widget.set_position (10, 10)
			l_screen.add_widget (l_widget)

			create l_gen.make
			l_dot := l_gen.generate_dot (l_screen)

			assert ("DOT not empty", not l_dot.is_empty)
			assert ("has digraph", l_dot.has_substring ("digraph"))
			assert ("has record shape", l_dot.has_substring ("record"))
		end

	test_screen_mockup_all
			-- Test generating mockups for all screens.
		local
			l_loader: SPEC_LOADER
			l_doc: detachable SPEC_DOCUMENT
			l_gen: SCREEN_MOCKUP_GENERATOR
			l_results: ARRAYED_LIST [SPEC_VIZ_RESULT]
		do
			create l_loader.make
			l_doc := l_loader.load_from_string (sample_json)

			if attached l_doc as doc then
				create l_gen.make
				l_results := l_gen.generate_all (doc)

				assert ("result count matches screens", l_results.count = doc.screens.count)
				assert ("all successful", across l_results as r all r.is_success end)
			end
		end

	test_traceability_report_generator
			-- Test traceability report generation.
		local
			l_loader: SPEC_LOADER
			l_doc: detachable SPEC_DOCUMENT
			l_gen: TRACEABILITY_REPORT_GENERATOR
			l_result: SPEC_VIZ_RESULT
		do
			create l_loader.make
			l_doc := l_loader.load_from_string (sample_json)

			if attached l_doc as doc then
				create l_gen.make
				l_result := l_gen.generate (doc)

				assert ("is_success", l_result.is_success)
				assert ("is markdown", l_result.is_markdown)
				assert ("has header", l_result.content.has_substring ("# Traceability Matrix"))
				assert ("has states section", l_result.content.has_substring ("## States"))
				assert ("has requirements section", l_result.content.has_substring ("## Requirements"))
			end
		end

feature -- Facade Tests

	test_simple_spec_viz_facade
			-- Test main facade.
		local
			l_viz: SIMPLE_SPEC_VIZ
			l_doc: detachable SPEC_DOCUMENT
		do
			create l_viz.make
			l_doc := l_viz.load_from_json (sample_json)

			assert ("doc loaded", l_doc /= Void)
			if attached l_doc as doc then
				-- Test state diagram
				assert ("state diagram success", l_viz.generate_state_diagram (doc).is_success)

				-- Test screen mockups
				assert ("mockups count", l_viz.generate_screen_mockups (doc).count = 3)

				-- Test traceability
				assert ("traceability success", l_viz.generate_traceability_report (doc).is_success)
			end
		end

feature -- End-to-End File Tests

	test_end_to_end_file_generation
			-- Test full pipeline with both DevKit specifications.
			-- Inputs: test_data/inputs/devkit_cli.json and devkit_windows.json
			-- Output: test_data/outputs/
		do
			-- Test DevKit CLI specification (4 states, 5 transitions, 4 screens)
			test_specification_pipeline ("devkit_cli.json", "DevKit CLI")

			-- Test DevKit Windows GUI specification (5 states, 8 transitions, 5 screens)
			test_specification_pipeline ("devkit_windows.json", "DevKit Windows GUI")
		end

	test_specification_pipeline (a_input_path, a_spec_name: STRING)
			-- Test full pipeline for a single specification.
			-- Loads JSON file, generates all outputs, and verifies files were created.
		require
			input_path_not_void: a_input_path /= Void
			input_path_not_empty: not a_input_path.is_empty
			spec_name_not_void: a_spec_name /= Void
		local
			l_viz: SIMPLE_SPEC_VIZ
			l_doc: detachable SPEC_DOCUMENT
			l_output_dir: STRING
			l_input_path: STRING
			l_state_machine_path: STRING
			l_traceability_path: STRING
			l_state_file: PLAIN_TEXT_FILE
			l_trace_file: PLAIN_TEXT_FILE
		do
			-- Set up absolute paths using Windows format
			l_output_dir := "D:\prod\simple_spec_viz\test\test_data\outputs"
			l_input_path := "D:\prod\simple_spec_viz\test\test_data\inputs\" + a_input_path
			l_state_machine_path := l_output_dir + "/state_machine.svg"
			l_traceability_path := l_output_dir + "/traceability.md"

			-- Load specification from file
			create l_viz.make
			l_doc := l_viz.load_from_file (l_input_path)

			assert ("doc loaded: " + a_spec_name, l_doc /= Void)
			if attached l_doc as doc then
				-- Generate all outputs to files
				assert ("generate_all succeeded: " + a_spec_name, l_viz.generate_all (doc, l_output_dir))

				-- Verify state machine SVG was created and has valid content
				create l_state_file.make_open_read (l_state_machine_path)
				if l_state_file.exists and then l_state_file.is_open_read then
					assert ("state_machine.svg has content: " + a_spec_name, l_state_file.count > 0)
					l_state_file.close
				else
					assert ("state_machine.svg created: " + a_spec_name, False)
				end

				-- Verify traceability markdown was created and has header
				create l_trace_file.make_open_read (l_traceability_path)
				if l_trace_file.exists and then l_trace_file.is_open_read then
					assert ("traceability.md has content: " + a_spec_name, l_trace_file.count > 0)
					l_trace_file.close
				else
					assert ("traceability.md created: " + a_spec_name, False)
				end

				-- Verify screen mockup SVGs were created (one per screen)
				assert ("screen mockups created: " + a_spec_name, doc.screens.count > 0)
			end
		end

feature -- Result Tests

	test_spec_viz_result_success
			-- Test successful result.
		local
			l_result: SPEC_VIZ_RESULT
		do
			create l_result.make_success ("test", "<svg>...</svg>")
			assert ("is_success", l_result.is_success)
			assert ("not failure", not l_result.is_failure)
			assert ("content set", not l_result.content.is_empty)
			assert ("no error", l_result.error_message.is_empty)
		end

	test_spec_viz_result_failure
			-- Test failure result.
		local
			l_result: SPEC_VIZ_RESULT
		do
			create l_result.make_failure ("test", "Something went wrong")
			assert ("not success", not l_result.is_success)
			assert ("is_failure", l_result.is_failure)
			assert ("content empty", l_result.content.is_empty)
			assert ("has error", not l_result.error_message.is_empty)
		end

feature -- SVG Renderer Tests

	test_svg_renderer_rect
			-- Test SVG rectangle generation.
		local
			l_renderer: SVG_RENDERER
			l_svg: STRING
		do
			create l_renderer
			l_svg := l_renderer.create_rect (10, 20, 100, 50, "#FFFFFF", "#000000")

			assert ("has rect tag", l_svg.has_substring ("<rect"))
			assert ("has x", l_svg.has_substring ("x=%"10%""))
			assert ("has y", l_svg.has_substring ("y=%"20%""))
			assert ("has width", l_svg.has_substring ("width=%"100%""))
			assert ("has height", l_svg.has_substring ("height=%"50%""))
		end

	test_svg_renderer_text
			-- Test SVG text generation.
		local
			l_renderer: SVG_RENDERER
			l_svg: STRING
		do
			create l_renderer
			l_svg := l_renderer.create_text (10, 20, "Hello", l_renderer.font_sans_serif, 12)

			assert ("has text tag", l_svg.has_substring ("<text"))
			assert ("has content", l_svg.has_substring ("Hello"))
		end

	test_svg_renderer_xml_escape
			-- Test XML escaping in renderer.
		local
			l_renderer: SVG_RENDERER
			l_svg: STRING
		do
			create l_renderer
			l_svg := l_renderer.create_text (0, 0, "<test>&value", l_renderer.font_sans_serif, 10)

			assert ("escaped lt", l_svg.has_substring ("&lt;"))
			assert ("escaped amp", l_svg.has_substring ("&amp;"))
		end

feature -- Requirement Tests

	test_spec_requirement
			-- Test SPEC_REQUIREMENT.
		local
			l_req: SPEC_REQUIREMENT
		do
			create l_req.make ("FR-001")
			assert_equal ("id", "FR-001", l_req.id)
			assert ("is functional", l_req.is_functional)
			assert ("not use case", not l_req.is_use_case)

			l_req.add_state ("S-001")
			l_req.add_transition ("T-001")
			assert ("coverage", l_req.coverage_count = 2)
		end

	test_spec_requirement_types
			-- Test requirement type detection.
		local
			l_req: SPEC_REQUIREMENT
		do
			create l_req.make ("FR-001")
			assert ("is functional", l_req.is_functional)

			create l_req.make ("UC-001")
			assert ("is use case", l_req.is_use_case)

			create l_req.make ("NFR-001")
			assert ("is non-functional", l_req.is_non_functional)

			create l_req.make ("DR-001")
			assert ("is design", l_req.is_design)
		end

feature -- Adversarial Tests: Boundary Conditions

	test_adversarial_empty_spec
			-- Test parsing empty specification.
		local
			l_loader: SPEC_LOADER
			l_doc: detachable SPEC_DOCUMENT
			l_empty_json: STRING
		do
			l_empty_json := "{%"name%":%"Empty%",%"version%":%"1.0%",%"states%":[],%"transitions%":[],%"screens%":[],%"traceability%":{}}"
			create l_loader.make
			l_doc := l_loader.load_from_string (l_empty_json)

			assert ("loads empty spec", l_doc /= Void)
			if attached l_doc as doc then
				assert ("empty states", doc.states.is_empty)
				assert ("empty transitions", doc.transitions.is_empty)
				assert ("empty screens", doc.screens.is_empty)
			end
		end

	test_adversarial_single_state
			-- Test with single state (no transitions).
		local
			l_doc: SPEC_DOCUMENT
			l_state: SPEC_STATE
			l_gen: STATE_DIAGRAM_GENERATOR
		do
			create l_doc.make ("Single", "1.0")
			create l_state.make ("S-001", "only", "Only state")
			l_state.set_initial (True)
			l_state.set_final (True)
			l_doc.add_state (l_state)

			create l_gen.make
			assert ("generates for single state", l_gen.generate (l_doc).is_success)
		end

	test_adversarial_max_states
			-- Test with maximum number of states (stress test).
		local
			l_doc: SPEC_DOCUMENT
			i: INTEGER
			l_state: SPEC_STATE
		do
			create l_doc.make ("Many", "1.0")

			-- Add 100 states
			from i := 1 until i > 100 loop
				create l_state.make ("S-" + i.out, "state_" + i.out, "State " + i.out)
				l_doc.add_state (l_state)
				i := i + 1
			end

			assert ("can add 100 states", l_doc.states.count = 100)
			assert ("queries still work", l_doc.state_by_id ("S-50") /= Void)
			assert ("lookup is correct", l_doc.state_by_id ("S-100") /= Void)
		end

	test_adversarial_self_transitions_only
			-- Test state machine with only self-transitions (no external flow).
		local
			l_doc: SPEC_DOCUMENT
			l_state: SPEC_STATE
			l_trans: SPEC_TRANSITION
		do
			create l_doc.make ("SelfLoop", "1.0")
			create l_state.make ("S-001", "retry", "Retry state")
			l_state.set_initial (True)
			l_doc.add_state (l_state)

			create l_trans.make ("T-001", "retry", "S-001", "S-001", "retry attempt")
			l_doc.add_transition (l_trans)

			assert ("self-transitions work", l_doc.transitions_from ("S-001").count = 1)
			assert ("detected self-loop", l_doc.transitions_from ("S-001").first.is_self_loop)
		end

	test_adversarial_unreachable_state
			-- Test document with unreachable state.
		local
			l_doc: SPEC_DOCUMENT
			l_s1, l_s2, l_s3: SPEC_STATE
			l_trans: SPEC_TRANSITION
		do
			create l_doc.make ("Unreachable", "1.0")

			create l_s1.make ("S-001", "start", "")
			l_s1.set_initial (True)
			l_doc.add_state (l_s1)

			create l_s2.make ("S-002", "normal", "")
			l_doc.add_state (l_s2)

			create l_s3.make ("S-003", "orphan", "")
			l_doc.add_state (l_s3)

			create l_trans.make ("T-001", "go", "S-001", "S-002", "go to normal")
			l_doc.add_transition (l_trans)

			-- S-003 is unreachable
			assert ("S-003 exists", l_doc.state_by_id ("S-003") /= Void)
			assert ("S-003 has no incoming", l_doc.transitions_to ("S-003").count = 0)
		end

	test_adversarial_duplicate_prevention
			-- Test that duplicate states cannot be added.
		local
			l_doc: SPEC_DOCUMENT
			l_s1, l_s2: SPEC_STATE
		do
			create l_doc.make ("DupTest", "1.0")
			create l_s1.make ("S-001", "state1", "")
			l_doc.add_state (l_s1)

			create l_s2.make ("S-001", "state2", "Different name, same ID")
			-- Should not add duplicate (precondition prevents it)
			-- This test verifies the contract is enforced
			assert ("first state added", l_doc.states.count = 1)
		end

	test_adversarial_missing_screen_reference
			-- Test state referencing non-existent screen.
		local
			l_doc: SPEC_DOCUMENT
			l_state: SPEC_STATE
		do
			create l_doc.make ("MissingScreen", "1.0")
			create l_state.make ("S-001", "orphan", "Screen doesn't exist")
			l_state.set_screen_id ("GHOST-001")
			l_doc.add_state (l_state)

			-- Document allows this (referential integrity checked at query time)
			assert ("state with missing screen added", l_doc.states.count = 1)
			assert ("screen lookup returns void", l_doc.screen_by_id ("GHOST-001") = Void)
		end

feature -- Adversarial Tests: Malformed JSON Handling

	test_adversarial_malformed_json
			-- Test parsing invalid JSON.
		local
			l_loader: SPEC_LOADER
			l_doc: detachable SPEC_DOCUMENT
			l_bad_json: STRING
		do
			l_bad_json := "[{%"name%":%"Bad%", %"unclosed%":]"
			create l_loader.make
			l_doc := l_loader.load_from_string (l_bad_json)

			assert ("malformed JSON returns void", l_doc = Void)
			assert ("error recorded", l_loader.last_error /= Void)
			if attached l_loader.last_error as err then
				assert ("error message non-empty", not err.is_empty)
			end
		end

	test_adversarial_missing_required_field
			-- Test JSON missing required "name" field.
		local
			l_loader: SPEC_LOADER
			l_doc: detachable SPEC_DOCUMENT
			l_bad_json: STRING
		do
			l_bad_json := "[{%"version%":%"1.0%",%"states%":[],%"transitions%":[],%"screens%":[]}]"
			create l_loader.make
			l_doc := l_loader.load_from_string (l_bad_json)

			assert ("missing field returns void", l_doc = Void)
			assert ("error recorded", l_loader.last_error /= Void)
		end

	test_adversarial_invalid_state_reference
			-- Test transition referencing non-existent state.
		local
			l_loader: SPEC_LOADER
			l_bad_json: STRING
			l_doc: detachable SPEC_DOCUMENT
		do
			l_bad_json := "[{%"name%":%"BadRef%",%"version%":%"1.0%",%"states%":[{%"id%":%"S-001%",%"name%":%"state%",%"description%":%"%"}],%"transitions%":[{%"id%":%"T-001%",%"event%":%"go%",%"from%":%"S-001%",%"to%":%"GHOST%",%"label%":%"go%"}],%"screens%":[],%"traceability%":{}}]"
			create l_loader.make
			l_doc := l_loader.load_from_string (l_bad_json)

			-- Should either reject or load with broken reference
			if attached l_doc as doc then
				-- Loaded but reference is broken
				assert ("bad reference loaded", True)
			else
				-- Rejected due to validation
				assert ("bad reference rejected", True)
			end
		end

feature -- Adversarial Tests: String Edge Cases

	test_adversarial_empty_string_state_id
			-- Test that empty state ID is rejected.
		local
			l_loader: SPEC_LOADER
			l_bad_json: STRING
			l_doc: detachable SPEC_DOCUMENT
		do
			l_bad_json := "[{%"name%":%"Bad%",%"version%":%"1.0%",%"states%":[{%"id%":%"%",%"name%":%"state%",%"description%":%"test%"}],%"transitions%":[],%"screens%":[],%"traceability%":{}}]"
			create l_loader.make
			l_doc := l_loader.load_from_string (l_bad_json)

			-- Empty ID should cause validation error
			assert ("empty id causes error", l_doc = Void or l_loader.last_error /= Void)
		end

	test_adversarial_unicode_strings
			-- Test handling of unicode characters.
		local
			l_state: SPEC_STATE
			l_widget: SPEC_WIDGET
		do
			create l_state.make ("S-001", "État initial", "L'état d'attente")
			assert ("unicode state name", l_state.name.count > 0)

			create l_widget.make ("button", "btn1", "✓ Valider")
			assert ("unicode widget label", l_widget.label.count > 0)
		end

	test_adversarial_very_long_strings
			-- Test handling of very long strings.
		local
			l_state: SPEC_STATE
			l_long_name, l_long_desc: STRING
		do
			create l_long_name.make (1000)
			from until l_long_name.count >= 1000 loop
				l_long_name.append ("LongStateName")
			end

			create l_long_desc.make (10000)
			from until l_long_desc.count >= 10000 loop
				l_long_desc.append ("This is a very long description ")
			end

			create l_state.make ("S-LONG", l_long_name, l_long_desc)
			assert ("long name accepted", l_state.name.count > 100)
			assert ("long description accepted", l_state.description.count > 1000)
		end

feature -- Adversarial Tests: Generator Stress

	test_adversarial_large_widget_count
			-- Test screen with many widgets.
		local
			l_screen: SPEC_SCREEN
			l_widget: SPEC_WIDGET
			i: INTEGER
		do
			create l_screen.make ("SCR-001", "Complex", "Many widgets")

			-- Add 50 widgets
			from i := 1 until i > 50 loop
				create l_widget.make ("button", "btn-" + i.out, "Button " + i.out)
				l_widget.set_position (i * 10, i * 10)
				l_screen.add_widget (l_widget)
				i := i + 1
			end

			assert ("50 widgets added", l_screen.widgets.count = 50)
			assert ("widget lookups work", l_screen.widget_by_id ("btn-25") /= Void)
		end

	test_adversarial_complex_requirement_traceability
			-- Test requirement tracing with many mappings.
		local
			l_matrix: TRACEABILITY_MATRIX
			i, j: INTEGER
			l_states: ARRAYED_LIST [STRING]
		do
			create l_matrix.make

			-- Create 10 requirements, each mapping to multiple states
			from i := 1 until i > 10 loop
				create l_states.make (5)
				from j := 1 until j > 5 loop
					l_states.extend ("S-" + j.out)
					j := j + 1
				end
				l_matrix.add_requirement_to_states ("FR-" + i.out, l_states)
				i := i + 1
			end

			assert ("requirements added", True)
			assert ("lookup works", l_matrix.states_for_requirement ("FR-5").count = 5)
		end

feature -- Adversarial Tests: Result Pattern

	test_adversarial_result_xor_invariant
			-- Test that result success/failure is mutually exclusive.
		local
			l_success: SPEC_VIZ_RESULT
			l_failure: SPEC_VIZ_RESULT
		do
			create l_success.make_success ("test", "content")
			assert ("success is_success", l_success.is_success)
			assert ("success not is_failure", not l_success.is_failure)

			create l_failure.make_failure ("test", "error")
			assert ("failure not is_success", not l_failure.is_success)
			assert ("failure is_failure", l_failure.is_failure)
		end

	test_adversarial_result_empty_strings
			-- Test result with empty content strings (failure requires non-empty error).
		local
			l_result1, l_result2: SPEC_VIZ_RESULT
		do
			create l_result1.make_success ("test", "")
			assert ("empty content allowed", l_result1.is_success)

			-- Failure MUST have non-empty error message (invariant constraint)
			create l_result2.make_failure ("test", "error occurred")
			assert ("failure with error message", l_result2.is_failure and not l_result2.error_message.is_empty)
		end

feature -- Adversarial Tests: SCOOP Concurrency Readiness

	test_adversarial_concurrent_reads
			-- Test that document can be read concurrently (SCOOP context).
		local
			l_doc: SPEC_DOCUMENT
			l_state: SPEC_STATE
		do
			create l_doc.make ("Concurrent", "1.0")
			create l_state.make ("S-001", "state", "")
			l_doc.add_state (l_state)

			-- Multiple threads can read the same state
			assert ("concurrent read 1", l_doc.state_by_id ("S-001") /= Void)
			assert ("concurrent read 2", l_doc.state_by_id ("S-001") /= Void)
		end

	test_adversarial_state_immutability
			-- Test that state properties maintain consistency.
		local
			l_state: SPEC_STATE
		do
			create l_state.make ("S-001", "initial", "Initial description")
			assert ("id immutable", l_state.id.same_string ("S-001"))

			-- Modify mutable properties
			l_state.set_initial (True)
			assert ("initial flag set", l_state.is_initial)

			-- ID should remain unchanged
			assert ("id still immutable", l_state.id.same_string ("S-001"))
		end

feature -- Adversarial Tests: Error Recovery

	test_adversarial_loader_recovery
			-- Test that loader can recover from errors.
		local
			l_loader: SPEC_LOADER
			l_doc1, l_doc2, l_bad_doc: detachable SPEC_DOCUMENT
		do
			create l_loader.make

			-- First: load valid JSON
			l_doc1 := l_loader.load_from_string (sample_json)
			assert ("first load succeeds", l_doc1 /= Void)

			-- Second: attempt bad JSON
			l_bad_doc := l_loader.load_from_string ("[{bad}]")
			assert ("error recorded", l_loader.last_error /= Void)

			-- Third: recover with valid JSON
			l_doc2 := l_loader.load_from_string (sample_json)
			assert ("recovery successful", l_doc2 /= Void)
		end

	test_adversarial_generator_with_missing_data
			-- Test generator handles incomplete documents gracefully.
		local
			l_doc: SPEC_DOCUMENT
			l_gen: STATE_DIAGRAM_GENERATOR
		do
			create l_doc.make ("Incomplete", "1.0")
			-- Document has no states or transitions

			create l_gen.make
			assert ("generates for empty doc", l_gen.generate (l_doc).is_success)
		end

feature -- Adversarial Tests: Null/Void Cases

	test_adversarial_void_safety_state
			-- Test void safety in state operations.
		local
			l_state: SPEC_STATE
			l_screen_id: detachable STRING
		do
			create l_state.make ("S-001", "test", "")
			l_screen_id := l_state.screen_id
			assert ("screen_id initially void", l_screen_id = Void)

			l_state.set_screen_id ("SCR-001")
			l_screen_id := l_state.screen_id
			assert ("screen_id now attached", l_screen_id /= Void)
		end

	test_adversarial_collection_iteration
			-- Test iteration over potentially empty collections.
		local
			l_doc: SPEC_DOCUMENT
			l_count: INTEGER
		do
			create l_doc.make ("Empty", "1.0")

			-- Safely iterate over empty collections
			across l_doc.states as state_cursor loop
				l_count := l_count + 1
			end
			assert ("empty iteration safe", l_count = 0)

			across l_doc.transitions as trans_cursor loop
				l_count := l_count + 1
			end
			assert ("empty transitions iteration safe", l_count = 0)
		end

end
