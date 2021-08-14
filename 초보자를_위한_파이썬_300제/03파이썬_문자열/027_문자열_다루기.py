# url 에 저장된 웹 페이지 주소에서 도메인을 출력하세요.
# >> url = "http://sharebook.kr"
# 실행 예: kr

url = "http://sharebook.kr"
url = url.split('.') # ['http://sharebook', 'kr']

print(url[1])
# split 라는 메소드를 사용하면 특정 문자를 기준으로 분리하여 리스트로 만들 수 있다.
