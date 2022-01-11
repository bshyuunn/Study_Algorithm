a = int(input())
now = list(map(int, input().split()))
now = sorted(now)

b = int(input())
find = list(map(int, input().split()))

def binary_search(array, target, start, end):
    while start <= end:
        mid = (start + end) // 2
        # 찾은 경우 중간점 인덱스 반환
        if array[mid] == target:
            return mid
        # 중간점의 값보다 찾고자 하는 값이 작은 경우 왼쪽 확인
        elif array[mid] > target:
            end = mid - 1
        # 중간점의 값보다 찾고자 하는 값이 큰 경우 오른쪽 확인
        else:
            start = mid + 1
    return None
    
result = []

for i in find:
    if binary_search(now, i, 0, a - 1) is None:
        print(0, end = " ")
    else:
        print(1, end=" ")
        