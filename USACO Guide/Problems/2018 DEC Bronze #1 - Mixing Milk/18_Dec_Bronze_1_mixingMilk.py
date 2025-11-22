#파일 실행시 반드시 폴더 맨 앞으로 보내야함. CS 폴더로 보내기. 아니면 오류 남

totalOperation = 100
numBucket = 3

capacity = [0 for _ in range(numBucket)]
amount = [0 for _ in range(numBucket)]

mixmilkIn = open('mixmilk.in', 'r', encoding='utf-8')
for i in range(numBucket):
    capacity[i], amount[i] = map(int, mixmilkIn.readline().split())

for i in range(totalOperation):
    bucket1 = i % 3
    bucket2 = (i + 1) % 3
    amountPour = min(capacity[bucket2] - amount[bucket2], amount[bucket1])
    amount[bucket1] -= amountPour
    amount[bucket2] += amountPour

mixmilkOut = open('mixmilk.out', 'w', encoding='utf-8')
for m in amount:
    mixmilkOut.write(str(m) + "\n")
