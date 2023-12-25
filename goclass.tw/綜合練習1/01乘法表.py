count = int(input(""))
for i in range(1, count+1):
    for j in range(1, count+1):
        print("%d * %d = "%(j, i), end="")
        if (j*i > 9): print("%2d "%(i*j), end="")
        else: print("%d  "%(i*j), end="")
    print()