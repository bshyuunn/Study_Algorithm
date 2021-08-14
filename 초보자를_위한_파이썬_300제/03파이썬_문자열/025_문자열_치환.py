# 아래의 전화번호에서 하이푼 ('-')을 제거하고 출력하세요.
# >> phone_number = "010-1111-2222"
# 실행 : 010 1111 2222

phone_number = "011-1111-2222"
phone_number = phone_number.replace("-", " ")

print(phone_number)
# replace라는 메소드를 사용하여 기존의 문자를 다른 문자로 치환해줄 수 있다.