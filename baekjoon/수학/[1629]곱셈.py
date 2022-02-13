def squar(A, B, C):
    if B == 1:
        return A%C
    
    else:
        temp = squar(A, B //2, C)
        if B % 2 == 0: # B가 짝수이면
            return temp * temp % C
        if B % 2 == 1: # B가 홀수이면
            return temp * temp * A % C

A, B, C = map(int, input().split())

print(squar(A, B, C))