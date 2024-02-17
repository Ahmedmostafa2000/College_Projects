from math import sin,cos,tan,radians
while 1:
	try:
		x = input()
		x = x.split()
		poped = []
		if "ans" in x:
			for i in range(len(x)):
				if "ans"==x[i]:
					x[i]=ans
		if "sin" in x or "cos" in x or "tan" in x:
			for i in range(len(x)):
				if x[i]=="sin":
					x[i]=sin(radians(float(x[i+1])))
					poped.append(i+1)
				elif x[i]=="cos":
					x[i]=cos(radians(float(x[i+1])))
					poped.append(i+1)
				elif x[i]=="tan":
					x[i]=tan(radians(float(x[i+1])))
					poped.append(i+1)


			for i in range(len(poped)-1,-1,-1):
				x.pop(poped[i])
			poped = []

		if "**" in x:
			for i in range(len(x)):
				if x[i]=="**":
					x[i]=float(x[i-1])**float(x[i+1])
					poped.append(i-1)
					poped.append(i+1)
			for i in range(len(poped)-1,-1,-1):
				x.pop(poped[i])
			poped = []
		if "*" in x or "/" in x:
			for i in range(len(x)):
				if x[i]=="*":
					x[i]=float(x[i-1])*float(x[i+1])
					poped.append(i-1)
					poped.append(i+1)
				if x[i]=="/":
					x[i]=float(x[i-1])/float(x[i+1])
					poped.append(i-1)
					poped.append(i+1)

			for i in range(len(poped)-1,-1,-1):
				x.pop(poped[i])
			poped = []

		
		x = list(map(float,x))
		ans = sum(x)
		print(ans)
	except:
		print("Syntax Error")
