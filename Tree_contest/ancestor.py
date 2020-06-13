class add_node:
	def __init__(self,data): 
		self.data=data 
		self.left=None
		self.right=None

def path(root,p,q):
    if root is None:
        return False
    p.append(root.data)
    if(root.data==q):
        return True
    if((root.left!=None and path(root.left,p,q)) or(root.right!=None and path(root.right,p,q))):
        return True
    p.pop()
    return False

def Least_common_ancestor(root,p,q):
    i=0
    p1=[]
    p2=[]
    if(not path(root,p1,p) or not path(root,p2,q)):
        return -1
    while(i<len(p1) and i<len(p2)):
        if(p1[i]!=p2[i]):
            break
        i=i+1
    return p1[i-1]

root=add_node(3) 
root.left=add_node(5) 
root.right=add_node(1)
root.left.left=add_node(6)
root.left.right=add_node(2)
root.right.left=add_node(0)
root.right.right=add_node(8)
root.left.right.left=add_node(7)
root.left.right.right=add_node(4)
p=int(input())
q=int(input())
result=Least_common_ancestor(root,p,q)
print(result)
