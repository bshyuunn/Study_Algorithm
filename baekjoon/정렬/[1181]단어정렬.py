N = int(input())

word = set(input() for i in range(N))
word = list(word)

word.sort()
word.sort(key=len)

for i in word:
    print(i)