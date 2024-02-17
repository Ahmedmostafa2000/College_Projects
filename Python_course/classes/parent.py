class a:
	def __init__(self,a,b):
		self.a = a
		self.b = b
	def fun(self):
		return self.a +self.b
class b(a):
	def __init__(self,a,b,c):
	 	super().__init__(a,b)
	 	self.c=c
	def fine(self):
		return self.a+self.b+self.c