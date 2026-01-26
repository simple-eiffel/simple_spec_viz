note
	description: "Debug utility to capture DOT source for screen mockups"
	author: "Larry Rix"
	date: "2026-01-25"

class
	DEBUG_DOT_CAPTURE

feature -- Generation

	capture_screen_dot (a_screen_json: STRING): STRING
			-- Generate and return DOT source for a screen spec.
		require
			json_not_void: a_screen_json /= Void
		local
			l_doc: SPEC_DOCUMENT
			l_loader: SPEC_LOADER
			l_generator: SCREEN_MOCKUP_GENERATOR
			l_screen: SPEC_SCREEN
		do
			-- Parse the JSON
			create l_loader.make
			l_doc := l_loader.parse_json (a_screen_json)

			if l_doc /= Void and then l_doc.screens.count > 0 then
				l_screen := l_doc.screens [1]
				create l_generator.make
				Result := l_generator.generate_dot (l_screen)
			else
				Result := "Error: Could not parse screen specification"
			end
		ensure
			result_not_void: Result /= Void
		end

end
