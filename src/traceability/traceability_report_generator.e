note
	description: "Generates traceability reports in Markdown format"
	author: "Larry Rix"
	date: "2026-01-24"

class
	TRACEABILITY_REPORT_GENERATOR

create
	make

feature {NONE} -- Initialization

	make
			-- Initialize generator.
		do
			-- Nothing to initialize
		end

feature -- Generation

	generate (a_doc: SPEC_DOCUMENT): SPEC_VIZ_RESULT
			-- Generate traceability report as Markdown.
		require
			doc_not_void: a_doc /= Void
		local
			l_content: STRING
		do
			l_content := build_report (a_doc)
			create Result.make_success ("traceability", l_content)
		ensure
			result_not_void: Result /= Void
			is_success: Result.is_success
		end

feature {NONE} -- Implementation

	build_report (a_doc: SPEC_DOCUMENT): STRING
			-- Build complete Markdown report.
		require
			doc_not_void: a_doc /= Void
		do
			create Result.make (2000)

			-- Header
			Result.append_string ("# Traceability Matrix%N%N")
			Result.append_string ("**Document:** " + a_doc.name + "%N")
			Result.append_string ("**Version:** " + a_doc.version + "%N%N")

			-- States to Screens section
			Result.append_string (build_states_to_screens_section (a_doc))

			-- Requirements to States section
			Result.append_string (build_requirements_to_states_section (a_doc))

			-- Coverage summary
			Result.append_string (build_coverage_summary (a_doc))
		ensure
			result_not_void: Result /= Void
		end

	build_states_to_screens_section (a_doc: SPEC_DOCUMENT): STRING
			-- Build States -> Screens section.
		require
			doc_not_void: a_doc /= Void
		local
			l_screen_id: detachable STRING
			l_screen_name: STRING
			l_reqs: ARRAYED_LIST [STRING]
		do
			create Result.make (500)
			Result.append_string ("## States -> Screens%N%N")
			Result.append_string ("| State | Screen | Requirements |%N")
			Result.append_string ("|-------|--------|--------------|%N")

			across a_doc.states as state loop
				Result.append_string ("| ")
				Result.append_string (state.id)
				Result.append_string (" (")
				Result.append_string (state.name)
				Result.append_string (") | ")

				-- Get screen
				l_screen_id := a_doc.traceability.screen_for_state (state.id)
				if l_screen_id = Void and state.has_screen then
					l_screen_id := state.screen_id
				end
				if attached l_screen_id as sid then
					if attached a_doc.screen_by_id (sid) as scr then
						l_screen_name := sid + " (" + scr.name + ")"
					else
						l_screen_name := sid
					end
					Result.append_string (l_screen_name)
				else
					Result.append_string ("-")
				end
				Result.append_string (" | ")

				-- Get requirements
				l_reqs := a_doc.traceability.requirements_for_state (state.id)
				if l_reqs.is_empty then
					Result.append_string ("-")
				else
					Result.append_string (join_strings (l_reqs, ", "))
				end
				Result.append_string (" |%N")
			end

			Result.append_string ("%N")
		ensure
			result_not_void: Result /= Void
		end

	build_requirements_to_states_section (a_doc: SPEC_DOCUMENT): STRING
			-- Build Requirements -> States section.
		require
			doc_not_void: a_doc /= Void
		local
			l_req_ids: ARRAYED_LIST [STRING]
			l_state_ids: ARRAYED_LIST [STRING]
			l_states_str, l_transitions_str: STRING
		do
			create Result.make (500)
			Result.append_string ("## Requirements -> States%N%N")
			Result.append_string ("| Requirement | States Covered | Transitions |%N")
			Result.append_string ("|-------------|----------------|-------------|%N")

			l_req_ids := a_doc.traceability.all_requirement_ids
			across l_req_ids as req_id loop
				Result.append_string ("| ")
				Result.append_string (req_id)
				Result.append_string (" | ")

				l_state_ids := a_doc.traceability.states_for_requirement (req_id)

				-- Separate states and transitions
				l_states_str := filter_ids (l_state_ids, "S-")
				l_transitions_str := filter_ids (l_state_ids, "T-")

				if l_states_str.is_empty then
					Result.append_string ("-")
				else
					Result.append_string (l_states_str)
				end
				Result.append_string (" | ")

				if l_transitions_str.is_empty then
					Result.append_string ("-")
				else
					Result.append_string (l_transitions_str)
				end
				Result.append_string (" |%N")
			end

			Result.append_string ("%N")
		ensure
			result_not_void: Result /= Void
		end

	build_coverage_summary (a_doc: SPEC_DOCUMENT): STRING
			-- Build coverage summary section.
		require
			doc_not_void: a_doc /= Void
		local
			l_total_states, l_covered_states: INTEGER
			l_total_screens, l_mapped_screens: INTEGER
			l_coverage_pct: INTEGER
		do
			create Result.make (300)
			Result.append_string ("## Coverage Summary%N%N")

			-- State coverage
			l_total_states := a_doc.states.count
			l_covered_states := count_covered_states (a_doc)
			if l_total_states > 0 then
				l_coverage_pct := (l_covered_states * 100) // l_total_states
			end
			Result.append_string ("- **States:** " + l_covered_states.out + "/" + l_total_states.out)
			Result.append_string (" (" + l_coverage_pct.out + "%% covered by requirements)%N")

			-- Screen mappings
			l_total_screens := a_doc.screens.count
			l_mapped_screens := a_doc.traceability.states_to_screens.count
			Result.append_string ("- **Screen Mappings:** " + l_mapped_screens.out + " states mapped to screens%N")
			Result.append_string ("- **Total Screens:** " + l_total_screens.out + "%N")
			Result.append_string ("- **Total Transitions:** " + a_doc.transitions.count.out + "%N")
			Result.append_string ("- **Requirements Tracked:** " + a_doc.traceability.all_requirement_ids.count.out + "%N")
		ensure
			result_not_void: Result /= Void
		end

	count_covered_states (a_doc: SPEC_DOCUMENT): INTEGER
			-- Count states covered by at least one requirement.
		require
			doc_not_void: a_doc /= Void
		local
			l_reqs: ARRAYED_LIST [STRING]
		do
			across a_doc.states as state loop
				l_reqs := a_doc.traceability.requirements_for_state (state.id)
				if not l_reqs.is_empty then
					Result := Result + 1
				end
			end
		end

	filter_ids (a_list: ARRAYED_LIST [STRING]; a_prefix: STRING): STRING
			-- Filter and join IDs with given prefix.
		require
			list_not_void: a_list /= Void
			prefix_not_void: a_prefix /= Void
		local
			l_first: BOOLEAN
		do
			create Result.make (50)
			l_first := True
			across a_list as id loop
				if id.starts_with (a_prefix) then
					if not l_first then
						Result.append_string (", ")
					end
					Result.append_string (id)
					l_first := False
				end
			end
		ensure
			result_not_void: Result /= Void
		end

	join_strings (a_list: ARRAYED_LIST [STRING]; a_separator: STRING): STRING
			-- Join strings with separator.
		require
			list_not_void: a_list /= Void
			separator_not_void: a_separator /= Void
		local
			l_first: BOOLEAN
		do
			create Result.make (50)
			l_first := True
			across a_list as s loop
				if not l_first then
					Result.append_string (a_separator)
				end
				Result.append_string (s)
				l_first := False
			end
		ensure
			result_not_void: Result /= Void
		end

end
