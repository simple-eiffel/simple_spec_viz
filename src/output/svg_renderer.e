note
	description: "SVG generation utilities for specification visualization"
	author: "Larry Rix"
	date: "2026-01-24"

class
	SVG_RENDERER

feature -- SVG Generation

	create_svg_header (a_width, a_height: INTEGER; a_title: STRING): STRING
			-- Create SVG header with dimensions and title.
		require
			width_positive: a_width > 0
			height_positive: a_height > 0
			title_not_void: a_title /= Void
		do
			create Result.make (200)
			Result.append_string ("<?xml version=%"1.0%" encoding=%"UTF-8%"?>%N")
			Result.append_string ("<svg xmlns=%"http://www.w3.org/2000/svg%" ")
			Result.append_string ("width=%"" + a_width.out + "%" ")
			Result.append_string ("height=%"" + a_height.out + "%">%N")
			Result.append_string ("  <title>" + escape_xml (a_title) + "</title>%N")
		ensure
			result_not_void: Result /= Void
			has_svg_tag: Result.has_substring ("<svg")
		end

	create_svg_footer: STRING
			-- Create SVG footer.
		do
			Result := "</svg>%N"
		ensure
			result_not_void: Result /= Void
		end

	create_rect (a_x, a_y, a_width, a_height: INTEGER; a_fill, a_stroke: STRING): STRING
			-- Create SVG rectangle.
		require
			width_non_negative: a_width >= 0
			height_non_negative: a_height >= 0
			fill_not_void: a_fill /= Void
			stroke_not_void: a_stroke /= Void
		do
			create Result.make (100)
			Result.append_string ("  <rect x=%"" + a_x.out + "%" ")
			Result.append_string ("y=%"" + a_y.out + "%" ")
			Result.append_string ("width=%"" + a_width.out + "%" ")
			Result.append_string ("height=%"" + a_height.out + "%" ")
			Result.append_string ("fill=%"" + a_fill + "%" ")
			Result.append_string ("stroke=%"" + a_stroke + "%" />%N")
		ensure
			result_not_void: Result /= Void
			has_rect_tag: Result.has_substring ("<rect")
		end

	create_rounded_rect (a_x, a_y, a_width, a_height, a_rx: INTEGER; a_fill, a_stroke: STRING): STRING
			-- Create SVG rounded rectangle.
		require
			width_non_negative: a_width >= 0
			height_non_negative: a_height >= 0
			rx_non_negative: a_rx >= 0
			fill_not_void: a_fill /= Void
			stroke_not_void: a_stroke /= Void
		do
			create Result.make (120)
			Result.append_string ("  <rect x=%"" + a_x.out + "%" ")
			Result.append_string ("y=%"" + a_y.out + "%" ")
			Result.append_string ("width=%"" + a_width.out + "%" ")
			Result.append_string ("height=%"" + a_height.out + "%" ")
			Result.append_string ("rx=%"" + a_rx.out + "%" ")
			Result.append_string ("fill=%"" + a_fill + "%" ")
			Result.append_string ("stroke=%"" + a_stroke + "%" />%N")
		ensure
			result_not_void: Result /= Void
			has_rect_tag: Result.has_substring ("<rect")
		end

	create_text (a_x, a_y: INTEGER; a_text, a_font_family: STRING; a_font_size: INTEGER): STRING
			-- Create SVG text element.
		require
			text_not_void: a_text /= Void
			font_family_not_void: a_font_family /= Void
			font_size_positive: a_font_size > 0
		do
			create Result.make (100)
			Result.append_string ("  <text x=%"" + a_x.out + "%" ")
			Result.append_string ("y=%"" + a_y.out + "%" ")
			Result.append_string ("font-family=%"" + a_font_family + "%" ")
			Result.append_string ("font-size=%"" + a_font_size.out + "%">")
			Result.append_string (escape_xml (a_text))
			Result.append_string ("</text>%N")
		ensure
			result_not_void: Result /= Void
			has_text_tag: Result.has_substring ("<text")
		end

	create_line (a_x1, a_y1, a_x2, a_y2: INTEGER; a_stroke: STRING; a_stroke_width: INTEGER): STRING
			-- Create SVG line.
		require
			stroke_not_void: a_stroke /= Void
			stroke_width_positive: a_stroke_width > 0
		do
			create Result.make (100)
			Result.append_string ("  <line x1=%"" + a_x1.out + "%" ")
			Result.append_string ("y1=%"" + a_y1.out + "%" ")
			Result.append_string ("x2=%"" + a_x2.out + "%" ")
			Result.append_string ("y2=%"" + a_y2.out + "%" ")
			Result.append_string ("stroke=%"" + a_stroke + "%" ")
			Result.append_string ("stroke-width=%"" + a_stroke_width.out + "%" />%N")
		ensure
			result_not_void: Result /= Void
			has_line_tag: Result.has_substring ("<line")
		end

	create_circle (a_cx, a_cy, a_r: INTEGER; a_fill, a_stroke: STRING): STRING
			-- Create SVG circle.
		require
			r_positive: a_r > 0
			fill_not_void: a_fill /= Void
			stroke_not_void: a_stroke /= Void
		do
			create Result.make (80)
			Result.append_string ("  <circle cx=%"" + a_cx.out + "%" ")
			Result.append_string ("cy=%"" + a_cy.out + "%" ")
			Result.append_string ("r=%"" + a_r.out + "%" ")
			Result.append_string ("fill=%"" + a_fill + "%" ")
			Result.append_string ("stroke=%"" + a_stroke + "%" />%N")
		ensure
			result_not_void: Result /= Void
			has_circle_tag: Result.has_substring ("<circle")
		end

	create_group_start (a_id: STRING): STRING
			-- Start SVG group.
		require
			id_not_void: a_id /= Void
		do
			Result := "  <g id=%"" + escape_xml (a_id) + "%">%N"
		ensure
			result_not_void: Result /= Void
			has_g_tag: Result.has_substring ("<g")
		end

	create_group_end: STRING
			-- End SVG group.
		do
			Result := "  </g>%N"
		ensure
			result_not_void: Result /= Void
		end

feature -- Color Constants

	color_white: STRING = "#FFFFFF"
	color_black: STRING = "#000000"
	color_gray: STRING = "#CCCCCC"
	color_light_gray: STRING = "#F0F0F0"
	color_blue: STRING = "#4A90D9"
	color_light_blue: STRING = "#E3F2FD"
	color_green: STRING = "#4CAF50"
	color_light_green: STRING = "#E8F5E9"
	color_red: STRING = "#F44336"
	color_light_red: STRING = "#FFEBEE"

feature -- Font Constants

	font_sans_serif: STRING = "Arial, Helvetica, sans-serif"
	font_monospace: STRING = "Consolas, Monaco, monospace"

feature {NONE} -- Implementation

	escape_xml (a_text: STRING): STRING
			-- Escape XML special characters.
		require
			text_not_void: a_text /= Void
		do
			create Result.make (a_text.count + 10)
			across a_text as c loop
				inspect c
				when '<' then
					Result.append_string ("&lt;")
				when '>' then
					Result.append_string ("&gt;")
				when '&' then
					Result.append_string ("&amp;")
				when '"' then
					Result.append_string ("&quot;")
				when '%'' then
					Result.append_string ("&apos;")
				else
					Result.append_character (c)
				end
			end
		ensure
			result_not_void: Result /= Void
		end

end
