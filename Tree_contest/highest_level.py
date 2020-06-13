class add_node:
    def __init__(self,data):
            self.data=data
            self.left=None
            self.right=None
def find_level(answer,root,level):
    if(not root):
        return
    if(level==len(answer)):
        answer.append(root.data)
    else:
        answer[level]=max(answer[level],root.data)
    find_level(answer,root.left,level+1) 
    find_level(answer,root.right,level+1) 
def high_level(root): 
	ans=[] 
	find_level(ans,root,0) 
	return ans 

if __name__ == '__main__':
	root=add_node(1) 
	root.left=add_node(3) 
	root.right=add_node(2) 
	root.left.left=add_node(5) 
	root.left.right=add_node(3) 
	root.right.right=add_node(9) 
	print(high_level(root))
