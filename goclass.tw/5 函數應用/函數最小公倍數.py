def f(x:int, y:int):
    nx, ny = 1, 101
    a = []
    b = []
    while True:
        for i in range(nx, ny):
            a.append(x*i)
            b.append(y*i)
        min = None
        for i in a:
            if i in b:
                min = i
                break
        if min != None: return min
        else:
            nx += 100
            ny += 100
print(f(int(input()), int(input())))