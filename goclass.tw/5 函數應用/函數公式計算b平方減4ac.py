def f(a:int, b:int, c:int): return b*b-4*a*c
a, b, c = input().split(",")
print(f(int(a), int(b), int(c)))