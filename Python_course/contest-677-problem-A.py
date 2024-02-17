#The first line of inputs : number of friends and the height of the fence
num , maxheight = map(int,input().split())
#The seconed line of inputs : the heights of 
heights = list(map(int,input().split()))
#c is the minimum possible valid width of the road
c = 0
#a for loop to calculate the width
for i in range(num):
	if heights[i] > maxheight:
		c += 2
	else:
		c += 1
#the output
print(c)