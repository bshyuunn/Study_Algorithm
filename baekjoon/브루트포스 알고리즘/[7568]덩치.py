n = int(input())
li = [list(map(int, input().split())) for i in range(n)]

sor = [0]*n

for i in range(len(li)):
    for j in range(i+1, len(li)):
        if li[i][0] > li[j][0]:
            if li[i][1] > li[j][1]:
                sor[j] += 1    
            
        elif li[i][0] < li[j][0]:
            if li[i][1] < li[j][1]:
                sor[i] += 1
                
for i in sor:
    print(i+1, end=" ")