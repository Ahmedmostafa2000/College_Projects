count = 1
while True:
    
    add = 0
    mul = 1
    for i in range(count,count+99):
        add = add +i
        mul = mul *i
    if mul == add:
        print(count,'and the 99 number after it')
        break
    else:
        count = count +1
        
