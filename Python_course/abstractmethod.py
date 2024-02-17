from abc import abstractmethod
class a:
	def __init__(self):
		pass
	def __getitem__(self,j):
		print(list())
x = a[0]
class b(metaclass=a):
	@abstractmethod
	def __init__(self):
	@abstractmethod
	def __getitem__(self,j):

