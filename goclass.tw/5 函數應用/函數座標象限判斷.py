def f(x:int, y:int):
    if x == 0 and y == 0: return "原點"
    elif x == 0: return "y軸上"
    elif y == 0: return "x軸上"
    elif x > 0 and y > 0: return "第一象限"
    elif x < 0 and y > 0: return "第二象限"
    elif x < 0 and y < 0: return "第三象限"
    elif x > 0 and y < 0: return "第四象限"
x, y = int(input()), int(input())
print(f"({x},{y})在{f(x, y)}")