"""import random

print ("남자:")
result = random.sample(range(1, 16), 15)
print(result)

print ("여자:")
result = random.sample(range(16, 34), 18)
print(result)
"""

l = list(map(int, input().split()))

l.sort()

for i in l:
    print(i, end=', ')