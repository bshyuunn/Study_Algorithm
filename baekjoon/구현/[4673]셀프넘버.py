or_num = set(range(1, 10001))
ge_num = set()

for i in or_num:
    for j in str(i):
        i += int(j)
    ge_num.add(i)
    
self_num = sorted(or_num - ge_num)
for i in self_num:
    print(i)