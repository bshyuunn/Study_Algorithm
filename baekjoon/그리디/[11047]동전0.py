num, money = map(int, input().split())
count = 0

value_list = sorted([int(input()) for _ in range(num)], reverse = True)


for i in range(num):
    count += money // value_list[i]
    money %= value_list[i]

print(count)