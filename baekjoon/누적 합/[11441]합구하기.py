import sys

N1 = int(sys.stdin.readline()) # 5

nums = list(map(int, sys.stdin.readline().split())) # [10, 20, 30, 40, 50]
sums = [nums[0]] #누적합 array # [10]

for i in range(1 ,N1): # 1, 2, 3, 4
    sums.append(sums[-1]+nums[i]) # [10, 30, 60, 100, 150]
    

N2 = int(sys.stdin.readline())

for i in range(N2):
    i, j = map(int, sys.stdin.readline().split())
    
    if i == 1:
        print(sums[j-1])
    else:
        print(sums[j-1] - sums[i-2])