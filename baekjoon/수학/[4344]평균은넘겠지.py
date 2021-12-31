N = int(input())

for i in range(N):
    case = list(map(int, input().split()))
    avg = sum(case[1:]) / case[0] # 평균을 구함
    count = 0
    for _ in case[1:]:
        if avg < _:
            count += 1 # 평균 이상의 학생
    rate = count / case[0]
    print('{:.3%}'.format(rate)) # 소수 셋째자리까지 출력