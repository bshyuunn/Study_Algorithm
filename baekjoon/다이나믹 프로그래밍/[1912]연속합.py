n = int(input())
li = list(map(int, input().split()))

sums = [li[0]]

for i in range(len(li)-1):
    sums.append(max(sums[i] + li[i+1], li[i+1]))
     
print(max(sums)) 