n = int(input())
li = [int(input()) for i in range(n)]
li.sort(reverse=True)

ans = []
for i in range(n):
    ans.append(li[i]*(ㅑ+1))

print(max(ans))