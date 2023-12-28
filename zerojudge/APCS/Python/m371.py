n, m = input().split(" ") # n * m = h * w
map = []
for i in range(int(n)): map.append(input().split(" "))

score = 0
while True:
    nothing = True
    # 橫行
    for i in range(int(n)):
        has = None # put index
        for j in range(int(m)):
            if j == 0 and map[i][j] != None: has = j
            if j != 0:
                if map[i][j] != None:
                    if has == None: has = j
                    else:
                        if map[i][j] == map[i][has]:
                            score += int(map[i][j])
                            map[i][j], map[i][has] = None, None
                            has = None
                            nothing = False
                        else: has = j

    # 直行
    for j in range(int(m)):
        has = None # put index
        for i in range(int(n)):
            if i == 0 and map[i][j] != None: has = i
            if i != 0:
                if map[i][j] != None:
                    if has == None: has = i
                    else:
                        if map[i][j] == map[has][j]:
                            score += int(map[i][j])
                            map[i][j], map[has][j] = None, None
                            has = None
                            nothing = False
                        else: has = i
    if nothing: break

print(score)