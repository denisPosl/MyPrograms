//import pe
/*rule file_type{
	    strings:
	    $a = {68 74 6d 6c}
	    $a1 = "html" wide ascii
	   	$b = {50 4e 47}
	   	$b1 = "PNG" wide ascii
		$c = {57 6f 72 64}
		$c1 = "Microsoft Office Word" wide ascii  
		$j = {89 0D 0A 1A 0A}
		$j1 = "Документ Microsoft Word" wide ascii
		$l = {47 49 46 46}
		$l1 = "GIF" wide ascii
		condition:
		($a or $a1 or $b or $b1 or $c or $c1 or $j or $j1 or $l or $l1)
}*/
rule html_is_format_of_this_file{
	    strings:
	    $a = {68 74 6d 6c}
	    $a1 = "html" wide ascii
	   	
		condition:
		($a or $a1)
}
rule PNG_is_format_of_this_file {
		strings:
		$b = {50 4e 47}
		$b1 = "PNG" wide ascii

		condition:
		($b or $b1)
}
rule Microsoft_Office_Word_is_format_of_this_file {
		strings:
		$c = {57 6f 72 64}
		$c1 = "Microsoft Office Word" wide ascii

		condition:
		($c or $c1)
}
rule Word_is_format_of_this_file {
		strings:
		$j = {89 0D 0A 1A 0A}
		$j1 = "Документ Microsoft Word" wide ascii

		condition:
		($j or $j1)
}
rule GIF_is_format_of_this_file{
		strings:
		$l = {47 49 46 46}
		$l1 = "GIF" wide ascii

		condition:
		($l or $l1)
}