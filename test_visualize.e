note
	description: "Quick test to visualize devkit_cli.json"

class
	TEST_VISUALIZE

create
	make

feature
	make
		local
			l_viz: SIMPLE_SPEC_VIZ
			l_doc: detachable SPEC_DOCUMENT
		do
			create l_viz.make
			print ("Loading: test/test_data/inputs/devkit_cli.json%N")
			l_doc := l_viz.load_from_file ("test/test_data/inputs/devkit_cli.json")
			
			if l_doc /= Void then
				print ("✓ Loaded successfully%N")
				print ("Generating outputs to test/test_data/outputs%N")
				if l_viz.generate_all (l_doc, "test/test_data/outputs") then
					print ("✓ SVGs generated successfully%N")
				else
					print ("✗ Failed to generate SVGs%N")
				end
			else
				print ("✗ Failed to load: " + (l_viz.loader.last_error or else "unknown") + "%N")
			end
		end

end
