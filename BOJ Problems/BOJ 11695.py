#https://www.acmicpc.net/problem/11659
#BOJ - 11695
#구간 합 구하기 4

#시간 초과

n, m = list(map(int, input().split()))

num = list(map(int, input().split()))
prefix_sum = [0] * (n)

prefix_sum[0] = num[0]
for i in range(0, n):
    prefix_sum[i] = prefix_sum[i - 1] + num[i]

for i in range(m):
    a, b = list(map(int, input().split()))
    if a > 1:
        print (prefix_sum[b - 1] - prefix_sum[a - 2])
    else:
        print (prefix_sum[b - 1])
    