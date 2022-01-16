from collections import deque
import sys

n = int(sys.stdin.readline())

queue = deque()

for i in range(n):
    command = sys.stdin.readline().split()
    
    if command[0] == "push":
        queue.append(command[1])
    if command[0] == "pop":
        if len(queue) == 0:
            print(-1)
        else:
            print(queue.popleft())
    if command[0] == "size":
        print(len(queue))
    if command[0] == "empty":
        if len(queue) == 0:
            print(1)
        else:
            print(0)
    if command[0] == "front":
        if len(queue) == 0:
            print(-1)
        else:
            print(queue[0])
    if command[0] == "back":
        if len(queue) == 0:
            print(-1)
        else:
            print(queue[-1])
