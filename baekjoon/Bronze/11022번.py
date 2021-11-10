# 11022번 - A+B - 8
T = int(input())

for i in range(1, T + 1):
    a, b = map(int, input().split())
    print("Case #%d:" %(i), a, "+", b, "=", a + b)