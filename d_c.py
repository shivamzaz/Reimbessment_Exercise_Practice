def shiv(p,i):
	if(i==5):
		return p;
	else:
		p.append(input())
		return shiv(p,i+1)
i=0
a=[]
shiv(a,i)
print a


