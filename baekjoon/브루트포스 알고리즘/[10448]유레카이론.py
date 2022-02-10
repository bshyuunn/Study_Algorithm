T = [n*(n+1)//2 for n in range(1, 46)]
li = [0] * 1001

for i in T:
    for j in T:
        for k in T:
            if i+j+k <= 1000:
                li[i+j+k] = 1
                
num = int(input())

for i in range(num):
    print(li[int(input())])    