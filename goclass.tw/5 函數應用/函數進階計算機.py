def f(a:int, b:int, c:str): return f"{a} {c} {b} = "+str(eval(f"{a} {c} {b}"))
while True:
    a, b, c = int(input()), int(input()), input()
    if c == "end": break
    else: print(f(a, b, c))