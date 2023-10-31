k = int(input())
tl = []
for i in range(k): tl.append(list(map(float, input().split(" "))))
for i in range(k): 
    if max(tl[i])%1 == 0: a = int(max(tl[i]))
    else: a = max(tl[i])
    if min(tl[i])%1 == 0: b = int(min(tl[i]))
    else: b = min(tl[i])
    print(f"{a} - {b} = %.2f"%(a-b))