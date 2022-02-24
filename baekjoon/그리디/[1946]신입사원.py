import sys
input = sys.stdin.readline
t = int(input())

for i in range(t):
    n = int(input())    
    score = sorted([list(map(int, input().split())) for i in range(n)], key=lambda x:x[0])
    
    cnt = 1
    max = score[0][1]
    
    for j in range(1, n):
        if max > score[j][1]:
            cnt+= 1
            max = score[j][1]
            
    print(cnt)            