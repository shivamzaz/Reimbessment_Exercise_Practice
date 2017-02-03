import pdb
def make_link(g,n1,n2):
	if n1 not in g:
		g[n1]=[]
	g[n1].append(n2)
	if n2 not in g:
		g[n2]=[]
	g[n2].append(n1)
p=[(0,1),(1,2),(3,1)]
g={}
for i in range(3):
	make_link(g,p[i][0],p[i][1])
print g
#pdb.set_trace()
print sum([len(g[i]) for i in g.keys()])/2