n = [0,1,2,3,4,5,6,7,8,9]
counter = 0
for i in range(len(n)):
    for u in range(len(n)):
        for v in range(len(n)):
            if n[i]!=n[u]!=n[v]:
                print(n[i],n[u],n[v])
                counter+=1
print('finished with outcome:',counter)


           
    
