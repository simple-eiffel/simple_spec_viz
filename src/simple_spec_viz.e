note
	description: "Facade for simple_spec_viz - GUI specification visualization"
	author: "Larry Rix"
	date: "2026-01-24"

class
	SIMPLE_SPEC_VIZ

create
	make

feature {NONE} -- Initialization

	make
			-- Initialize specification visualizer.
		do
			create loader.make
			create state_diagram_gen.make
			create screen_mockup_gen.make
			create traceability_gen.make
		ensure
			loader_created: loader /= Void
			state_diagram_gen_created: state_diagram_gen /= Void
			screen_mockup_gen_created: screen_mockup_gen /= Void
			traceability_gen_created: traceability_gen /= Void
		end

feature -- Access

	loader: SPEC_LOADER
			-- JSON specification loader.

	state_diagram_gen: STATE_DIAGRAM_GENERATOR
			-- State machine diagram generator.

	screen_mockup_gen: SCREEN_MOCKUP_GENERATOR
			-- Screen mockup generator.

	traceability_gen: TRACEABILITY_REPORT_GENERATOR
			-- Traceability report generator.

	last_error: detachable STRING
			-- Last error message, if any.

feature -- Loading

	load_from_file (a_path: STRING): detachable SPEC_DOCUMENT
			-- Load specification from JSON file.
			-- Returns Void on error, sets `last_error`.
		require
			path_not_void: a_path /= Void
			path_not_empty: not a_path.is_empty
		do
			last_error := Void
			Result := loader.load_from_file (a_path)
			if Result = Void then
				last_error := loader.last_error
			end
		ensure
			error_on_failure: Result = Void implies last_error /= Void
		end

	load_from_json (a_json: STRING): detachable SPEC_DOCUMENT
			-- Load specification from JSON string.
			-- Returns Void on error, sets `last_error`.
		require
			json_not_void: a_json /= Void
			json_not_empty: not a_json.is_empty
		do
			last_error := Void
			Result := loader.load_from_string (a_json)
			if Result = Void then
				last_error := loader.last_error
			end
		ensure
			error_on_failure: Result = Void implies last_error /= Void
		end

feature -- Generation

	generate_state_diagram (a_doc: SPEC_DOCUMENT): SPEC_VIZ_RESULT
			-- Generate state machine diagram as SVG.
		require
			doc_not_void: a_doc /= Void
		do
			Result := state_diagram_gen.generate (a_doc)
		ensure
			result_not_void: Result /= Void
		end

	generate_screen_mockups (a_doc: SPEC_DOCUMENT): ARRAYED_LIST [SPEC_VIZ_RESULT]
			-- Generate screen mockups as SVG (one per screen).
		require
			doc_not_void: a_doc /= Void
		do
			Result := screen_mockup_gen.generate_all (a_doc)
		ensure
			result_not_void: Result /= Void
			count_matches: Result.count = a_doc.screens.count
		end

	generate_traceability_report (a_doc: SPEC_DOCUMENT): SPEC_VIZ_RESULT
			-- Generate traceability report as Markdown.
		require
			doc_not_void: a_doc /= Void
		do
			Result := traceability_gen.generate (a_doc)
		ensure
			result_not_void: Result /= Void
		end

feature -- Batch Generation

	generate_all (a_doc: SPEC_DOCUMENT; a_output_dir: STRING): BOOLEAN
			-- Generate all outputs to directory.
			-- Returns True on success.
		require
			doc_not_void: a_doc /= Void
			output_dir_not_void: a_output_dir /= Void
			output_dir_not_empty: not a_output_dir.is_empty
		local
			l_state_result: SPEC_VIZ_RESULT
			l_screen_results: ARRAYED_LIST [SPEC_VIZ_RESULT]
			l_trace_result: SPEC_VIZ_RESULT
		do
			last_error := Void
			Result := True

			-- Generate state diagram
			l_state_result := generate_state_diagram (a_doc)
			if l_state_result.is_success then
				if not save_to_file (l_state_result.content, a_output_dir + "/state_machine.svg") then
					Result := False
				end
			else
				last_error := l_state_result.error_message
				Result := False
			end

			-- Generate screen mockups
			if Result then
				l_screen_results := generate_screen_mockups (a_doc)
				across l_screen_results as ic loop
					if ic.is_success then
						if not save_to_file (ic.content, a_output_dir + "/" + ic.name + ".svg") then
							Result := False
						end
					else
						last_error := ic.error_message
						Result := False
					end
				end
			end

			-- Generate traceability report
			if Result then
				l_trace_result := generate_traceability_report (a_doc)
				if l_trace_result.is_success then
					if not save_to_file (l_trace_result.content, a_output_dir + "/traceability.md") then
						Result := False
					end
				else
					last_error := l_trace_result.error_message
					Result := False
				end
			end
		ensure
			error_on_failure: not Result implies last_error /= Void
		end

feature {NONE} -- Implementation

	save_to_file (a_content: STRING; a_path: STRING): BOOLEAN
			-- Save content to file.
		require
			content_not_void: a_content /= Void
			path_not_void: a_path /= Void
		local
			l_file: PLAIN_TEXT_FILE
		do
			create l_file.make_open_write (a_path)
			if l_file.is_open_write then
				l_file.put_string (a_content)
				l_file.close
				Result := True
			else
				last_error := "Cannot write to file: " + a_path
			end
		end

invariant
	loader_not_void: loader /= Void
	state_diagram_gen_not_void: state_diagram_gen /= Void
	screen_mockup_gen_not_void: screen_mockup_gen /= Void
	traceability_gen_not_void: traceability_gen /= Void

end
