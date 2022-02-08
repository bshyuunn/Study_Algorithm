dic = {}

for i in range(int(input())):
    dic[i+1] = set()

for i in range(int(input())):
    a, b = map(int, input().split())
    dic[a].add(b)
    dic[b].add(a)
    
def dfs(start, dic):
    for i in dic[start]:
        if i not in visited:
            visited.append(i)
            dfs(i, dic)

visited = []    
dfs(1, dic)

print(len(visited) - 1)