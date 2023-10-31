def compute(a:int, b:int):
    lst = []
    for i in range(0, -a, -1):
        lst2 = []
        for j in range(i, b+i): lst2.append(j)
        lst.append(lst2)
    return lst

lst = compute(int(input()), int(input()))
for i in range(len(lst)):
    for j in range(len(lst[i])):
        print("%4d"%(lst[i][j]), end="")
    print()