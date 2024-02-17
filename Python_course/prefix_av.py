def pa(s):
	A = [0]*len(s)
	for i in range(len(A)):
		total = 0
		for j in range(i+2):
			total += j 
		A[i]=total/(i+1)
	return A
print(pa([1,2,3]))