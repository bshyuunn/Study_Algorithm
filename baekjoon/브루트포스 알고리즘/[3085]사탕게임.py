def check(color, row_1, row_2, col_1, col_2):
    result = 1
    n = len(color)
    for i in range(row_1, row_2 + 1):
        cnt = 1
        for j in range(n - 1):
            if color[i][j] == color[i][j+1]:
                cnt += 1
            else:
                cnt = 1
            if result < cnt:
                result = cnt
    for j in range(col_1, col_2+1):
        cnt = 1
        for i in range(n-1):
            if color[i][j] == color[i+1][j]:
                cnt += 1
            else:
                cnt = 1
            if result < cnt:
                result = cnt
    return result     
            
        
n = int(input())
color = [list(input()) for i in range(n)]

result = 0
for i in range(n):

    for j in range(n):     
        if j < n-1:
            color[i][j], color[i][j+1] = color[i][j+1], color[i][j]
            temp = check(color, i, i, j, j+1)
            if temp > result:
                result = temp
            color[i][j], color[i][j+1] = color[i][j+1], color[i][j]

        if i < n-1:
            color[i][j], color[i+1][j] = color[i+1][j], color[i][j]
            temp = check(color, i, i+1, j, j)
            if temp > result:
                result = temp
            color[i][j], color[i+1][j] = color[i+1][j], color[i][j] 
        
print(result)       