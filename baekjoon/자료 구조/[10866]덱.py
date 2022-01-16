from collections import deque
import sys

dq = deque()

def empty():
    if len(dq) == 0:
        return 1
    else:
        return 0

n = int(input())
        
for i in range(n):
    cmd = sys.stdin.readline().split()
    
    if cmd[0] == "push_front":
        dq.appendleft(cmd[1])
    if cmd[0] == "push_back":
        dq.append(cmd[1])
    if cmd[0] == "pop_front":
        if empty() == 1:
            print(-1)
        else:
            print(dq.popleft())
    if cmd[0] == "pop_back":
        if empty() == 1:
            print(-1)
        else:
            print(dq.pop())
    if cmd[0] == "size":
        print(len(dq))
    if cmd[0] == "empty":
        print(empty())
    if cmd[0] == "front":
        if empty() == 1:
            print(-1)
        else: 
            print(dq[0])
    if cmd[0] == "back":
        if empty() == 1:
            print(-1)
        else:
            print(dq[-1])