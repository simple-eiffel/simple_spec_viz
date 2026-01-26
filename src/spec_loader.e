note
	description: "JSON specification loader - parses spec documents from JSON"
	author: "Larry Rix"
	date: "2026-01-24"

class
	SPEC_LOADER

create
	make

feature {NONE} -- Initialization

	make
			-- Initialize loader.
		do
			create json_parser
		ensure
			json_parser_created: json_parser /= Void
		end

feature -- Access

	json_parser: SIMPLE_JSON
			-- JSON parser.

	last_error: detachable STRING
			-- Last error message, if any.

feature -- Loading

	load_from_file (a_path: STRING): detachable SPEC_DOCUMENT
			-- Load specification from JSON file.
		require
			path_not_void: a_path /= Void
			path_not_empty: not a_path.is_empty
		local
			l_value: detachable SIMPLE_JSON_VALUE
		do
			last_error := Void
			l_value := json_parser.parse_file (a_path)
			if attached l_value then
				Result := parse_document (l_value)
			else
				if json_parser.has_errors then
					last_error := "Failed to parse JSON file: " + a_path + " - " + json_parser.errors_as_string.to_string_8
				else
					last_error := "Failed to parse JSON file or file not found: " + a_path
				end
			end
		ensure
			error_on_failure: Result = Void implies last_error /= Void
		end

	load_from_string (a_json: STRING): detachable SPEC_DOCUMENT
			-- Load specification from JSON string.
		require
			json_not_void: a_json /= Void
			json_not_empty: not a_json.is_empty
		local
			l_value: detachable SIMPLE_JSON_VALUE
			l_json_32: STRING_32
		do
			last_error := Void
			create l_json_32.make_from_string (a_json)
			l_value := json_parser.parse (l_json_32)
			if attached l_value then
				Result := parse_document (l_value)
			else
				if json_parser.has_errors then
					last_error := "Failed to parse JSON - " + json_parser.errors_as_string.to_string_8
				else
					last_error := "Failed to parse JSON"
				end
			end
		ensure
			error_on_failure: Result = Void implies last_error /= Void
		end

