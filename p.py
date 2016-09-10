def pp(p):
	if(p==2):
		return;
	pp(p-1)
	print p
pp(5)
