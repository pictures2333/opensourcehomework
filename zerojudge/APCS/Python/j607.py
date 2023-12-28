def f(i:int, data:str):
    sti = i
    tmp = ""
    while data[i] != ")":
        # 碰到函數
        if data[i] == "f":
            fdata, endPoint = f(i+2, data)
            tmp += str(fdata)
            i = endPoint
        else:
            tmp += data[i]
        i += 1
    
    args = tmp.replace(")", "").split(",")
    for a in range(len(args)): args[a] = baseCal(args[a])
    ans = max(args)-min(args)

    return ans, i

def baseCal(ex:str):
    tmp = ""
    ex_f = ""
    while ("+" in ex or "*" in ex or "f(" in ex or ")" in ex):
        i = 0
        while (i < len(ex)):
            if (ex[i] == "*"):
                ex_f += str(eval(tmp)) + "*"
                tmp = ""
            elif (ex[i] == "f"):
                fdata, endPoint = f(i+2, ex)
                tmp += str(fdata)
                i = endPoint
            else: tmp += ex[i]

            i += 1
    
        ex = str(eval(ex_f+str(eval(tmp))))
        ex_f = ""
    return int(ex)

print(baseCal(input()))