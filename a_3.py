n=int(raw_input())
l=raw_input()
p=map(int,l.split(" "))
o=min(p)
i,k,pp=0,0,[]
while(i<n):
	pp.append(o+k)
	k+=3
	i+=1
g=[pp[0]]
vv=0
for i in range(1,n):
	g.append(pp[i]+pp[i-1])
for i in range(1,n):
	if(p[i]+p[i-1]==g[i]):
		p[i],p[i-1]=g[i],g[i-1]
		vv+=1
		continue
if(vv>0):
	print "Yes %d"%(vv)
else:
	print "No"
#print vv