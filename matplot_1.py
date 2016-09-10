from mpl_toolkits.mplot3d import axes3d
from pylab import *
import numpy as np
p=[]
q=[]
#x,y,z= axes3d.get_test_data(0.05)
for i in range(10):
	p.append(i^1)
	q.append(i^2)
l=range(10)
fig = plt.figure(figsize=(8,6))
ax = fig.add_subplot(1, 1, 1,projection='3d')
ax.set_xlabel('base value from 0 to 9 Label')
ax.set_ylabel('i^1 Label')
ax.set_zlabel('i^2 Label')
ax.grid(True)
ax.grid(color='r', alpha=0.5, linestyle='dashed', linewidth=0.5)
p = ax.plot_wireframe(l,p,q ,rstride=4, cstride=4)
plt.show()