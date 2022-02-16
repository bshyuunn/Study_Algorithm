import sys
sys.setrecursionlimit(10000)

N, M = map(int, sys.stdin.readline().split())

graph = [[] for i in range(N+1)]
visited = [False for i in range(N+1)]

for i in range(M):
    one, two = map(int, sys.stdin.readline().split())
    graph[one].append(two)
    graph[two].append(one)
    graph[one].sort()
    graph[two].sort()
    
def DFS(graph, start, visited):
    visited[start] = True
    
    for i in graph[start]:
        if not visited[i]:
            DFS(graph, i, visited)
            
count = 0            
            
for i in range(1 ,N+1):    
    if visited[i] == False:
        count += 1
        DFS(graph, i, visited)
        
print(count)        