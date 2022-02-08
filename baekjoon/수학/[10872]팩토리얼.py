fac = int(input()) # fac = 10

answer = 1
if fac > 0:
    for i in range(1, fac+1):
        answer *= i
       
print(answer)    