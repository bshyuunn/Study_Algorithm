t = int(input())
for i in range(t):
    n, m = map(int, input().split())
    queue = list(map(int, input().split()))
    idx = list(range(len(queue)))
    idx[m] = "target"
    
    order = 0
    while True:
        if queue[0] == max(queue):
            order += 1
            
            if idx[0] == "target":
                print(order)
                break
            else:
                queue.pop(0)
                idx.pop(0)
                
        else:
            queue.append(queue.pop(0))
            idx.append(idx.pop(0))