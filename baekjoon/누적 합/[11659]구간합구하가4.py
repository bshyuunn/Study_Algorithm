import sys

N, M = map(int, sys.stdin.readline().split())

li = list(map(int, sys.stdin.readline().split()))
sums = [li[0]]

for i in range(1, N):
    sums.append(sums[-1]+li[i])

for i in range(M):
    i, j = map(int, sys.stdin.readline().split())
    
    if i == 1:
        print(sums[j-1])
    else:
        print(sums[j-1] - sums[i-2])