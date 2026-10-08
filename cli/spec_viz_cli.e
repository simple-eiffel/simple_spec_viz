note
	description: "Command-line interface for simple_spec_viz"
	author: "Larry Rix"
	date: "2026-01-24"

class
	SPEC_VIZ_CLI

inherit
	ARGUMENTS_32

create
	make

feature {NONE} -- Initialization

	make
			-- Run CLI application.
		do
			create viz.make
			parse_arguments
			if is_valid then
				execute
			else
				print_usage
			end
		end

feature -- Access

	viz: SIMPLE_SPEC_VIZ
			-- Visualization facade.

	input_file: detachable STRING
			-- Input JSON specification file.

	output_dir: detachable STRING
			-- Output directory.

	is_valid: BOOLEAN
			-- Are arguments valid?

feature -- Command Type

	command: detachable STRING
			-- Current command (visualize, docs, etc).

	subcommand: detachable STRING
			-- Subcommand arguments.

feature {NONE} -- Argument Parsing

	parse_arguments
			-- Parse command line arguments.
		do
			is_valid := False

			if argument_count >= 1 then
				command := argument (1).to_string_8

				if attached command as cmd then
					if cmd.same_string ("docs") then
						parse_docs_command
					elseif cmd.same_string ("visualize") or not cmd.starts_with ("-") then
						parse_visualize_command
					elseif cmd.same_string ("--help") or cmd.same_string ("-h") then
						print_usage
						quit (0)
					end
				end
			end
		end

	parse_docs_command
			-- Parse docs subcommand.
		do
			if argument_count >= 2 then
				subcommand := argument (2).to_string_8

				if attached subcommand as sub then
					if sub.same_string ("widget") then
						if argument_count >= 3 then
							input_file := argument (3).to_string_8
							is_valid := True
						end
					elseif sub.same_string ("state-machine") or sub.same_string ("pattern") or sub.same_string ("example") then
						is_valid := True
						if argument_count >= 3 then
							input_file := argument (3).to_string_8
						end
					end
				end
			end
		end

	parse_visualize_command
			-- Parse visualize command.
		local
			i: INTEGER
		do
			is_valid := False
			command := "visualize"

			if argument (1).same_string ("visualize") then
				i := 2
			else
				i := 1
				input_file := argument (1).to_string_8
			end

			from until i > argument_count loop
				if argument (i).same_string ("--help") or argument (i).same_string ("-h") then
					print_usage
					quit (0)
				elseif argument (i).same_string ("--output") or argument (i).same_string ("-o") then
					if i < argument_count then
						i := i + 1
						output_dir := argument (i).to_string_8
					end
				elseif input_file = Void then
					input_file := argument (i).to_string_8
				end
				i := i + 1
			end

			if input_file /= Void then
				is_valid := True
				if output_dir = Void then
					output_dir := "."
				end
			end
		end

feature {NONE} -- Execution

	execute
			-- Execute command.
		do
			if attached command as cmd then
				if cmd.same_string ("docs") then
					execute_docs
				else
					execute_visualize
				end
			end
		end

	execute_docs
			-- Execute docs command.
		do
			if attached subcommand as sub then
				if sub.same_string ("widget") then
					if attached input_file as widget_name then
						show_widget_doc (widget_name)
					else
						io.put_string ("ERROR: Widget name required%N")
						io.put_string ("Usage: simple_spec_viz docs widget <widget_name>%N")
						quit (1)
					end
				elseif sub.same_string ("state-machine") then
					show_guide_doc ("STATE_MACHINE_GUIDE.md")
				elseif sub.same_string ("pattern") then
					if attached input_file as pattern_name then
						show_pattern_doc (pattern_name)
					else
						io.put_string ("ERROR: Pattern name required%N")
						io.put_string ("Usage: simple_spec_viz docs pattern <pattern_name>%N")
						quit (1)
					end
				elseif sub.same_string ("example") then
					if attached input_file as example_name then
						show_example_doc (example_name)
					else
						io.put_string ("ERROR: Example name required%N")
						io.put_string ("Usage: simple_spec_viz docs example <example_name>%N")
						quit (1)
					end
				end
			end
		end

	execute_visualize
			-- Execute visualization generation.
		local
			l_doc: detachable SPEC_DOCUMENT
		do
			if attached input_file as f then
				io.put_string ("Loading specification: " + f + "%N")
				l_doc := viz.load_from_file (f)

				if attached l_doc as doc then
					io.put_string ("  Name: " + doc.name + "%N")
					io.put_string ("  Version: " + doc.version + "%N")
					io.put_string ("  States: " + doc.states.count.out + "%N")
					io.put_string ("  Transitions: " + doc.transitions.count.out + "%N")
					io.put_string ("  Screens: " + doc.screens.count.out + "%N")

					generate_outputs (doc)
				else
					if attached viz.last_error as err then
						io.put_string ("ERROR: " + err.out + "%N")
					else
						io.put_string ("ERROR: Unknown error loading specification%N")
					end
					quit (1)
				end
			end
		end

	generate_outputs (a_doc: SPEC_DOCUMENT)
			-- Generate all outputs for document.
		require
			doc_not_void: a_doc /= Void
		local
			l_result: SPEC_VIZ_RESULT
			l_results: ARRAYED_LIST [SPEC_VIZ_RESULT]
		do
			if attached output_dir as dir then
				io.put_string ("%NGenerating outputs to: " + dir + "%N")

				-- State diagram
				io.put_string ("  State diagram... ")
				l_result := viz.generate_state_diagram (a_doc)
				if l_result.is_success then
					if save_file (l_result.content, dir + "/state_machine.svg") then
						io.put_string ("OK%N")
					else
						io.put_string ("WRITE FAILED%N")
					end
				else
					io.put_string ("FAILED: " + l_result.error_message + "%N")
				end

				-- Screen mockups
				io.put_string ("  Screen mockups... ")
				l_results := viz.generate_screen_mockups (a_doc)
				across l_results as r loop
					if r.is_success then
						save_file (r.content, dir + "/" + r.name + ".svg").do_nothing
					end
				end
				io.put_string (l_results.count.out + " screens%N")

				-- Traceability report
				io.put_string ("  Traceability report... ")
				l_result := viz.generate_traceability_report (a_doc)
				if l_result.is_success then
					if save_file (l_result.content, dir + "/traceability.md") then
						io.put_string ("OK%N")
					else
						io.put_string ("WRITE FAILED%N")
					end
				else
					io.put_string ("FAILED: " + l_result.error_message + "%N")
				end

				io.put_string ("%NDone.%N")
			end
		end

	save_file (a_content, a_path: STRING): BOOLEAN
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
			end
		end

