note
	description: "Widget definition in a screen specification"
	author: "Larry Rix"
	date: "2026-01-24"

class
	SPEC_WIDGET

create
	make

feature {NONE} -- Initialization

	make (a_type, a_id, a_label: STRING)
			-- Initialize widget.
		require
			type_not_void: a_type /= Void
			type_not_empty: not a_type.is_empty
			id_not_void: a_id /= Void
			id_not_empty: not a_id.is_empty
			label_not_void: a_label /= Void
		do
			widget_type := a_type
			id := a_id
			label := a_label
			x := 0
			y := 0
			width := 100
			height := 25
		ensure
			type_set: widget_type = a_type
			id_set: id = a_id
			label_set: label = a_label
			default_position: x = 0 and y = 0
			default_size: width = 100 and height = 25
		end

feature -- Access

	widget_type: STRING
			-- Type of widget (text, button, text_field, progress_bar, etc.).

	id: STRING
			-- Unique identifier.

	label: STRING
			-- Display label or placeholder text.

	x: INTEGER
			-- X position.

	y: INTEGER
			-- Y position.

	width: INTEGER
			-- Width in pixels.

	height: INTEGER
			-- Height in pixels.

feature -- Status

	is_button: BOOLEAN
			-- Is this a button widget?
		do
			Result := widget_type.same_string ("button")
		end

	is_text: BOOLEAN
			-- Is this a text/label widget?
		do
			Result := widget_type.same_string ("text") or widget_type.same_string ("label")
		end

	is_text_field: BOOLEAN
			-- Is this a text input field?
		do
			Result := widget_type.same_string ("text_field") or widget_type.same_string ("input")
		end

	is_progress_bar: BOOLEAN
			-- Is this a progress bar?
		do
			Result := widget_type.same_string ("progress_bar") or widget_type.same_string ("progress")
		end

	is_checkbox: BOOLEAN
			-- Is this a checkbox?
		do
			Result := widget_type.same_string ("checkbox") or widget_type.same_string ("check")
		end

	is_dropdown: BOOLEAN
			-- Is this a dropdown/combobox?
		do
			Result := widget_type.same_string ("dropdown") or widget_type.same_string ("combobox") or widget_type.same_string ("select")
		end

feature -- Modification

	set_position (a_x, a_y: INTEGER)
			-- Set position.
		do
			x := a_x
			y := a_y
		ensure
			x_set: x = a_x
			y_set: y = a_y
		end

	set_size (a_width, a_height: INTEGER)
			-- Set size.
		require
			width_non_negative: a_width >= 0
			height_non_negative: a_height >= 0
		do
			width := a_width
			height := a_height
		ensure
			width_set: width = a_width
			height_set: height = a_height
		end

feature -- Conversion

	display_text: STRING
			-- Text to display for this widget in mockup.
			-- Shows: [TYPE] name: label
		do
			create Result.make (100)

			-- Widget type in brackets
			Result.append_character ('[')
			Result.append_string (widget_type)
			Result.append_character (']')
			Result.append_character (' ')

			-- Widget name/ID
			if not id.is_empty then
				Result.append_string (id)
			end

			-- Label/content if present
			if not label.is_empty then
				if not id.is_empty then
					Result.append_string (": ")
				end
				Result.append_character ('"')
				Result.append_string (label)
				Result.append_character ('"')
			elseif is_text_field or is_text_area then
				Result.append_string (" [___________]")
			elseif is_progress_bar then
				Result.append_string (" [=========>]")
			end
		ensure
			result_not_void: Result /= Void
		end

	is_text_area: BOOLEAN
			-- Is this a text area widget?
		do
			Result := widget_type.same_string ("text_area")
		end

invariant
	widget_type_not_void: widget_type /= Void
	widget_type_not_empty: not widget_type.is_empty
	id_not_void: id /= Void
	id_not_empty: not id.is_empty
	label_not_void: label /= Void
	width_non_negative: width >= 0
	height_non_negative: height >= 0

end
