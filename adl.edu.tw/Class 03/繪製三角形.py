a = int(input())
last = 1
for i in range(1, a+1):
    for j in range(a-i): print(" ", end = "")
    for j in range(last): print("*", end = "")
    print()
    last += 2