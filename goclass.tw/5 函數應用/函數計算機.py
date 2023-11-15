def f(x:int, y:int, z:str): return f"{x} {z} {y} = "+str(eval(f"{x}{z}{y}"))
print(f(int(input()), int(input()), input()))