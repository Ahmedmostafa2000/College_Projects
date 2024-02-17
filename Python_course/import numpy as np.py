import numpy as np
x = np.array([1,2,3])
print(x*[2,0,0])
y = [1,2,3,4]
z = np.array(y)
print(z)
a = np.array('spiderman')
print(a)
b = np.arange(7) # = list(range(7))
print(b)
c = np.arange(7).size
print(c)
d = np.linspace(0,10,3)
print(d)
e = np.arange(16)
e.shape = (4,4)
print(e)