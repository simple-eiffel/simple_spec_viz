note
	description: "Requirement reference in a specification"
	author: "Larry Rix"
	date: "2026-01-24"

class
	SPEC_REQUIREMENT

create
	make

feature {NONE} -- Initialization

	make (a_id: STRING)
			-- Initialize requirement reference.
		require
			id_not_void: a_id /= Void
			id_not_empty: not a_id.is_empty
		do
			id := a_id
			create states.make (5)
			create transitions.make (5)
			create screens.make (3)
		ensure
			id_set: id = a_id
			states_empty: states.is_empty
			transitions_empty: transitions.is_empty
			screens_empty: screens.is_empty
		end

feature -- Access

	id: STRING
			-- Requirement identifier (e.g., "FR-001", "UC-001").

	states: ARRAYED_LIST [STRING]
			-- Associated state IDs.

	transitions: ARRAYED_LIST [STRING]
			-- Associated transition IDs.

	screens: ARRAYED_LIST [STRING]
			-- Associated screen IDs.

feature -- Status

	is_functional: BOOLEAN
			-- Is this a functional requirement?
		do
			Result := id.starts_with ("FR-")
		end

	is_use_case: BOOLEAN
			-- Is this a use case?
		do
			Result := id.starts_with ("UC-")
		end

	is_non_functional: BOOLEAN
			-- Is this a non-functional requirement?
		do
			Result := id.starts_with ("NFR-")
		end

	is_design: BOOLEAN
			-- Is this a design requirement?
		do
			Result := id.starts_with ("DR-") or id.starts_with ("D-")
		end

	coverage_count: INTEGER
			-- Total number of associations.
		do
			Result := states.count + transitions.count + screens.count
		ensure
			definition: Result = states.count + transitions.count + screens.count
		end

feature -- Model Queries

	states_model: MML_SET [STRING]
			-- Set of state IDs.
		do
			create Result.default_create
			across states as ic loop
				Result := Result & ic
			end
		end

	transitions_model: MML_SET [STRING]
			-- Set of transition IDs.
		do
			create Result.default_create
			across transitions as ic loop
				Result := Result & ic
			end
		end

feature -- Modification

	add_state (a_state_id: STRING)
			-- Add associated state.
		require
			state_id_not_void: a_state_id /= Void
		do
			if not states.has (a_state_id) then
				states.extend (a_state_id)
			end
		ensure
			state_added: states.has (a_state_id)
		end

	add_transition (a_trans_id: STRING)
			-- Add associated transition.
		require
			trans_id_not_void: a_trans_id /= Void
		do
			if not transitions.has (a_trans_id) then
				transitions.extend (a_trans_id)
			end
		ensure
			transition_added: transitions.has (a_trans_id)
		end

	add_screen (a_screen_id: STRING)
			-- Add associated screen.
		require
			screen_id_not_void: a_screen_id /= Void
		do
			if not screens.has (a_screen_id) then
				screens.extend (a_screen_id)
			end
		ensure
			screen_added: screens.has (a_screen_id)
		end

invariant
	id_not_void: id /= Void
	id_not_empty: not id.is_empty
	states_not_void: states /= Void
	transitions_not_void: transitions /= Void
	screens_not_void: screens /= Void

end
