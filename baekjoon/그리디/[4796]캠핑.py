i = 0

while True:
    i += 1
    L, P, V = map(int, input().split())

    if L == 0 and P == 0 and V == 0:
        break

    n = V // P
    
    answer = n*L
    
    if V % P <= L:
        answer += V % P
    elif V % P > L:
        answer += L
    print("Case", str(i) + ":",answer)