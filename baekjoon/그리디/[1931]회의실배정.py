n = int(input())

time = [list(map(int, input().split())) for i in range(n)]
time.sort(key = lambda x: (x[1], x[0]))

cnt = 1
end_time = time[0][1]

for i in range(1, n):
    if time[i][0] >= end_time:
        cnt += 1
        end_time = time[i][1]

print(cnt)