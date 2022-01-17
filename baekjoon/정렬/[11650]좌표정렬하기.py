import sys

N = int(sys.stdin.readline())

xy = [list(map(int, sys.stdin.readline().split())) for i in range(N)]

xy.sort()

for i in xy:
    for _ in i:
        print(_, end=" ")
    print()    