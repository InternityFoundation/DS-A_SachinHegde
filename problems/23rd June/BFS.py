from collections import defaultdict
class Graph:
        def __init__(self): 

                self.graph = defaultdict(list) 

        def add_edge(self,u,v): 
                self.graph[u].append(v) 

        def Find_BFS(self, s):
                
                visited = [False]*(len(self.graph))
                queue=[]
                queue.append(s)
                visited[s]=True
                while queue:
                        s=queue.pop(0)
                        print (s, end = " ")
                        for i in self.graph[s]:
                                if visited[i] == False:
                                        queue.append(i)
                                        visited[i] = True

graph=Graph()
while(True):
        print("Press 1 to enter graph details")
        print("Press 0 to stop entering details")
        choice=int(input())
        if(choice==1):
                src,des=map(int,input("Enter source and destinaton").split())
                graph.add_edge(src, des)
        else:
                start=int(input("Please enter the starting node"))
                break
graph.Find_BFS(start)
