N = int(input())

li = [i+1 for i in range(N)]

while len(li) != 1:
    for i in reversed(range(0,len(li),2)):
        li.pop(i)
        
        
print(li[0])