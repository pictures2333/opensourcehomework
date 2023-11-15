def f(x, y):
    a = []
    for i in range(1, x+1): 
        if x%i == 0: a.append(i)
    b = []
    for i in range(1, y+1):
        if y%i == 0: b.append(i)
    result = []
    for i in a:
        if i in b: result.append(i)
    return sorted(result)[-1]
print(f(int(input()), int(input())))