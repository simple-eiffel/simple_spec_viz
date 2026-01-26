note
	description: "State definition in a specification"
	author: "Larry Rix"
	date: "2026-01-24"

class
	SPEC_STATE

create
	make

feature {NONE} -- Initialization

	make (a_id, a_name, a_description: STRING)
			-- Initialize state.
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
			is_initial := False
			is_final := False
			create entry_actions.make (5)
			create exit_actions.make (5)
		ensure
			id_set: id = a_id
			name_set: name = a_name
			description_set: description = a_description
			not_initial: not is_initial
			not_final: not is_final
		end

feature -- Access

	id: STRING
			-- Unique identifier (e.g., "S-001").

	name: STRING
			-- State name (e.g., "idle").

	description: STRING
			-- Description of the state.

	screen_id: detachable STRING
			-- Associated screen ID, if any.

	entry_actions: ARRAYED_LIST [STRING]
			-- Actions performed when entering state.

	exit_actions: ARRAYED_LIST [STRING]
			-- Actions performed when exiting state.

feature -- Status

	is_initial: BOOLEAN
			-- Is this the initial state?

	is_final: BOOLEAN
			-- Is this a final (accepting) state?

	has_screen: BOOLEAN
			-- Does this state have an associated screen?
		do
			Result := screen_id /= Void
		ensure
			definition: Result = (screen_id /= Void)
		end

feature -- Modification

	set_initial (a_value: BOOLEAN)
			-- Set whether this is the initial state.
		do
			is_initial := a_value
		ensure
			is_initial_set: is_initial = a_value
		end

	set_final (a_value: BOOLEAN)
			-- Set whether this is a final state.
		do
			is_final := a_value
		ensure
			is_final_set: is_final = a_value
		end

	set_screen_id (a_screen_id: STRING)
			-- Set associated screen ID.
		require
			screen_id_not_void: a_screen_id /= Void
		do
			screen_id := a_screen_id
		ensure
			screen_id_set: screen_id = a_screen_id
			has_screen: has_screen
		end

	add_entry_action (a_action: STRING)
			-- Add entry action.
		require
			action_not_void: a_action /= Void
		do
			entry_actions.extend (a_action)
		ensure
			action_added: entry_actions.count > 0 and entry_actions [entry_actions.count].same_string (a_action)
		end

	add_exit_action (a_action: STRING)
			-- Add exit action.
		require
			action_not_void: a_action /= Void
		do
			exit_actions.extend (a_action)
		ensure
			action_added: exit_actions.count > 0 and exit_actions [exit_actions.count].same_string (a_action)
		end

invariant
	id_not_void: id /= Void
	id_not_empty: not id.is_empty
	name_not_void: name /= Void
	name_not_empty: not name.is_empty
	description_not_void: description /= Void
	entry_actions_not_void: entry_actions /= Void
	exit_actions_not_void: exit_actions /= Void

end
