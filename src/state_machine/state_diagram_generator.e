note
	description: "Generates state machine diagrams using simple_graphviz"
	author: "Larry Rix"
	date: "2026-01-24"

class
	STATE_DIAGRAM_GENERATOR

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

	generate (a_doc: SPEC_DOCUMENT): SPEC_VIZ_RESULT
			-- Generate state machine diagram from document.
		require
			doc_not_void: a_doc /= Void
		local
			l_builder: STATE_MACHINE_BUILDER
			l_render_result: GRAPHVIZ_RESULT
		do
			l_builder := graphviz.state_machine
			l_builder := l_builder.set_title (a_doc.name + " State Machine")

			-- Add states
			across a_doc.states as state loop
				if state.is_initial then
					l_builder := l_builder.initial (state.name)
				elseif state.is_final then
					l_builder := l_builder.final (state.name)
				else
					if not l_builder.has_state (state.name) then
						l_builder := l_builder.state (state.name)
					end
				end
			end

			-- Add transitions
			across a_doc.transitions as trans loop
				l_builder := l_builder.transition (
					state_name_for_id (a_doc, trans.from_state_id),
					state_name_for_id (a_doc, trans.to_state_id),
					trans.label
				)
			end

			-- Render to SVG
			l_render_result := l_builder.to_svg
			if l_render_result.is_success and then attached l_render_result.content as l_content then
				create Result.make_success ("state_machine", l_content)
			elseif attached l_render_result.error as l_error then
				create Result.make_failure ("state_machine", "Failed to render state diagram: " + l_error.message)
			else
				create Result.make_failure ("state_machine", "Unknown rendering error")
			end
		ensure
			result_not_void: Result /= Void
		end

	generate_to_file (a_doc: SPEC_DOCUMENT; a_path: STRING): SPEC_VIZ_RESULT
			-- Generate state machine diagram and save to file.
		require
			doc_not_void: a_doc /= Void
			path_not_void: a_path /= Void
			path_not_empty: not a_path.is_empty
		local
			l_builder: STATE_MACHINE_BUILDER
			l_render_result: GRAPHVIZ_RESULT
		do
			l_builder := graphviz.state_machine
			l_builder := l_builder.set_title (a_doc.name + " State Machine")

			-- Add states
			across a_doc.states as state loop
				if state.is_initial then
					l_builder := l_builder.initial (state.name)
				elseif state.is_final then
					l_builder := l_builder.final (state.name)
				else
					if not l_builder.has_state (state.name) then
						l_builder := l_builder.state (state.name)
					end
				end
			end

			-- Add transitions
			across a_doc.transitions as trans loop
				l_builder := l_builder.transition (
					state_name_for_id (a_doc, trans.from_state_id),
					state_name_for_id (a_doc, trans.to_state_id),
					trans.label
				)
			end

			-- Render to file
			l_render_result := l_builder.to_svg_file (a_path)
			if l_render_result.is_success then
				create Result.make_success ("state_machine", "Saved to: " + a_path)
			elseif attached l_render_result.error as l_error then
				create Result.make_failure ("state_machine", "Failed to save state diagram: " + l_error.message)
			else
				create Result.make_failure ("state_machine", "Unknown save error")
			end
		ensure
			result_not_void: Result /= Void
		end

	generate_dot (a_doc: SPEC_DOCUMENT): STRING
			-- Generate DOT source for state machine.
		require
			doc_not_void: a_doc /= Void
		local
			l_builder: STATE_MACHINE_BUILDER
		do
			l_builder := graphviz.state_machine
			l_builder := l_builder.set_title (a_doc.name + " State Machine")

			-- Add states
			across a_doc.states as state loop
				if state.is_initial then
					l_builder := l_builder.initial (state.name)
				elseif state.is_final then
					l_builder := l_builder.final (state.name)
				else
					if not l_builder.has_state (state.name) then
						l_builder := l_builder.state (state.name)
					end
				end
			end

			-- Add transitions
			across a_doc.transitions as trans loop
				l_builder := l_builder.transition (
					state_name_for_id (a_doc, trans.from_state_id),
					state_name_for_id (a_doc, trans.to_state_id),
					trans.label
				)
			end

			Result := l_builder.to_dot
		ensure
			result_not_void: Result /= Void
		end

feature {NONE} -- Implementation

	state_name_for_id (a_doc: SPEC_DOCUMENT; a_state_id: STRING): STRING
			-- Get state name for given ID.
		require
			doc_not_void: a_doc /= Void
			state_id_not_void: a_state_id /= Void
		do
			if attached a_doc.state_by_id (a_state_id) as l_state then
				Result := l_state.name
			else
				Result := a_state_id
			end
		ensure
			result_not_void: Result /= Void
		end

invariant
	graphviz_not_void: graphviz /= Void

end
