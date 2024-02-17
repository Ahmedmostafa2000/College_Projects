x = [2,1,3,7]
counter=0
while 1:
    for i in range(len(x)):
        try:
           if x[i]%2==1: 
                if x[i]<x[i+1]:
                    x[i],x[i+1]=x[i+1],x[i]
                elif x[i]<x[i-1]:
                    x[i],x[i+1]=x[i+1],x[i]
                else:
                    counter+=1
           else:
                if x[i]>x[i+1]:
                    x[i],x[i+1]=x[i+1],x[i]
                elif x[i]>x[i-1]:
                    x[i],x[i+1]=x[i+1],x[i]
                    
        except:
            continue
        print(x)
    if counter==len(x)-2:
        print(x)
        break
    
        
    
