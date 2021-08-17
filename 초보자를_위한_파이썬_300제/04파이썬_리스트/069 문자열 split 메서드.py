# 회사 이름이 슬래시 ('/')로 구분되어 하나의 문자열로 저장되어 있다.
# string = "삼성전자/LG전자/Naver"
# 이를 interest 이름의 리스트로 분리 저장하라.
# 실행 예시
# >> print(interest)
# $ ['삼성전자', 'LG전자', 'Naver']

string = "삼성전자/LG전자/Naver"
interest = string.split("/")

print(interest)