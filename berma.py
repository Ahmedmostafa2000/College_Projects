#berma
c =  1
flag = True
while True:
    x=c*7
    for i in [2,3,4,5,6]:
        if x%i == 1:
            flag =True
        else:
            flag = False
            break
    if flag ==True:
        break
    c +=1
print(x)
#I Love Python 