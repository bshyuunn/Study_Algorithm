# 10871번 - X보다 작은 수
a, b = map(int, input().split())
c = list(map(int, input().split()))

for i in range(a):
    if b > c[i]:
        print(c[i])
    