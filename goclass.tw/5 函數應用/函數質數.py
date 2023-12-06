def f(n:int):
    for i in range(2, n):
        if n%i == 0: return False
    return True
for i in range(2, int(input())+1):
    if f(i): print(i)