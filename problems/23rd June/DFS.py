from collections import defaultdict 
class Graph:
        def __init__(self):
                self.graph = defaultdict(list)
        def add_edge(self, u, v):
                self.graph[u].append(v)
        def DFSUtil(self, v, visited):
                visited[v] = True
                print(v, end=' ')
                for i in self.graph[v]:
                        if visited[i] == False:
                                self.DFSUtil(i, visited) 

        def Find_DFS(self, v):
                visited = [False] * (max(self.graph)+1)
                self.DFSUtil(v, visited) 

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
graph.Find_DFS(start)


