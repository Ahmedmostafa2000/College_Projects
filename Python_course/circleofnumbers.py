n,x = map(int,input().split())
y = (n//2)+x
if y>n:
	y = y - n
print(y)