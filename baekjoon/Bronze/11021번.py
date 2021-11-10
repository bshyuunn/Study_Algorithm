# 11021번 - A-B - 7
import sys
T = int(input())

for i in range(1, T + 1):
    a, b = map(int, sys.stdin.readline().split())
    print("Case #%d:" %(i) , a + b)