cin = list(map(int, input().split()))
p, q, r, m = cin[0], cin[1], cin[2], cin[3]
nerv = [-1]+list(map(int, input().split()))+list(map(int, input().split()))
conn = {}
maxdelay = -1
for i in range(m):
    connInpt = input().split()
    if connInpt[1] in conn: conn[connInpt[1]].append(connInpt[0])
    else: conn[connInpt[1]] = [connInpt[0]]

def findVar(nerv, conn, routeStack, nowOne, p, q, delay): 
    if 0 < nowOne and nowOne < p+1: return routeStack, delay-1
    else:
        if nerv[nowOne] == 4: # NOT
            nextOne = int(conn[str(nowOne)][0]) # 跟這個閘接的
            routeStack.append(nextOne)
            routeStack, delay = findVar(nerv, conn, routeStack, nextOne, p, q, delay+1)
            return routeStack, delay
        else:
            nextOneV1 = int(conn[str(nowOne)][0]) # 跟這個閘接的，拉兩個參數
            nextOneV2 = int(conn[str(nowOne)][1])
            routeStack.append(nextOneV1)
            routeStack, delay1 = findVar(nerv, conn, routeStack, nextOneV1, p, q, 1)
            routeStack.append(nextOneV2)
            routeStack, delay2 = findVar(nerv, conn, routeStack, nextOneV2, p, q, 1)

            if delay1 >= delay2: delay += delay1
            else: delay += delay2
            return routeStack, delay

# compute
opt = ""
for i in range(p+q+1, p+q+r+1): # 用輸出端去推
    # 推電路
    routeStack = [i] # 電路
    nextOne = int(conn[str(i)][0]) # 跟輸出接的那個邏輯閘的編號
    routeStack.append(nextOne)

    delay = 0
    routeStack, delay = findVar(nerv, conn, routeStack, nextOne, p, q, delay+1)

    if delay > maxdelay: maxdelay = delay

    #print(f"{i} RouteStack: {routeStack} | delay: {delay}")

    # 模擬電路
    mem = {}
    for t in reversed(routeStack):
        if 0 < t and t < p+1: mem[t] = nerv[t] # 輸入端子
        elif t > p+q: # 輸出
            v1ptr = int(conn[str(t)][0])
            v1 = mem[v1ptr]
            opt += f"{v1} "
        else:
            if nerv[t] == 4: # NOT
                v1ptr = int(conn[str(t)][0])
                v1 = mem[v1ptr]
                mem[t] = int(not v1)
            else: # AND OR XOR
                v1ptr = int(conn[str(t)][0])
                v2ptr = int(conn[str(t)][1])
                v1 = mem[v1ptr]
                v2 = mem[v2ptr]
                if nerv[t] == 1: # AND
                    if v1 == 1 and v2 == 1: re = 1
                    else: re = 0
                elif nerv[t] == 2: # OR
                    if v1 == 0 and v2 == 0: re = 0
                    else: re = 1
                elif nerv[t] == 3: # XOR
                    if v1 == v2: re = 0
                    else: re = 1
                mem[t] = int(re)
print(maxdelay)
print(opt)