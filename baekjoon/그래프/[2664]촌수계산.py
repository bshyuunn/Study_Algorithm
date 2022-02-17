import sys
sys.setrecursionlimit(300000)

def DFS(graph, t, visited):
    for i in graph[t]:
        if visited[i] == 0:
            visited[i] = visited[t] + 1
            DFS(graph, i, visited)
    
N = int(input()) # 사람 갯수
graph = [[] for i in range(N+1)] 

t, e = map(int, input().split()) # 구해야하는 서로다른 두사람의 번호

for i in range(int(input())):
    start, end = map(int,input().split())
    graph[start].append(end)
    graph[end].append(start)
    
visited = [0 for i in range(N+1)]

DFS(graph, t, visited)
print(visited[e] if visited[e] > 0 else -1 )