#n, m = input().split(" ")
n, m = "4", "7"
n, m = int(n) ,int(m)
map = []
for i in ["0F70000",
"FXJ0000",
"II700X7",
"LJ0HHLJ"]:
    thetext = i
    thetextlist = []
    for t in thetext: thetextlist.append(t)
    map.append(thetextlist)

def search(map, x, y):
    result = [None, None, None, None, None, None, None, None]
    # 左三
    if x > 0:
        if y > 0: result[0] = (x-1, y-1)
        result[3] = (x-1, y)
        if y < len(map)-1: result[5] = (x-1, y+1)
    # 右三
    if x < len(map[0])-1:
        if y > 0: result[2] = (x+1, y-1)
        result[4] = (x+1, y)
        if y < len(map)-1: result[7] = (x+1, y+1)
    # 上一
    if y > 0: result[1] = (x, y-1)
    # 下一
    if y < len(map)-1: result[6] = (x, y+1)

    return result
def connect(map, x, y, re):
            result = [None, None, None, None, None, None, None, None]

            if map[y][x] == "F":
                result[4]=(re[4])
                result[6]=(re[6])
            if map[y][x] == "H":
                result[3]=(re[3])
                result[4]=(re[4])
            if map[y][x] == "7":
                result[3]=(re[3])
                result[6]=(re[6])
            if map[y][x] == "I":
                result[1]=(re[1])
                result[6]=(re[6])
            if map[y][x] == "X":
                result[3]=(re[3])
                result[4]=(re[4])
                result[1]=(re[1])
                result[6]=(re[6])
            if map[y][x] == "L":
                result[1]=(re[1])
                result[4]=(re[4])
            if map[y][x] == "J":
                result[1]=(re[1])
                result[3]=(re[3])
            if map[y][x] == "0": 
                result = [None, None, None, None, None, None,None, None]
            return result

#print(connect(map, 2, 1, search(map, 2, 1)))

blocks = []
temp = []
for i in range(n):
    for j in range(m):
        c_anl = connect(map, j, i, search(map, j, i))
        if map[i][j] == "I": print(str(c_anl)+"\n"+str(blocks)+"\n========")
        # 檢查是否有跟其他的連接
        sure = True
        for b in range(len(blocks)):
            for b2 in range(len(blocks[b])):
                for n2, c in enumerate(c_anl):
                    #print(n2, c)
                    if c != None:
                        con = False
                        if c[0] == blocks[b][b2][0] and c[1] == blocks[b][b2][1]:
                            if map[i][j] == "0": con = False
                            elif map[i][j] == "F":
                                if n2 == 4 and (map[c[1]][c[0]] =="H" or map[c[1]][c[0]]=="7" or map[c[1]][c[0]]=="X" or map[c[1]][c[0]]=="J"): con = True
                                elif n2 == 6 and (map[c[1]][c[0]] =="I" or map[c[1]][c[0]]=="L" or map[c[1]][c[0]]=="X" or map[c[1]][c[0]]=="J"): con = True
                            elif map[i][j] == "H":
                                if n2 == 3 and (map[c[1]][c[0]] =="F" or map[c[1]][c[0]]=="H" or map[c[1]][c[0]]=="X" or map[c[1]][c[0]]=="L"): con = True
                                elif n2 == 4 and (map[c[1]][c[0]] == "H" or map[c[1]][c[0]]=="7" or map[c[1]][c[0]]=="X" or map[c[1]][c[0]]=="J"): con = True
                            elif map[i][j] == "7":
                                if n2 == 3 and (map[c[1]][c[0]] == "F" or map[c[1]][c[0]]=="H" or map[c[1]][c[0]]=="X" or map[c[1]][c[0]]=="L"): con = True
                                elif n2 == 6 and (map[c[1]][c[0]] == "I" or map[c[1]][c[0]]=="L" or map[c[1]][c[0]]=="X" or map[c[1]][c[0]]=="J"): con = True
                            elif map[i][j] == "I":
                                #print(n, c)
                                if n2 == 1 and (map[c[1]][c[0]] == "F" or map[c[1]][c[0]]=="7" or map[c[1]][c[0]]=="X" or map[c[1]][c[0]]=="I"): con = True
                                elif n2 == 6 and (map[c[1]][c[0]] == "I" or map[c[1]][c[0]]=="L" or map[c[1]][c[0]]=="X" or map[c[1]][c[0]]=="J"): con = True
                            elif map[i][j] == "X":
                                if n2 == 1 and (map[c[1]][c[0]] == "F" or map[c[1]][c[0]]=="7" or map[c[1]][c[0]]=="X" or map[c[1]][c[0]]=="I"): con = True
                                elif n2 == 6 and (map[c[1]][c[0]] == "I" or map[c[1]][c[0]]=="L" or map[c[1]][c[0]]=="X" or map[c[1]][c[0]]=="J"): con = True
                                elif n2 == 3 and (map[c[1]][c[0]] == "F" or map[c[1]][c[0]]=="H" or map[c[1]][c[0]]=="X" or map[c[1]][c[0]]=="L"): con = True
                                elif n2 == 4 and (map[c[1]][c[0]] == "H" or map[c[1]][c[0]]=="7" or map[c[1]][c[0]]=="X" or map[c[1]][c[0]]=="J"): con = True
                            elif map[i][j] == "L":
                                if n2 == 1 and (map[c[1]][c[0]] == "F" or map[c[1]][c[0]]=="7" or map[c[1]][c[0]]=="X" or map[c[1]][c[0]]=="I"): con = True
                                elif n2 == 4 and (map[c[1]][c[0]] == "H" or map[c[1]][c[0]]=="7" or map[c[1]][c[0]]=="X" or map[c[1]][c[0]]=="J"): con = True
                            elif map[i][j] == "J":
                                if n2 == 3 and (map[c[1]][c[0]] == "H" or map[c[1]][c[0]]=="F" or map[c[1]][c[0]]=="X" or map[c[1]][c[0]]=="L"): con = True
                                elif n2 == 1 and (map[c[1]][c[0]] == "I" or map[c[1]][c[0]]=="F" or map[c[1]][c[0]]=="X" or map[c[1]][c[0]]=="7"): con = True
                        
                        if con:
                            sure = False
                            blocks[b].append((j ,i))
                            break
                if sure == False: break
            if sure == False: break
        if sure: blocks.append([(j, i)])
print(blocks)

lenlist = []
for b in blocks: 
     lenlist.append(len(b))
print(max(lenlist))

# 偵測可能會因為 0 而影響到