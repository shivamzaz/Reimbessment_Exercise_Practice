from collections import defaultdict
d=defaultdict(dict)
while(1>0):
	src,dis,out=map(str,raw_input().split())
	d[src][out]=dis
	io=raw_input("want to quit: ")
	if(io=="yes"):
		break
print d