feature {NONE} -- Parsing

	parse_document (a_value: SIMPLE_JSON_VALUE): detachable SPEC_DOCUMENT
			-- Parse specification document from JSON value.
		require
			value_not_void: a_value /= Void
		local
			l_obj: SIMPLE_JSON_OBJECT
			l_name, l_version: STRING
		do
			if a_value.is_object then
				l_obj := a_value.as_object

				-- Get required fields
				if attached l_obj.string_item ("name") as l_n then
					l_name := l_n.to_string_8
				else
					l_name := "Unnamed"
				end

				if attached l_obj.string_item ("version") as l_v then
					l_version := l_v.to_string_8
				else
					l_version := "0.1.0"
				end

				create Result.make (l_name, l_version)

				-- Parse states
				if attached l_obj.array_item ("states") as l_states then
					parse_states (l_states, Result)
				end

				-- Parse transitions
				if attached l_obj.array_item ("transitions") as l_transitions then
					parse_transitions (l_transitions, Result)
				end

				-- Parse screens
				if attached l_obj.array_item ("screens") as l_screens then
					parse_screens (l_screens, Result)
				end

				-- Parse traceability
				if attached l_obj.object_item ("traceability") as l_trace then
					parse_traceability (l_trace, Result)
				end
			else
				last_error := "Root JSON value must be an object"
			end
		end

	parse_states (a_array: SIMPLE_JSON_ARRAY; a_doc: SPEC_DOCUMENT)
			-- Parse states from JSON array into document.
		require
			array_not_void: a_array /= Void
			doc_not_void: a_doc /= Void
		local
			i: INTEGER
			l_item: SIMPLE_JSON_VALUE
			l_obj: SIMPLE_JSON_OBJECT
			l_state: SPEC_STATE
			l_id, l_name, l_desc: STRING
			l_is_initial, l_is_final: BOOLEAN
			l_screen_id: detachable STRING
		do
			from i := 1 until i > a_array.count loop
				l_item := a_array.item (i)
				if l_item.is_object then
					l_obj := l_item.as_object

					-- Required fields
					if attached l_obj.string_item ("id") as l_i then
						l_id := l_i.to_string_8
					else
						l_id := "S-" + i.out
					end

					if attached l_obj.string_item ("name") as l_n then
						l_name := l_n.to_string_8
					else
						l_name := "state_" + i.out
					end

					if attached l_obj.string_item ("description") as l_d then
						l_desc := l_d.to_string_8
					else
						l_desc := ""
					end

					-- Optional fields
					l_is_initial := l_obj.boolean_item ("is_initial")
					l_is_final := l_obj.boolean_item ("is_final")

					if attached l_obj.string_item ("screen") as l_s then
						l_screen_id := l_s.to_string_8
					else
						l_screen_id := Void
					end

					create l_state.make (l_id, l_name, l_desc)
					l_state.set_initial (l_is_initial)
					l_state.set_final (l_is_final)
					if attached l_screen_id as ls then
						l_state.set_screen_id (ls)
					end

					-- Parse entry/exit actions
					if attached l_obj.array_item ("entry_actions") as l_entry then
						parse_string_list (l_entry, l_state.entry_actions)
					end
					if attached l_obj.array_item ("exit_actions") as l_exit then
						parse_string_list (l_exit, l_state.exit_actions)
					end

					a_doc.add_state (l_state)
				end
				i := i + 1
			end
		end

	parse_transitions (a_array: SIMPLE_JSON_ARRAY; a_doc: SPEC_DOCUMENT)
			-- Parse transitions from JSON array into document.
		require
			array_not_void: a_array /= Void
			doc_not_void: a_doc /= Void
		local
			i: INTEGER
			l_item: SIMPLE_JSON_VALUE
			l_obj: SIMPLE_JSON_OBJECT
			l_trans: SPEC_TRANSITION
			l_id, l_event, l_from, l_to, l_label: STRING
		do
			from i := 1 until i > a_array.count loop
				l_item := a_array.item (i)
				if l_item.is_object then
					l_obj := l_item.as_object

					-- Required fields
					if attached l_obj.string_item ("id") as l_i then
						l_id := l_i.to_string_8
					else
						l_id := "T-" + i.out
					end

					if attached l_obj.string_item ("event") as l_e then
						l_event := l_e.to_string_8
					else
						l_event := "event_" + i.out
					end

					if attached l_obj.string_item ("from") as l_f then
						l_from := l_f.to_string_8
					else
						l_from := ""
					end

					if attached l_obj.string_item ("to") as l_t then
						l_to := l_t.to_string_8
					else
						l_to := ""
					end

					if attached l_obj.string_item ("label") as l_l then
						l_label := l_l.to_string_8
					else
						l_label := l_event
					end

					create l_trans.make (l_id, l_event, l_from, l_to, l_label)

					-- Parse requirements
					if attached l_obj.array_item ("requirements") as l_reqs then
						parse_string_list (l_reqs, l_trans.requirements)
					end

					a_doc.add_transition (l_trans)
				end
				i := i + 1
			end
		end

	parse_screens (a_array: SIMPLE_JSON_ARRAY; a_doc: SPEC_DOCUMENT)
			-- Parse screens from JSON array into document.
		require
			array_not_void: a_array /= Void
			doc_not_void: a_doc /= Void
		local
			i: INTEGER
			l_item: SIMPLE_JSON_VALUE
			l_obj: SIMPLE_JSON_OBJECT
			l_screen: SPEC_SCREEN
			l_id, l_name, l_desc: STRING
		do
			from i := 1 until i > a_array.count loop
				l_item := a_array.item (i)
				if l_item.is_object then
					l_obj := l_item.as_object

					-- Required fields
					if attached l_obj.string_item ("id") as l_i then
						l_id := l_i.to_string_8
					else
						l_id := "SCR-" + i.out
					end

					if attached l_obj.string_item ("name") as l_n then
						l_name := l_n.to_string_8
					else
						l_name := "Screen " + i.out
					end

					if attached l_obj.string_item ("description") as l_d then
						l_desc := l_d.to_string_8
					else
						l_desc := ""
					end

					create l_screen.make (l_id, l_name, l_desc)

					-- Parse widgets
					if attached l_obj.array_item ("widgets") as l_widgets then
						parse_widgets (l_widgets, l_screen)
					end

					-- Parse requirements
					if attached l_obj.array_item ("requirements") as l_reqs then
						parse_string_list (l_reqs, l_screen.requirements)
					end

					a_doc.add_screen (l_screen)
				end
				i := i + 1
			end
		end

	parse_widgets (a_array: SIMPLE_JSON_ARRAY; a_screen: SPEC_SCREEN)
			-- Parse widgets from JSON array into screen.
		require
			array_not_void: a_array /= Void
			screen_not_void: a_screen /= Void
		local
			i: INTEGER
			l_item: SIMPLE_JSON_VALUE
			l_obj: SIMPLE_JSON_OBJECT
			l_widget: SPEC_WIDGET
			l_type, l_id, l_label: STRING
			l_x, l_y, l_width, l_height: INTEGER
		do
			from i := 1 until i > a_array.count loop
				l_item := a_array.item (i)
				if l_item.is_object then
					l_obj := l_item.as_object

					if attached l_obj.string_item ("type") as l_t then
						l_type := l_t.to_string_8
					else
						l_type := "text"
					end

					if attached l_obj.string_item ("id") as l_i then
						l_id := l_i.to_string_8
					else
						l_id := "widget_" + i.out
					end

					if attached l_obj.string_item ("label") as l_l then
						l_label := l_l.to_string_8
					elseif attached l_obj.string_item ("placeholder") as l_p then
						l_label := l_p.to_string_8
					else
						l_label := ""
					end

					l_x := l_obj.integer_item ("x").to_integer_32
					l_y := l_obj.integer_item ("y").to_integer_32
					l_width := l_obj.integer_item ("width").to_integer_32
					l_height := l_obj.integer_item ("height").to_integer_32

					create l_widget.make (l_type, l_id, l_label)
					l_widget.set_position (l_x, l_y)
					l_widget.set_size (l_width, l_height)

					a_screen.add_widget (l_widget)
				end
				i := i + 1
			end
		end

	parse_traceability (a_obj: SIMPLE_JSON_OBJECT; a_doc: SPEC_DOCUMENT)
			-- Parse traceability section into document.
		require
			obj_not_void: a_obj /= Void
			doc_not_void: a_doc /= Void
		local
			l_keys: ARRAY [STRING_32]
			l_key_8: STRING
		do
			-- Parse requirements_to_states
			if attached a_obj.object_item ("requirements_to_states") as l_req_states then
				l_keys := l_req_states.keys
				across l_keys as ic loop
					l_key_8 := ic.to_string_8
					if attached l_req_states.array_item (ic) as l_arr then
						a_doc.traceability.add_requirement_to_states (l_key_8, array_to_string_list (l_arr))
					end
				end
			end

			-- Parse states_to_screens
			if attached a_obj.object_item ("states_to_screens") as l_state_screens then
				l_keys := l_state_screens.keys
				across l_keys as ic loop
					l_key_8 := ic.to_string_8
					if attached l_state_screens.string_item (ic) as l_scr then
						a_doc.traceability.add_state_to_screen (l_key_8, l_scr.to_string_8)
					end
				end
			end
		end

	parse_string_list (a_array: SIMPLE_JSON_ARRAY; a_list: ARRAYED_LIST [STRING])
			-- Parse array of strings into list.
		require
			array_not_void: a_array /= Void
			list_not_void: a_list /= Void
		local
			i: INTEGER
			l_item: SIMPLE_JSON_VALUE
		do
			from i := 1 until i > a_array.count loop
				l_item := a_array.item (i)
				if l_item.is_string then
					a_list.extend (l_item.as_string_32.to_string_8)
				end
				i := i + 1
			end
		end

	array_to_string_list (a_array: SIMPLE_JSON_ARRAY): ARRAYED_LIST [STRING]
			-- Convert JSON array to string list.
		require
			array_not_void: a_array /= Void
		do
			create Result.make (a_array.count)
			parse_string_list (a_array, Result)
		ensure
			result_not_void: Result /= Void
		end

invariant
	json_parser_not_void: json_parser /= Void

end