feature {NONE} -- Documentation Display

	show_widget_doc (a_widget: STRING)
			-- Show documentation for widget.
		local
			l_content: STRING
		do
			l_content := read_file_section ("WIDGET_CATALOG.md", "### " + a_widget)
			if l_content.count > 0 then
				io.put_string (l_content)
				io.put_string ("%N")
			else
				io.put_string ("Widget '" + a_widget + "' not found in WIDGET_CATALOG.md%N")
			end
		end

	show_guide_doc (a_guide: STRING)
			-- Show full guide documentation.
		local
			l_content: STRING
		do
			l_content := read_markdown_file (a_guide)
			if l_content.count > 0 then
				io.put_string (l_content)
			else
				io.put_string ("Guide '" + a_guide + "' not found%N")
			end
		end

	show_pattern_doc (a_pattern: STRING)
			-- Show pattern documentation.
		local
			l_content: STRING
		do
			l_content := read_file_section ("STATE_MACHINE_GUIDE.md", "### Pattern " + a_pattern)
			if l_content.count > 0 then
				io.put_string (l_content)
				io.put_string ("%N")
			else
				io.put_string ("Pattern '" + a_pattern + "' not found in STATE_MACHINE_GUIDE.md%N")
			end
		end

	show_example_doc (a_example: STRING)
			-- Show example documentation.
		local
			l_content: STRING
		do
			l_content := read_markdown_file ("examples/" + a_example + "/README.md")
			if l_content.count > 0 then
				io.put_string (l_content)
			else
				io.put_string ("Example '" + a_example + "' not found%N")
			end
		end

	read_markdown_file (a_path: STRING): STRING
			-- Read markdown file from reference docs.
		local
			l_file: PLAIN_TEXT_FILE
			l_full_path: STRING
		do
			create Result.make_empty
			l_full_path := gui_reference_path + "/" + a_path
			create l_file.make_open_read (l_full_path)
			if l_file.is_open_read then
				from until l_file.end_of_file loop
					l_file.read_line
					Result.append (l_file.last_string)
					Result.append ("%N")
				end
				l_file.close
			end
		end

	read_file_section (a_file: STRING; a_section_header: STRING): STRING
			-- Read section from markdown file.
		local
			l_file: PLAIN_TEXT_FILE
			l_full_path: STRING
			l_line: STRING
			in_section: BOOLEAN
		do
			create Result.make_empty
			l_full_path := gui_reference_path + "/" + a_file
			create l_file.make_open_read (l_full_path)
			if l_file.is_open_read then
				from until l_file.end_of_file loop
					l_file.read_line
					l_line := l_file.last_string

					if l_line.starts_with (a_section_header) then
						in_section := True
					elseif in_section and l_line.starts_with ("##") and not l_line.starts_with (a_section_header) then
						in_section := False
					elseif in_section then
						Result.append (l_line)
						Result.append ("%N")
					end
				end
				l_file.close
			end
		end

	gui_reference_path: STRING
			-- Path to GUI reference documentation.
		do
			Result := "D:/prod/reference_docs/gui"
		end

feature {NONE} -- Output

	print_usage
			-- Print usage information.
		do
			io.put_string ("simple_spec_viz - GUI Specification Visualization Tool%N")
			io.put_string ("%NUsage:%N")
			io.put_string ("  spec_viz_cli visualize <spec.json> [options]%N")
			io.put_string ("  spec_viz_cli docs <subcommand> [args]%N")
			io.put_string ("%NVisualize Options:%N")
			io.put_string ("  -o, --output <dir>  Output directory (default: current)%N")
			io.put_string ("%NVisualize Outputs:%N")
			io.put_string ("  state_machine.svg   State machine diagram%N")
			io.put_string ("  <screen_id>.svg     Screen mockups (one per screen)%N")
			io.put_string ("  traceability.md     Traceability matrix report%N")
			io.put_string ("%NDocs Subcommands:%N")
			io.put_string ("  widget <name>         Show widget documentation%N")
			io.put_string ("  state-machine         Show state machine guide%N")
			io.put_string ("  pattern <name>        Show pattern documentation%N")
			io.put_string ("  example <name>        Show example documentation%N")
			io.put_string ("%NExamples:%N")
			io.put_string ("  spec_viz_cli visualize auth_flow.json -o ./output%N")
			io.put_string ("  spec_viz_cli docs widget Button%N")
			io.put_string ("  spec_viz_cli docs state-machine%N")
			io.put_string ("  spec_viz_cli docs pattern crud%N")
			io.put_string ("  spec_viz_cli docs example auth_flow%N")
			io.put_string ("%N-h, --help          Show this help%N")
		end

	quit (a_code: INTEGER)
			-- Exit with code.
		do
			(create {EXCEPTIONS}).die (a_code)
		end

end
