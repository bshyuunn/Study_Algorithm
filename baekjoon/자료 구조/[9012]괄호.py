N = int(input())

for _ in range(N):
    ps = list(input())
    stack = []
    empty_stack = False
    
    for i in range(len(ps)):
        if ps[i] == "(":
            stack.append(ps[i])
        else:
            if not stack:
                empty_stack = True
                break
            else:
                stack.pop()
    
    if not stack and not empty_stack:
        print("YES")
    else:
        print("NO")