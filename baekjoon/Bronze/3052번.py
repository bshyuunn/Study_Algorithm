#3052번 - 나머지
a = set()

for i in range(10):
    b = int(input())
    a.add(b % 42)
    
print(len(a))