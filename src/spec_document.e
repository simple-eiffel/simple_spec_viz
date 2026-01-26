note
	description: "Specification document model - container for states, transitions, screens"
	author: "Larry Rix"
	date: "2026-01-24"

class
	SPEC_DOCUMENT

create
	make

feature {NONE} -- Initialization

	make (a_name, a_version: STRING)
			-- Initialize document with name and version.
		require
			name_not_void: a_name /= Void
			name_not_empty: not a_name.is_empty
			version_not_void: a_version /= Void
		do
			name := a_name
			version := a_version
			create states.make (10)
			create transitions.make (20)
			create screens.make (10)
			create traceability.make
		ensure
			name_set: name = a_name
			version_set: version = a_version
			states_empty: states.is_empty
			transitions_empty: transitions.is_empty
			screens_empty: screens.is_empty
		end

feature -- Access

	name: STRING
			-- Document name.

	version: STRING
			-- Document version.

	states: ARRAYED_LIST [SPEC_STATE]
			-- All states in the specification.

	transitions: ARRAYED_LIST [SPEC_TRANSITION]
			-- All transitions in the specification.

	screens: ARRAYED_LIST [SPEC_SCREEN]
			-- All screens in the specification.

	traceability: TRACEABILITY_MATRIX
			-- Traceability information.

feature -- Queries

	state_by_id (a_id: STRING): detachable SPEC_STATE
			-- Find state by ID.
		require
			id_not_void: a_id /= Void
		do
			across states as ic until Result /= Void loop
				if ic.id.same_string (a_id) then
					Result := ic
				end
			end
		ensure
			found_has_id: attached Result as r implies r.id.same_string (a_id)
		end

	screen_by_id (a_id: STRING): detachable SPEC_SCREEN
			-- Find screen by ID.
		require
			id_not_void: a_id /= Void
		do
			across screens as ic until Result /= Void loop
				if ic.id.same_string (a_id) then
					Result := ic
				end
			end
		ensure
			found_has_id: attached Result as r implies r.id.same_string (a_id)
		end

	initial_state: detachable SPEC_STATE
			-- The initial state, if any.
		do
			across states as ic until Result /= Void loop
				if ic.is_initial then
					Result := ic
				end
			end
		ensure
			is_initial: attached Result as r implies r.is_initial
		end

	final_states: ARRAYED_LIST [SPEC_STATE]
			-- All final states.
		do
			create Result.make (states.count)
			across states as ic loop
				if ic.is_final then
					Result.extend (ic)
				end
			end
		ensure
			result_not_void: Result /= Void
			all_final: across Result as ic all ic.is_final end
		end

	transitions_from (a_state_id: STRING): ARRAYED_LIST [SPEC_TRANSITION]
			-- All transitions originating from state.
		require
			state_id_not_void: a_state_id /= Void
		do
			create Result.make (transitions.count)
			across transitions as ic loop
				if ic.from_state_id.same_string (a_state_id) then
					Result.extend (ic)
				end
			end
		ensure
			result_not_void: Result /= Void
		end

	transitions_to (a_state_id: STRING): ARRAYED_LIST [SPEC_TRANSITION]
			-- All transitions targeting state.
		require
			state_id_not_void: a_state_id /= Void
		do
			create Result.make (transitions.count)
			across transitions as ic loop
				if ic.to_state_id.same_string (a_state_id) then
					Result.extend (ic)
				end
			end
		ensure
			result_not_void: Result /= Void
		end

feature -- Model Queries

	states_model: MML_SET [STRING]
			-- Set of all state IDs.
		do
			create Result.default_create
			across states as ic loop
				Result := Result & ic.id
			end
		end

	screens_model: MML_SET [STRING]
			-- Set of all screen IDs.
		do
			create Result.default_create
			across screens as ic loop
				Result := Result & ic.id
			end
		end

feature -- Element Change

	add_state (a_state: SPEC_STATE)
			-- Add state to document.
		require
			state_not_void: a_state /= Void
			not_duplicate: state_by_id (a_state.id) = Void
		do
			states.extend (a_state)
		ensure
			state_added: states.has (a_state)
			count_increased: states.count = old states.count + 1
		end

	add_transition (a_transition: SPEC_TRANSITION)
			-- Add transition to document.
		require
			transition_not_void: a_transition /= Void
		do
			transitions.extend (a_transition)
		ensure
			transition_added: transitions.has (a_transition)
			count_increased: transitions.count = old transitions.count + 1
		end

	add_screen (a_screen: SPEC_SCREEN)
			-- Add screen to document.
		require
			screen_not_void: a_screen /= Void
			not_duplicate: screen_by_id (a_screen.id) = Void
		do
			screens.extend (a_screen)
		ensure
			screen_added: screens.has (a_screen)
			count_increased: screens.count = old screens.count + 1
		end

invariant
	name_not_void: name /= Void
	name_not_empty: not name.is_empty
	version_not_void: version /= Void
	states_not_void: states /= Void
	transitions_not_void: transitions /= Void
	screens_not_void: screens /= Void
	traceability_not_void: traceability /= Void

end
