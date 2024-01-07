cin = list(map(int, input().split()))
m, n, k = cin[0], cin[1], cin[2]
room = []
for i in range(m):
    r = []
    for j in input(): r.append(j)
    room.append(r)

pos, path = [m-1, 0], ""
for i in list(map(int, input().split())):
    if i == 0 and pos[0]-1 >= 0: pos[0] -= 1
    elif i == 1 and pos[1]+1 < n: pos[1] += 1
    elif i == 2 and pos[0]+1 < m and pos[1]+1 < n: 
        pos[0]+=1
        pos[1]+=1
    elif i == 3 and pos[0]+1 < m: pos[0]+=1
    elif i == 4 and pos[1]-1 >= 0: pos[1]-=1
    elif i == 5 and pos[0]-1 >= 0 and pos[1]-1 >= 0: 
        pos[0]-=1
        pos[1]-=1
    path += room[pos[0]][pos[1]]
print(path+"\n"+str(int(len(list(set(path))))))