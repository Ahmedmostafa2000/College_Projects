def f(*args):
	return list(args)
print(f(1,2,3))
def f2(**kwargs):
	return kwargs
print(f2(first = 1 , seconed = 2))