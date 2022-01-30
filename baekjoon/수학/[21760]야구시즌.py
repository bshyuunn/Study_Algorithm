# 시간초과 코드
import sys
N = int(sys.stdin.readline())

for i in range(N):
    N, M, K, D = map(int, sys.stdin.readline().split())
    
    sums = 0
    i = 1
    answer = -1
    while True:
        sums = i*K*N*(M*(M-1))/2 + M*M*i*(N*(N-1))/2 # 자주하는 실수
        i += 1
        if sums > D:
            break
        else:
            answer = sums
    print(int(answer))