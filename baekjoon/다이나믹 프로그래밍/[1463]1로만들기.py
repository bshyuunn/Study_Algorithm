# 정수 X 입력받기
X = int(input())

# dp 테이블 초기화
d = [0 for i in range(X+1)] 

# 다이나믹 프로그래밍 알고리즘 (보텀 업)
for i in range(2, X+1):
    
    d[i] = d[i-1] + 1
    
    if i % 2 == 0:
        d[i] = min(d[i], d[i // 2] + 1)
    
    if i % 3 == 0:
        d[i] = min(d[i], d[i // 3] + 1)

        
print(d[X])