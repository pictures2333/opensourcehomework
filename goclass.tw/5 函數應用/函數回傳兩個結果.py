def f(x, y): return x, y, x+y, x-y
x, y, r1, r2 = f(int(input()), int(input()))
print(f"{x}+{y}={r1}\n{x}-{y}={r2}")