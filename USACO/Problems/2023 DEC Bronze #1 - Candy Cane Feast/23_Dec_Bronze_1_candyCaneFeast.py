n, M = list(map(int, input().split()))
cowHeights = list(map(int, input().split()))
candyHeights = list(map(int, input().split()))

for caneN in range(M):
    candyBottom = 0
    candyTop = candyHeights[caneN]
    for cowN in range(n):
        # 소가 캔디 케인 하단에 닿을 수 있으면 먹음
        if cowHeights[cowN] > candyBottom:
            # 먹을 수 있는 양 = min(소의 높이, 캔디 상단) - 캔디 하단
            eaten = min(cowHeights[cowN], candyTop) - candyBottom
            cowHeights[cowN] += eaten
            candyBottom += eaten

for cowHeight in cowHeights:
    print(cowHeight)