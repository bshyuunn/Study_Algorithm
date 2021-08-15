# 파일 이름이 문자열로 저장되어 있을 때 endswith 메서드를 사용해서 파일 이름이 'xlsx' 또는 'xls'로 끝나는지 확인해보세요.
# file_name = "보고서.xlsx"

file_name = "보고서.xlsx"

print(file_name.endswith(("xlsx", "xls")))
# endswith가 여러개의 접미사를 확인하려면 endwith(("a", "b"))