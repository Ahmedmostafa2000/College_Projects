import random
from time import sleep
class creature:
	river = []
	def __init__(self,cell,type):
		self.cell = cell
		self.type = type
		river.append([self.cell,self.type])
	def move(self):
		self.cell[0]+=random.randint(-1,1)
		self.cell[1]+=random.randint(-1,1)
		if abs(self.cell[0])>abs(10):
			self.cell[0]-=1
		if abs(self.cell[1])>16:
			self.cell[1]-=1

		if [self.cell,self.type] in river:
			self(self.cell,self.type)
for i in range(len(5)):
	creature([randint()])
while 1:
