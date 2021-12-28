import sys

a = int(input())

num = [int(sys.stdin.readline()) for _ in range(a)]
num = sorted(num)

for i in num:
    print(i)