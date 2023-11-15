def f(x, y): return x, y, x//y, x%y
x, y, r, r2 = f(int(input()), int(input()))
print(f"{x}//{y}={r}\n{x}%{y}={r2}")