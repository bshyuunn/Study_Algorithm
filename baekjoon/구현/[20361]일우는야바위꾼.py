N, X, K = map(int, input().split())

for i in range(K):
    change = list(map(int, input().split()))
    if X in change: # 바꾸는 수에 정답이 있다면
        change.remove(X) # 리스트 안의 정답 삭제 후
        X = change[0] # 정답을 나머지 숫자로 변환

print(X)