note
	description: "Test to capture and debug DOT output"
	author: "Larry Rix"
	date: "2026-01-25"

class
	TEST_DOT_CAPTURE

create
	make

feature
	make
			-- Run debug capture.
		local
			l_json: STRING
			l_capture: DEBUG_DOT_CAPTURE
			l_dot: STRING
			l_file: PLAIN_TEXT_FILE
		do
			-- Simple test screen spec
			l_json := {STRING} "[
{
  "name": "Test Screen",
  "version": "1.0.0",
  "states": [
    {"id": "idle", "name": "Idle", "is_initial": true, "screen": "test_screen"}
  ],
  "transitions": [],
  "screens": [
    {
      "id": "test_screen",
      "name": "Test Screen",
      "description": "Minimal test",
      "widgets": [
        {"id": "w1", "type": "text", "label": "Hello", "x": 0, "y": 0, "width": 100, "height": 24}
      ]
    }
  ]
}
			]"

			create l_capture.make
			l_dot := l_capture.capture_screen_dot (l_json)

			-- Write to file for inspection
			create l_file.make_create_read_write ("/d/prod/simple_spec_viz/debug_output.dot")
			l_file.put_string (l_dot)
			l_file.close

			print ("DOT source written to: /d/prod/simple_spec_viz/debug_output.dot%N")
			print ("Content:%N")
			print (l_dot)
		end

end
