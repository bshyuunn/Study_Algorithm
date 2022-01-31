# n 입력받기
n = int(input())

# dp 테이블 초기화
dp = [0 for i in range(21)]
dp[1] = 1
dp[2] = 1

for i in range(3, n+1):
    dp[i] = dp[i-1] + dp[i-2]
    
print(dp[n])