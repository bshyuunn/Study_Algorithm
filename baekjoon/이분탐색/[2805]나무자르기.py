N, M = map(int, input().split())
tall = list(map(int, input().split()))
start, end = 1, max(tall)


while start <= end:
    mid = (start+end) // 2
    
    log = 0
    for i in tall:
        if i > mid:
            log += i - mid 
    
    if log < M:
        end = mid - 1
    elif log >= M:
        start = mid + 1
        
print(end)