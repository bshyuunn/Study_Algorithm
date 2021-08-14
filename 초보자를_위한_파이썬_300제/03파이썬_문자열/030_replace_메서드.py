# 아래 코드의 실행 결과를 예상해보세요.
# >> string = 'abcd'
# >> string.replace('b', 'B')
# >> print(string)

string = 'abcd'
string.replace('b', 'B')
print(string)
# abcd 그대로 출력
# 문자열은 변경할 수 없는 자료형이기 때문입니다. 
# replace 메서드를 사용하면 원본은 그대로 둔채로 변경된 새로운 문자열 객체를 리턴해줍니다.
# string = string.replace("b", "B")면은 가능