import pdb
def make_link(g,n1,n2):
	if n1 not in g:
		g[n1]={}
	g[n1][n2]=1
	if n2 not in g:
		g[n2]={}
	g[n2][n1]=1
p=[(0,1),(1,2),(3,1)]
g={}
for x,y in p:
	make_link(g,x,y)
print g
print g[1].keys()
#pdb.set_trace()
#print sum([len(g[i]) for i in g.keys()])/2
