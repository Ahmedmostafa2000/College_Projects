class IdentifierSolver:
	def __init__(self,row_number):
		self.row_n = row_number

	def set_identifier(self,seq):
		if type(seq) != type([]):
			raise ValueError
		elif type(seq[0]) != type([]):
			raise ValueError
		else:
			self.identifier = seq
	def solve2(self,n):
		solution = self.identifier[0][0]*self.identifier[1][1] - (self.identifier[1][0]*self.identifier[0][1])
		return solution
	#def solve(self):
		#if self.identifier == 3:
			#solution = 
	#def poper(self,elementnum):

	def property1(self):
		self.identifier[0],self.identifier[2]=self.identifier[2],self.identifier[0]
		for i in range(3):
			self.identifier[i][0],self.identifier[i][2] = self.identifier[i][2],self.identifier[i][0]
	#def properity2(self):
	def 