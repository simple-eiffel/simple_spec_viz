note
	description: "Screen definition in a specification"
	author: "Larry Rix"
	date: "2026-01-24"

class
	SPEC_SCREEN

create
	make

feature {NONE} -- Initialization

	make (a_id, a_name, a_description: STRING)
			-- Initialize screen.
		require
			id_not_void: a_id /= Void
			id_not_empty: not a_id.is_empty
			name_not_void: a_name /= Void
			name_not_empty: not a_name.is_empty
			description_not_void: a_description /= Void
		do
			id := a_id
			name := a_name
			description := a_description
			create widgets.make (10)
			create requirements.make (5)
		ensure
			id_set: id = a_id
			name_set: name = a_name
			description_set: description = a_description
			widgets_empty: widgets.is_empty
			requirements_empty: requirements.is_empty
		end

feature -- Access

	id: STRING
			-- Unique identifier (e.g., "SCR-001").

	name: STRING
			-- Screen name (e.g., "Main Prompt").

	description: STRING
			-- Description of the screen.

	widgets: ARRAYED_LIST [SPEC_WIDGET]
			-- Widgets on this screen.

	requirements: ARRAYED_LIST [STRING]
			-- Associated requirement IDs.

feature -- Queries

	widget_by_id (a_id: STRING): detachable SPEC_WIDGET
			-- Find widget by ID.
		require
			id_not_void: a_id /= Void
		do
			across widgets as ic until Result /= Void loop
				if ic.id.same_string (a_id) then
					Result := ic
				end
			end
		ensure
			found_has_id: attached Result as r implies r.id.same_string (a_id)
		end

	widgets_of_type (a_type: STRING): ARRAYED_LIST [SPEC_WIDGET]
			-- Get all widgets of given type.
		require
			type_not_void: a_type /= Void
		do
			create Result.make (widgets.count)
			across widgets as ic loop
				if ic.widget_type.same_string (a_type) then
					Result.extend (ic)
				end
			end
		ensure
			result_not_void: Result /= Void
			all_correct_type: across Result as ic all ic.widget_type.same_string (a_type) end
		end

feature -- Model Queries

	widgets_model: MML_SET [STRING]
			-- Set of all widget IDs.
		do
			create Result.default_create
			across widgets as ic loop
				Result := Result & ic.id
			end
		end

feature -- Modification

	add_widget (a_widget: SPEC_WIDGET)
			-- Add widget to screen.
		require
			widget_not_void: a_widget /= Void
			not_duplicate: widget_by_id (a_widget.id) = Void
		do
			widgets.extend (a_widget)
		ensure
			widget_added: widgets.has (a_widget)
			count_increased: widgets.count = old widgets.count + 1
		end

	add_requirement (a_req_id: STRING)
			-- Add associated requirement.
		require
			req_id_not_void: a_req_id /= Void
		do
			requirements.extend (a_req_id)
		ensure
			requirement_added: requirements.has (a_req_id)
		end

invariant
	id_not_void: id /= Void
	id_not_empty: not id.is_empty
	name_not_void: name /= Void
	name_not_empty: not name.is_empty
	description_not_void: description /= Void
	widgets_not_void: widgets /= Void
	requirements_not_void: requirements /= Void

end
