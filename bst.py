class Node: 
	def __init__(self,value):
		self.left=None
		self.right=None
		self.key=value
#fight with worst case first in recursion terminology
def insert(r,n):
	if(r!=None):
		if(r.key<n.key):
			if r.right!=None:
				insert(r.right,n)
			else:
				r.right=n
		else:
			if(r.left!=None):
				insert(r.left,n)
			else:
				r.left=n
	else:  #alternative
		r=n
def inorder(r):
	if(r!=None):
		inorder(r.right)
		print(r.key)
		inorder(r.left)
	return 
r=Node(50)
insert(r,Node(30))
insert(r,Node(40))
insert(r,Node(50))
insert(r,Node(20))
insert(r,Node(10))
#print r.right.right
inorder(r)