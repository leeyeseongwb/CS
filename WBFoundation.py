"""import random

# 1부터 10까지의 숫자 중 3개를 중복 없이 뽑기
result = random.sample(range(16, 35), 18)
print(result)

result = random.sample(range(1, 16), 15)
print(result)"""


l = list(map(int, input().split()))

l.sort()

for i in l:
    print(i, end=', ')