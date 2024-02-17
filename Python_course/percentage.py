from numpy import ndarray
class Percentage:
	"""docstring for ClassName"""
	def __init__(self):
		pass
	def list_perc(list1,list2):
		counter = 0
		if len(list1) != len(list2):
			raise IndexError('the two lists must be at the same length')
		for i in range(len(list1)):
			if type(list1[i])==type(list2[i]) == type([]):
				int(self.list_perc(list1[i],list2[i])/100)
			if type(list1[i])==type(list2[i]) == type(ndarray):
				int(self.list_perc(list1[i],list2[i])/100)
			if list1[i] == list2[i]:
				counter += 1
		return (counter/len(list2))*100



