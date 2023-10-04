a = int(input())
last = 1
for i in range(1,a+1):
    print(" "*(a-i), end="")
    for j in range(1, last+1): print(j, end="")
    last += 2
    print("")