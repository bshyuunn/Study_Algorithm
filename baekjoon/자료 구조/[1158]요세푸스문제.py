N, K = map(int, input().split())
temp = K-1
li = [i for i in range(1, N+1)]
ans = []

for i in range(N):
    if len(li) > temp:
        ans.append(li.pop(temp))
        temp += K-1
        
    elif len(li) <= temp:
        temp %= len(li)
        ans.append(li.pop(temp))
        temp += K-1

print("<" + ", ".join(str(i) for i in ans) + ">")   