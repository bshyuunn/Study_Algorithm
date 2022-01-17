n = int(input())

A = sorted(list(map(int, input().split())))
B = sorted(list(map(int, input().split())), reverse=True)

sum = 0

for i in range(n):
    sum += A[i]*B[i]

print(sum)     