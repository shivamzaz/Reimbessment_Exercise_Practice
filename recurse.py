##coder @ shivamzaz
def s_s(n):
	i=0
	s_f(i,n)
def s_f(i,n):
	if(i<n):	
		j=0
		s_g(i,j,n)
		s_f(i+1,n)
def s_g(i,j,n):
	if(j<n):
		print i,j
		s_g(i,j+1,n)
s_s(4)
'''for(i=0;i<n;i++){
	for(j=0;j<nj++){
		cout<<n<<endl;
	}
}'''