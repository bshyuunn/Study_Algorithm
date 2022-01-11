import sys

a = int(sys.stdin.readline())
li = [0 for _ in range(10001)]

for i in range(a):
    num = int(sys.stdin.readline())
    li[num] += 1
    
for i in range(len(li)):
    for j in range(li[i]):
        print(i)