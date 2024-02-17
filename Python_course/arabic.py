class Ar:
	def print_(string):
		y = ''
		string = string.split()
		print(string)
		string.sort(reverse = True)
		print(string)
		for i in string:
			y+=i+' '
		print(y)
Ar.print_('شاي و مية وشمس عفية')
