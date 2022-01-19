import sys

N = int(sys.stdin.readline())

xy = []

for i in range(N):
    x, y = map(int, input().split())
    xy.append([y, x])

xy.sort()

for y, x in xy:
    print(x, y)