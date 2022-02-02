word = input().upper()
word_2 = list(set(word))

cnt_list = []
for i in word_2:
    cnt_list.append(word.count(i))

if cnt_list.count(max(cnt_list)) > 1:
    print("?")
else:
    max = cnt_list.index(max(cnt_list))
    print(word_2[max])