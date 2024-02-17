x = int(input())
nums = [0]*x
for i in range(x):
        nums[i]=input()
for i in range(len(nums)):
	for u in range(len(nums[i])):
		print(nums[i][u],end='')
		if not(u==len(nums[i])-1):
			print(' ',end='')
	print('\n',end='')
