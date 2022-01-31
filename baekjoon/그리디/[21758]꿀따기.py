N = int(input())
li = list(map(int, input().split()))

# 누적합 배열
sums = [li[0]]
for i in range(1, N):
    sums.append(sums[-1]+li[i])

answer = 0

# 첫번 째 경우
for i in range(1, N-1): # i가 B의 인덱스
    sum1 = sums[N-1] - li[0] - li[i] # 벌 A의 꿀
    sum2 = sums[N-1] - sums[i] # 벌 B의 꿀
    
    answer = max(answer, sum1+sum2)
    
# 두번 째 경우    
for i in range(1, N-1):
    sum1 = sums[i] - li[0] # 벌 A의 꿀
    sum2 = sums[N-1] - sums[i-1] - li[N-1] # 벌 B의 꿀
    
    answer = max(answer, sum1 + sum2)


# 세번 째 경우    
for i in range(1, N-1):
    sum1 = sums[N-1] - li[N-1] - li[i] # 벌 A의 꿀
    sum2 = sums[i-1]
    
    answer = max(answer, sum1 + sum2)
        
    
print(answer)