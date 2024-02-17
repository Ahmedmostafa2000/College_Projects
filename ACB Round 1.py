n = int(input())
casessolved = []
top = []
topno0 = []
for i in range(n):
    n_top = list(map(int,input().split()))
    for i in range(n_top[0]):
        casessolved.append(int(input()))
    casessolved = sorted(casessolved)

    for i in range(len(casessolved)-1*(n_top[1])+1,len(casessolved)):
        top.append(casessolved[i])
    for i in casessolved:
        if casessolved[-1*(n_top[1])] == i:
            if i != 0:
                top.append(i)
    print(len(top))
    casessolved = []
    top = []
        
