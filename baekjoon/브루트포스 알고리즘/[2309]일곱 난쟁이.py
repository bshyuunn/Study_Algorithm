tall = [int(input()) for i in range(9)]
sum_tall = sum(tall)

for i in range(8):
    for j in range(i+1, 9):
        answer = sum_tall - tall[i] - tall[j]
        
        if answer == 100:
            num1, num2 = tall[i], tall[j]
            tall.remove(num1)
            tall.remove(num2)
            for i in sorted(tall):
                print(i)
            break
    if answer == 100:
        break