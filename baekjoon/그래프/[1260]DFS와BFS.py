from collections import deque

def dfs(graph, v, visited): # 그래프, 시작 번호, 방문 유무
    visited[v] = True
    print(v, end=" ")
    
    for i in graph[v]:
        if not visited[i]:
            dfs(graph, i, visited)
            
def bfs(graph, v, visited):
    queue = deque([v])
    visited[v] = True
    
    while queue:
        a = queue.popleft()
        print(a, end=" ")
        
        for i in graph[a]:
            if not visited[i]:
                queue.append(i)
                visited[i] = True            
    
n, m, v = map(int, input().split()) # 정점, 간선, 시작 번호
graph = [[] for i in range(n+1)]

for i in range(m):
    start, end = map(int, input().split())
    graph[start].append(end)
    graph[end].append(start)
    
for i in range(1, len(graph)):
    graph[i] = sorted(graph[i])

visited = [False]*(n+1)
dfs(graph, v, visited)    
print()    
visited = [False]*(n+1)
bfs(graph, v, visited)