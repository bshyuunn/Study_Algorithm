h1, m1, s1 = map(int, input().split(":"))
h2, m2, s2 = map(int, input().split(":"))

time1 = (h1*3600) + (m1*60) + (s1)
time2 = (h2*3600) + (m2*60) + (s2)

if time1 >= time2:
    time2 += 3600*24

answer = time2 - time1

h = answer // 3600
answer %= 3600

m = answer // 60
answer %= 60

s = answer

print("%02d:%02d:%02d"%(h,m,s))