p1=24
import math
p=[1]*25
g=int(math.sqrt(24))
for i in range(2,25):
    j=2
    if(p[i]!=0):
        while(j*i<=24):
            p[j*i]=0
            j=j*2
for i in range(2,25):
    if (p[i]==0): print i , " "
