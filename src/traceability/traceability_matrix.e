note
	description: "Cross-reference matrix for requirements, states, and screens"
	author: "Larry Rix"
	date: "2026-01-24"

class
	TRACEABILITY_MATRIX

create
	make

feature {NONE} -- Initialization

	make
			-- Initialize empty matrix.
		do
			create requirements_to_states.make (20)
			create states_to_screens.make (20)
		ensure
			requirements_empty: requirements_to_states.is_empty
			states_empty: states_to_screens.is_empty
		end

feature -- Access

	requirements_to_states: HASH_TABLE [ARRAYED_LIST [STRING], STRING]
			-- Maps requirement IDs to lists of state/transition IDs.

	states_to_screens: HASH_TABLE [STRING, STRING]
			-- Maps state IDs to screen IDs.

feature -- Queries

	states_for_requirement (a_req_id: STRING): ARRAYED_LIST [STRING]
			-- Get states/transitions for requirement.
		require
			req_id_not_void: a_req_id /= Void
		do
			if attached requirements_to_states.item (a_req_id) as l_list then
				Result := l_list
			else
				create Result.make (0)
			end
		ensure
			result_not_void: Result /= Void
		end

	screen_for_state (a_state_id: STRING): detachable STRING
			-- Get screen for state.
		require
			state_id_not_void: a_state_id /= Void
		do
			Result := states_to_screens.item (a_state_id)
		end

	all_requirement_ids: ARRAYED_LIST [STRING]
			-- Get all requirement IDs.
		do
			create Result.make (requirements_to_states.count)
			across requirements_to_states.current_keys as k loop
				Result.extend (k)
			end
		ensure
			result_not_void: Result /= Void
			count_matches: Result.count = requirements_to_states.count
		end

	all_state_ids: ARRAYED_LIST [STRING]
			-- Get all state IDs with screen mappings.
		do
			create Result.make (states_to_screens.count)
			across states_to_screens.current_keys as k loop
				Result.extend (k)
			end
		ensure
			result_not_void: Result /= Void
			count_matches: Result.count = states_to_screens.count
		end

	requirements_for_state (a_state_id: STRING): ARRAYED_LIST [STRING]
			-- Get all requirements that reference this state.
		require
			state_id_not_void: a_state_id /= Void
		local
			l_found: BOOLEAN
		do
			create Result.make (5)
			across requirements_to_states.current_keys as k loop
				if attached requirements_to_states.item (k) as l_states then
					l_found := False
					across l_states as state loop
						if not l_found and state.same_string (a_state_id) then
							Result.extend (k)
							l_found := True
						end
					end
				end
			end
		ensure
			result_not_void: Result /= Void
		end

feature -- Model Queries

	requirement_ids_model: MML_SET [STRING]
			-- Set of all requirement IDs.
		do
			create Result.default_create
			across requirements_to_states.current_keys as k loop
				Result := Result & k
			end
		end

	state_ids_model: MML_SET [STRING]
			-- Set of all state IDs (with screen mappings).
		do
			create Result.default_create
			across states_to_screens.current_keys as k loop
				Result := Result & k
			end
		end

feature -- Modification

	add_requirement_to_states (a_req_id: STRING; a_state_ids: ARRAYED_LIST [STRING])
			-- Add requirement to states mapping.
		require
			req_id_not_void: a_req_id /= Void
			state_ids_not_void: a_state_ids /= Void
		do
			requirements_to_states.force (a_state_ids, a_req_id)
		ensure
			mapping_added: requirements_to_states.has (a_req_id)
		end

	add_state_to_screen (a_state_id, a_screen_id: STRING)
			-- Add state to screen mapping.
		require
			state_id_not_void: a_state_id /= Void
			screen_id_not_void: a_screen_id /= Void
		do
			states_to_screens.force (a_screen_id, a_state_id)
		ensure
			mapping_added: states_to_screens.has (a_state_id)
		end

	add_requirement_state (a_req_id, a_state_id: STRING)
			-- Add single state to requirement.
		require
			req_id_not_void: a_req_id /= Void
			state_id_not_void: a_state_id /= Void
		local
			l_list: ARRAYED_LIST [STRING]
		do
			if attached requirements_to_states.item (a_req_id) as l_existing then
				if not l_existing.has (a_state_id) then
					l_existing.extend (a_state_id)
				end
			else
				create l_list.make (5)
				l_list.extend (a_state_id)
				requirements_to_states.force (l_list, a_req_id)
			end
		ensure
			requirement_exists: requirements_to_states.has (a_req_id)
			state_in_list: attached requirements_to_states.item (a_req_id) as l implies l.has (a_state_id)
		end

invariant
	requirements_to_states_not_void: requirements_to_states /= Void
	states_to_screens_not_void: states_to_screens /= Void

end
