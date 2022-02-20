n = int(input())

li = [list(input().split()) for i in range(n)]

li.sort(key = lambda x: int(x[0]))

for i in range(len(li)):
    print(li[i][0], li[i][1])