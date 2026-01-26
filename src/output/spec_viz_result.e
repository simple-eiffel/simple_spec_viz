note
	description: "Result object from specification visualization generation"
	author: "Larry Rix"
	date: "2026-01-24"

class
	SPEC_VIZ_RESULT

inherit
	ANY
		redefine
			out
		end

create
	make_success, make_failure

feature {NONE} -- Initialization

	make_success (a_name, a_content: STRING)
			-- Create successful result.
		require
			name_not_void: a_name /= Void
			content_not_void: a_content /= Void
		do
			name := a_name
			content := a_content
			is_success := True
		ensure
			name_set: name = a_name
			content_set: content = a_content
			is_success: is_success
			no_error: error_message.is_empty
		end

	make_failure (a_name, a_error: STRING)
			-- Create failure result.
		require
			name_not_void: a_name /= Void
			error_not_void: a_error /= Void
		do
			name := a_name
			error_message := a_error
			content := ""
			is_success := False
		ensure
			name_set: name = a_name
			error_set: error_message = a_error
			empty_content: content.is_empty
			not_success: not is_success
		end

feature -- Access

	name: STRING
			-- Name/identifier for this result (e.g., screen ID, "state_machine").

	content: STRING
			-- Generated content (SVG, Markdown, etc.).

	error_message: STRING
			-- Error message if not successful.
		attribute
			create Result.make_empty
		end

feature -- Status

	is_success: BOOLEAN
			-- Was generation successful?

	is_failure: BOOLEAN
			-- Did generation fail?
		do
			Result := not is_success
		ensure
			definition: Result = not is_success
		end

feature -- Queries

	content_length: INTEGER
			-- Length of generated content.
		do
			Result := content.count
		ensure
			definition: Result = content.count
		end

	is_svg: BOOLEAN
			-- Does content appear to be SVG?
		do
			Result := content.has_substring ("<svg") or content.has_substring ("<?xml")
		end

	is_markdown: BOOLEAN
			-- Does content appear to be Markdown?
		do
			Result := content.has_substring ("# ") or content.has_substring ("## ")
		end

feature -- Conversion

	out: STRING
			-- String representation.
		do
			if is_success then
				Result := "SPEC_VIZ_RESULT[" + name + ": success, " + content_length.out + " bytes]"
			else
				Result := "SPEC_VIZ_RESULT[" + name + ": FAILED - " + error_message + "]"
			end
		end

invariant
	name_not_void: name /= Void
	content_not_void: content /= Void
	error_message_not_void: error_message /= Void
	success_has_content_or_empty: is_success implies error_message.is_empty
	failure_has_error: not is_success implies not error_message.is_empty

end
