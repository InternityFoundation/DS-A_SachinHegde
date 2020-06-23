class AdjNode: 
	def __init__(self, data): 
		self.vertex = data 
		self.next = None
class Graph: 
	def __init__(self, vertices): 
		self.V = vertices 
		self.graph = [None] * self.V 

	def add_edge(self, src, dest): 
		node = AdjNode(dest) 
		node.next = self.graph[src] 
		self.graph[src] = node
		node = AdjNode(src) 
		node.next = self.graph[dest] 
		self.graph[dest] = node 
 
	def print_graph(self): 
		for i in range(self.V): 
			print("Adjacency list of vertex {}\n head".format(i), end="") 
			temp = self.graph[i] 
			while temp: 
				print(" -> {}".format(temp.vertex), end="") 
				temp = temp.next
			print(" \n") 


V=int(input())
graph=Graph(V)
while(True):
        print("Press 1 to enter graph details")
        print("Press 0 to stop entering details")
        choice=int(input())
        if(choice==1):
                src,des=map(int,input("Enter source and destinaton").split())
                graph.add_edge(src, des)
        else:
                graph.print_graph()
                break

	
