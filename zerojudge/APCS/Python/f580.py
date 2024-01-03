cin = list(map(int,input().split()))
n, m = cin[0], cin[1]

dices = [[1, 5, 3, 2, 4, 6] for _ in range(n)]

#   3
# 5 1 2 6
#   4
#
# FRONT
#   6
# 5 3 2 4
#   1

# RIGHT
#   3
# 6 5 1 2
#   4
#
# FRONT
#   2
# 6 3 1 4
#   5
#

for i in range(m):
    cin = list(map(int,input().split()))
    a, b = cin[0], cin[1]

    if b > 0: dices[a-1], dices[b-1] = dices[b-1], dices[a-1]
    # Front
    elif b == -1: dices[a-1][4], dices[a-1][5], dices[a-1][2], dices[a-1][0] = dices[a-1][0], dices[a-1][4], dices[a-1][5], dices[a-1][2]
    
    # RIGHT
    elif b == -2: dices[a-1][3], dices[a-1][5], dices[a-1][1], dices[a-1][0] = dices[a-1][0], dices[a-1][3], dices[a-1][5], dices[a-1][1]
for i in range(n): print(dices[i][0], end=" ")