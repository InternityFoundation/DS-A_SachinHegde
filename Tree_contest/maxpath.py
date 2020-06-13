class add_node:
	def __init__(self,data): 
		self.data=data 
		self.left=None
		self.right=None
def max_sum(root):
	if root is None: 
		return 0
	left=max_sum(root.left) 
	right=max_sum(root.right) 
	ms=max(max(left,right)+root.data,root.data)
	mt=max(ms,left+right+root.data) 
	max_sum.answer=max(max_sum.answer,mt) 
	return ms 
def max_path(root): 
	max_sum.answer=float("-inf")
	max_sum(root) 
	return max_sum.answer 


root=add_node(-10) 
root.left=add_node(9) 
root.right=add_node(20)
root.right.left=add_node(15)
root.right.right=add_node(7)
print(max_path(root))
