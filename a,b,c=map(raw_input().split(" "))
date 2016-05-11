'''
	Problem: Parabolic Climb
	Language: Python
	Complexity: O(nlog(n))
	Coded by @ Shivam Gupta(github.com/shivamzaz)
'''
#For command line input use sys
import sys
#Function for quick sorting
def q_s(ar):
    if len(ar) <= 1:
        return ar
    pvt = ar[len(ar) / 2]
    lft = [x1 for x1 in ar if x1 < pvt]
    md = [x1 for x1 in ar if x1 == pvt]
    right1 = [x1 for x1 in ar if x1 > pvt]
    return q_s(lft) + md + q_s(right1)
#Input values
a = int(sys.argv[1])
b = int(sys.argv[2])
c = int(sys.argv[3])
d={}
y=[]
#Calculate((a*x*x)+(b*x)+(c))
for i in range(0,len(sys.argv)-4,1):
	y.append(int(a*(int(sys.argv[4+i])*int(sys.argv[4+i]))+b*(int(sys.argv[4+i]))+c))
for j in range(0,len(sys.argv)-4,1):
	d[y[j]]=int(sys.argv[4+j])
i=0
p=[]
#Function call for given Quick Sort Function
y=q_s(y)
for i in range(0,len(y),1):
	p.append((d[y[i]],y[i]))
#Assigning Empty String For concatenation of output in one line as the given format
s=""
for j in range(len(p)):
	s+=str(p[j][0])+","+str(p[j][1])+" "
#Print the output
print s


