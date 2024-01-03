cin = list(map(int, input().split()))
n, m = cin[0], cin[1]

mapM = []
Min = 1000000
minI, minJ = -1, -1
for i in range(n): 
    appData = list(map(int, input().split()))
    if min(appData) < Min:
        Min = min(appData)
        minI, minJ = i, appData.index(min(appData))
    mapM.append(appData)

i, j = minI, minJ
path = []
pathNums = []
path.append((i, j))
pathNums.append(mapM[i][j])
while True:
    waitNlist = [1000000, 1000000, 1000000, 1000000] # 上下左右
    # 偵測最小
    # 上下
    if i > 0: 
        if (i-1, j) not in path: waitNlist[0] = mapM[i-1][j]
    if i < n-1: 
        if (i+1, j) not in path: waitNlist[1] = mapM[i+1][j]
    # 左右
    if j > 0: 
        if (i, j-1) not in path: waitNlist[2] = mapM[i][j-1]
    if j < m-1: 
        if (i, j+1) not in path: waitNlist[3] = mapM[i][j+1]
    
    if waitNlist == [1000000, 1000000, 1000000, 1000000]: break # 囚徒末路

    thatMin = waitNlist.index(min(waitNlist))

    if thatMin == 0: i, j = i-1, j
    elif thatMin == 1: i, j = i+1, j
    elif thatMin == 2: i, j = i, j-1
    elif thatMin == 3: i, j = i, j+1
    path.append((i, j))
    pathNums.append(mapM[i][j])
print(sum(pathNums))