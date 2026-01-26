note
	description: "Test application for simple_spec_viz"
	author: "Larry Rix"
	date: "2026-01-24"

class
	TEST_APP

create
	make

feature {NONE} -- Initialization

	make
			-- Run tests.
		local
			l_tests: LIB_TESTS
			l_passed, l_failed: INTEGER
		do
			create l_tests
			print ("Running simple_spec_viz tests...%N%N")

			-- State tests
			run_test ("test_spec_state_creation", agent l_tests.test_spec_state_creation, l_passed, l_failed)
			run_test ("test_spec_state_initial_final", agent l_tests.test_spec_state_initial_final, l_passed, l_failed)
			run_test ("test_spec_state_screen_association", agent l_tests.test_spec_state_screen_association, l_passed, l_failed)
			run_test ("test_spec_state_actions", agent l_tests.test_spec_state_actions, l_passed, l_failed)

			-- Transition tests
			run_test ("test_spec_transition_creation", agent l_tests.test_spec_transition_creation, l_passed, l_failed)
			run_test ("test_spec_transition_self_loop", agent l_tests.test_spec_transition_self_loop, l_passed, l_failed)
			run_test ("test_spec_transition_requirements", agent l_tests.test_spec_transition_requirements, l_passed, l_failed)

			-- Screen tests
			run_test ("test_spec_screen_creation", agent l_tests.test_spec_screen_creation, l_passed, l_failed)
			run_test ("test_spec_screen_widgets", agent l_tests.test_spec_screen_widgets, l_passed, l_failed)

			-- Widget tests
			run_test ("test_spec_widget_creation", agent l_tests.test_spec_widget_creation, l_passed, l_failed)
			run_test ("test_spec_widget_types", agent l_tests.test_spec_widget_types, l_passed, l_failed)
			run_test ("test_spec_widget_position_size", agent l_tests.test_spec_widget_position_size, l_passed, l_failed)
			run_test ("test_spec_widget_display_text", agent l_tests.test_spec_widget_display_text, l_passed, l_failed)

			-- Document tests
			run_test ("test_spec_document_creation", agent l_tests.test_spec_document_creation, l_passed, l_failed)
			run_test ("test_spec_document_add_elements", agent l_tests.test_spec_document_add_elements, l_passed, l_failed)
			run_test ("test_spec_document_queries", agent l_tests.test_spec_document_queries, l_passed, l_failed)

			-- Loader tests
			run_test ("test_loader_from_string", agent l_tests.test_loader_from_string, l_passed, l_failed)
			run_test ("test_loader_states_parsed", agent l_tests.test_loader_states_parsed, l_passed, l_failed)
			run_test ("test_loader_transitions_parsed", agent l_tests.test_loader_transitions_parsed, l_passed, l_failed)
			run_test ("test_loader_screens_parsed", agent l_tests.test_loader_screens_parsed, l_passed, l_failed)
			run_test ("test_loader_traceability_parsed", agent l_tests.test_loader_traceability_parsed, l_passed, l_failed)

			-- Traceability tests
			run_test ("test_traceability_matrix", agent l_tests.test_traceability_matrix, l_passed, l_failed)
			run_test ("test_traceability_reverse_lookup", agent l_tests.test_traceability_reverse_lookup, l_passed, l_failed)

			-- Generator tests
			run_test ("test_state_diagram_generator", agent l_tests.test_state_diagram_generator, l_passed, l_failed)
			run_test ("test_state_diagram_svg_generation", agent l_tests.test_state_diagram_svg_generation, l_passed, l_failed)
			run_test ("test_screen_mockup_generator", agent l_tests.test_screen_mockup_generator, l_passed, l_failed)
			run_test ("test_screen_mockup_all", agent l_tests.test_screen_mockup_all, l_passed, l_failed)
			run_test ("test_traceability_report_generator", agent l_tests.test_traceability_report_generator, l_passed, l_failed)

			-- Facade tests
			run_test ("test_simple_spec_viz_facade", agent l_tests.test_simple_spec_viz_facade, l_passed, l_failed)

			-- End-to-End File Tests
			run_test ("test_end_to_end_file_generation", agent l_tests.test_end_to_end_file_generation, l_passed, l_failed)

			-- Result tests
			run_test ("test_spec_viz_result_success", agent l_tests.test_spec_viz_result_success, l_passed, l_failed)
			run_test ("test_spec_viz_result_failure", agent l_tests.test_spec_viz_result_failure, l_passed, l_failed)

			-- SVG renderer tests
			run_test ("test_svg_renderer_rect", agent l_tests.test_svg_renderer_rect, l_passed, l_failed)
			run_test ("test_svg_renderer_text", agent l_tests.test_svg_renderer_text, l_passed, l_failed)
			run_test ("test_svg_renderer_xml_escape", agent l_tests.test_svg_renderer_xml_escape, l_passed, l_failed)

			-- Requirement tests
			run_test ("test_spec_requirement", agent l_tests.test_spec_requirement, l_passed, l_failed)
			run_test ("test_spec_requirement_types", agent l_tests.test_spec_requirement_types, l_passed, l_failed)

			-- Adversarial Tests: Boundary Conditions
			run_test ("test_adversarial_empty_spec", agent l_tests.test_adversarial_empty_spec, l_passed, l_failed)
			run_test ("test_adversarial_single_state", agent l_tests.test_adversarial_single_state, l_passed, l_failed)
			run_test ("test_adversarial_max_states", agent l_tests.test_adversarial_max_states, l_passed, l_failed)
			run_test ("test_adversarial_self_transitions_only", agent l_tests.test_adversarial_self_transitions_only, l_passed, l_failed)
			run_test ("test_adversarial_unreachable_state", agent l_tests.test_adversarial_unreachable_state, l_passed, l_failed)
			run_test ("test_adversarial_duplicate_prevention", agent l_tests.test_adversarial_duplicate_prevention, l_passed, l_failed)
			run_test ("test_adversarial_missing_screen_reference", agent l_tests.test_adversarial_missing_screen_reference, l_passed, l_failed)

			-- Adversarial Tests: Malformed JSON Handling
			run_test ("test_adversarial_malformed_json", agent l_tests.test_adversarial_malformed_json, l_passed, l_failed)
			run_test ("test_adversarial_missing_required_field", agent l_tests.test_adversarial_missing_required_field, l_passed, l_failed)
			run_test ("test_adversarial_invalid_state_reference", agent l_tests.test_adversarial_invalid_state_reference, l_passed, l_failed)

			-- Adversarial Tests: String Edge Cases
			run_test ("test_adversarial_empty_string_state_id", agent l_tests.test_adversarial_empty_string_state_id, l_passed, l_failed)
			run_test ("test_adversarial_unicode_strings", agent l_tests.test_adversarial_unicode_strings, l_passed, l_failed)
			run_test ("test_adversarial_very_long_strings", agent l_tests.test_adversarial_very_long_strings, l_passed, l_failed)

			-- Adversarial Tests: Generator Stress
			run_test ("test_adversarial_large_widget_count", agent l_tests.test_adversarial_large_widget_count, l_passed, l_failed)
			run_test ("test_adversarial_complex_requirement_traceability", agent l_tests.test_adversarial_complex_requirement_traceability, l_passed, l_failed)

			-- Adversarial Tests: Result Pattern
			run_test ("test_adversarial_result_xor_invariant", agent l_tests.test_adversarial_result_xor_invariant, l_passed, l_failed)
			run_test ("test_adversarial_result_empty_strings", agent l_tests.test_adversarial_result_empty_strings, l_passed, l_failed)

			-- Adversarial Tests: SCOOP Concurrency Readiness
			run_test ("test_adversarial_concurrent_reads", agent l_tests.test_adversarial_concurrent_reads, l_passed, l_failed)
			run_test ("test_adversarial_state_immutability", agent l_tests.test_adversarial_state_immutability, l_passed, l_failed)

			-- Adversarial Tests: Error Recovery
			run_test ("test_adversarial_loader_recovery", agent l_tests.test_adversarial_loader_recovery, l_passed, l_failed)
			run_test ("test_adversarial_generator_with_missing_data", agent l_tests.test_adversarial_generator_with_missing_data, l_passed, l_failed)

			-- Adversarial Tests: Null/Void Cases
			run_test ("test_adversarial_void_safety_state", agent l_tests.test_adversarial_void_safety_state, l_passed, l_failed)
			run_test ("test_adversarial_collection_iteration", agent l_tests.test_adversarial_collection_iteration, l_passed, l_failed)

			-- Summary
			print ("%N=== SUMMARY ===%N")
			print ("Passed: " + passed.out + "%N")
			print ("Failed: " + failed.out + "%N")
			print ("Total:  " + (passed + failed).out + "%N")

			if failed > 0 then
				(create {EXCEPTIONS}).die (1)
			end
		end

	run_test (a_name: STRING; a_test: PROCEDURE; a_passed, a_failed: INTEGER)
			-- Run a single test and update counters.
		local
			l_retried: BOOLEAN
		do
			if not l_retried then
				a_test.call (Void)
				print ("  PASS: " + a_name + "%N")
				passed := passed + 1
			end
		rescue
			print ("  FAIL: " + a_name + "%N")
			failed := failed + 1
			l_retried := True
			retry
		end

feature -- State

	passed: INTEGER
			-- Number of passed tests.

	failed: INTEGER
			-- Number of failed tests.

end
