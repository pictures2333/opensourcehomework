def f(a:int, b:int):
    alist = []
    for i in range(1, a+1):
        if a%i == 0: alist.append(i)
    
    blist = []
    for i in range(1, b+1):
        if b%i == 0: blist.append(i)
    
    resultList = []
    for i in range(len(alist)):
            if alist[i] in blist: resultList.append(alist[i])
    resultList = sorted(list(set(resultList)), reverse = True)
    
    print(f"{a} / {b} = {a//resultList[0]} / {b//resultList[0]}")
f(int(input()), int(input()))