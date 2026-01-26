note
	description: "Transition definition in a specification"
	author: "Larry Rix"
	date: "2026-01-24"

class
	SPEC_TRANSITION

create
	make

feature {NONE} -- Initialization

	make (a_id, a_event, a_from, a_to, a_label: STRING)
			-- Initialize transition.
		require
			id_not_void: a_id /= Void
			id_not_empty: not a_id.is_empty
			event_not_void: a_event /= Void
			from_not_void: a_from /= Void
			to_not_void: a_to /= Void
			label_not_void: a_label /= Void
		do
			id := a_id
			event := a_event
			from_state_id := a_from
			to_state_id := a_to
			label := a_label
			create requirements.make (5)
		ensure
			id_set: id = a_id
			event_set: event = a_event
			from_set: from_state_id = a_from
			to_set: to_state_id = a_to
			label_set: label = a_label
		end

feature -- Access

	id: STRING
			-- Unique identifier (e.g., "T-001").

	event: STRING
			-- Event that triggers this transition.

	from_state_id: STRING
			-- Source state ID.

	to_state_id: STRING
			-- Target state ID.

	label: STRING
			-- Label for the transition (displayed on diagram).

	requirements: ARRAYED_LIST [STRING]
			-- Associated requirement IDs.

feature -- Status

	is_self_loop: BOOLEAN
			-- Does this transition return to the same state?
		do
			Result := from_state_id.same_string (to_state_id)
		ensure
			definition: Result = from_state_id.same_string (to_state_id)
		end

feature -- Modification

	add_requirement (a_req_id: STRING)
			-- Add associated requirement.
		require
			req_id_not_void: a_req_id /= Void
		do
			requirements.extend (a_req_id)
		ensure
			requirement_added: requirements.count > 0 and requirements [requirements.count].same_string (a_req_id)
		end

invariant
	id_not_void: id /= Void
	id_not_empty: not id.is_empty
	event_not_void: event /= Void
	from_state_id_not_void: from_state_id /= Void
	to_state_id_not_void: to_state_id /= Void
	label_not_void: label /= Void
	requirements_not_void: requirements /= Void

end
