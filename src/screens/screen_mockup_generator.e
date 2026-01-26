note
	description: "Generates screen mockups using simple_graphviz DOT records"
	author: "Larry Rix"
	date: "2026-01-24"

class
	SCREEN_MOCKUP_GENERATOR

create
	make

feature {NONE} -- Initialization

	make
			-- Initialize generator.
		do
			create graphviz.make
		ensure
			graphviz_created: graphviz /= Void
		end

feature -- Access

	graphviz: SIMPLE_GRAPHVIZ
			-- GraphViz facade.

feature -- Generation

	generate (a_screen: SPEC_SCREEN): SPEC_VIZ_RESULT
			-- Generate mockup for a single screen.
		require
			screen_not_void: a_screen /= Void
		local
			l_graph: DOT_GRAPH
			l_window: DOT_NODE
			l_render_result: GRAPHVIZ_RESULT
		do
			l_graph := graphviz.graph
			l_graph.attributes.put ("rankdir", "TB")

			-- Create window frame node using record shape
			l_window := l_graph.new_node (a_screen.id)
			l_window.attributes.put ("shape", "record")
			l_window.attributes.put ("style", "rounded")
			l_window.attributes.put ("label", build_record_label (a_screen))

			-- Render to SVG
			l_render_result := graphviz.render_svg (l_graph.to_dot)
			if l_render_result.is_success and then attached l_render_result.content as l_content then
				create Result.make_success (a_screen.id, l_content)
			elseif attached l_render_result.error as l_error then
				create Result.make_failure (a_screen.id, "Failed to render screen mockup: " + l_error.message)
			else
				create Result.make_failure (a_screen.id, "Unknown rendering error")
			end
		ensure
			result_not_void: Result /= Void
		end

	generate_all (a_doc: SPEC_DOCUMENT): ARRAYED_LIST [SPEC_VIZ_RESULT]
			-- Generate mockups for all screens in document.
		require
			doc_not_void: a_doc /= Void
		do
			create Result.make (a_doc.screens.count)
			across a_doc.screens as screen loop
				Result.extend (generate (screen))
			end
		ensure
			result_not_void: Result /= Void
			count_matches: Result.count = a_doc.screens.count
		end

	generate_dot (a_screen: SPEC_SCREEN): STRING
			-- Generate DOT source for screen mockup.
		require
			screen_not_void: a_screen /= Void
		local
			l_graph: DOT_GRAPH
			l_window: DOT_NODE
		do
			l_graph := graphviz.graph
			l_graph.attributes.put ("rankdir", "TB")

			-- Create window frame node using record shape
			l_window := l_graph.new_node (a_screen.id)
			l_window.attributes.put ("shape", "record")
			l_window.attributes.put ("style", "rounded")
			l_window.attributes.put ("label", build_record_label (a_screen))

			Result := l_graph.to_dot
		ensure
			result_not_void: Result /= Void
		end

feature {NONE} -- Implementation

	build_record_label (a_screen: SPEC_SCREEN): STRING
			-- Build GraphViz record label for window mockup.
			-- Format: "{title|{widget1}|{widget2}|...}"
		require
			screen_not_void: a_screen /= Void
		local
			l_grouped: HASH_TABLE [ARRAYED_LIST [SPEC_WIDGET], INTEGER]
			l_rows: ARRAYED_LIST [INTEGER]
			l_first: BOOLEAN
		do
			create Result.make (200)
			Result.append_character ('{')

			-- Title row
			Result.append_string (escape_label (a_screen.name))

			if not a_screen.widgets.is_empty then
				-- Group widgets by Y coordinate (row)
				l_grouped := group_widgets_by_row (a_screen.widgets)
				l_rows := sorted_row_keys (l_grouped)

				-- Add each row
				across l_rows as row_y loop
					Result.append_character ('|')
					if attached l_grouped.item (row_y) as widgets then
						l_first := True
						across widgets as w loop
							if not l_first then
								Result.append_string (" ")
							end
							Result.append_string (escape_label (w.display_text))
							l_first := False
						end
					end
				end
			end

			Result.append_character ('}')
		ensure
			result_not_void: Result /= Void
			starts_with_brace: Result.starts_with ("{")
			ends_with_brace: Result.ends_with ("}")
		end

	group_widgets_by_row (a_widgets: ARRAYED_LIST [SPEC_WIDGET]): HASH_TABLE [ARRAYED_LIST [SPEC_WIDGET], INTEGER]
			-- Group widgets by their Y coordinate (within tolerance).
		require
			widgets_not_void: a_widgets /= Void
		local
			l_row_key: INTEGER
		do
			create Result.make (10)
			across a_widgets as w loop
				-- Round Y to nearest 20 pixels for row grouping
				l_row_key := (w.y // 20) * 20
				if not Result.has (l_row_key) then
					Result.put (create {ARRAYED_LIST [SPEC_WIDGET]}.make (5), l_row_key)
				end
				if attached Result.item (l_row_key) as l_list then
					l_list.extend (w)
				end
			end
		ensure
			result_not_void: Result /= Void
		end

	sorted_row_keys (a_table: HASH_TABLE [ARRAYED_LIST [SPEC_WIDGET], INTEGER]): ARRAYED_LIST [INTEGER]
			-- Get row keys sorted by value.
		require
			table_not_void: a_table /= Void
		local
			i, j, n: INTEGER
			l_temp: INTEGER
		do
			create Result.make (a_table.count)
			across a_table.current_keys as k loop
				Result.extend (k)
			end
			-- Simple bubble sort
			n := Result.count
			from i := 1 until i >= n loop
				from j := 1 until j > n - i loop
					if Result [j] > Result [j + 1] then
						l_temp := Result [j]
						Result [j] := Result [j + 1]
						Result [j + 1] := l_temp
					end
					j := j + 1
				end
				i := i + 1
			end
		ensure
			result_not_void: Result /= Void
			count_matches: Result.count = a_table.count
		end

	escape_label (a_text: STRING): STRING
			-- Escape special characters for GraphViz record labels.
		require
			text_not_void: a_text /= Void
		do
			create Result.make (a_text.count + 10)
			across a_text as c loop
				inspect c
				when '|', '{', '}', '\', '"' then
					Result.append_character ('\')
					Result.append_character (c)
				when '<' then
					Result.append_string ("&lt;")
				when '>' then
					Result.append_string ("&gt;")
				else
					Result.append_character (c)
				end
			end
		ensure
			result_not_void: Result /= Void
		end

invariant
	graphviz_not_void: graphviz /= Void

end
