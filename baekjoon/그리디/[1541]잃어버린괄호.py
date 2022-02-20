word = input().split("-")
num = []
for i in word:
    cnt = 0
    s = i.split("+")

    for j in s:
        cnt += int(j)
    num.append(cnt)   

anw = num[0]    

for i in range(1, len(num)):    
    anw -= num[i]

print(anw)
        