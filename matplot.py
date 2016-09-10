#import matplotlib.pyplot as plt
from pylab import *
fig, ax = plt.subplots(1, 1)
p=map(lambda x: []*100, range(101))
for j in range(0,101):	
	for i in range(0,101):
		p[j].append(i^j)
l=range(0,101)
#ax.set_yticks([0, 50, 100, 150])
ax.grid(True)
ax.set_yticks(range(0,101))#[0, 50, 100, 150])
ax.set_xticks(range(0,101))
for i in range(1,101):#101):
	ax.plot(l,p[i],"b",lw=1)
#plt.plot(l,q,"g")
#plt.plot(l,r,"y")
#plt.axis([1,151,1,151])
plt.show()