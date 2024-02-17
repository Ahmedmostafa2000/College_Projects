x = [9,8,23,7,5,4,24,6]
counter = 0
for i in range(len(x)):
	for j in range(len(x)-1-i):
		if x[j]>x[j+1]:
			x[j],x[j+1]=x[j+1],x[j]
print(x)

