# 2439번 - 별 찍기 - 2
T = int(input())

for i in range(1, T+1):
    a = T - i
    print(" "*a + "*"*i)