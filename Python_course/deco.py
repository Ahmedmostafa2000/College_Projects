#def uppercase_decorator(function):
#    def wrapper():
#        func = function()
#        make_uppercase = func.upper()
#        return make_uppercase
#@uppercase_decorator
#def a():
#	return 'Hello World'
#a()
def int2(function):
	return int(function())
@int2
def a():
	return '1'
print(a)