num = int(input())

for i in range(1, num+1):
    a = list(map(int, str(i)))
    
    sum_ = i + sum(a)

    if sum_ == num:
        print(i)
        break

    if i == num:
        print(0)