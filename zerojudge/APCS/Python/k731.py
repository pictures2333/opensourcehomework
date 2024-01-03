direction = "right"
x, y = 0, 0
tl, tr, rt = 0, 0, 0
for i in range(int(input())):
    tpos = list(map(int, input().split()))
    tx, ty = tpos[0], tpos[1]
    if direction == "right":
        # 水平移動
        if y == ty:
            if tx < x: 
                direction = "left"
                rt += 1
        # 垂直移動
        elif x == tx:
            if ty > y:
                direction = "top"
                tl += 1
            elif ty < y:
                direction = "bottom"
                tr += 1
    elif direction == "left":
        # 水平移動
        if y == ty:
            if tx > x: 
                direction = "right"
                rt += 1
        # 垂直移動
        elif x == tx:
            if ty > y:
                direction = "top"
                tr += 1
            elif ty < y:
                direction = "bottom"
                tl += 1
    elif direction == "top":
        # 水平移動
        if y == ty:
            if tx > x: 
                direction = "right"
                tr += 1
            elif tx < x:
                direction = "left"
                tl += 1
        # 垂直移動
        elif x == tx:
            if ty < y:
                direction = "bottom"
                rt += 1
    elif direction == "bottom":
        # 水平移動
        if y == ty:
            if tx > x: 
                direction = "right"
                tl += 1
            elif tx < x:
                direction = "left"
                tr += 1
        # 垂直移動
        elif x == tx:
            if ty > y:
                direction = "top"
                rt += 1
    x, y = tx, ty
print(tl, tr, rt)