def f(x:int, y:int):
    if x > y: print(f"{x} 大於 {y}")
    elif x < y: print(f"{x} 小於 {y}")
    elif x == y: print(f"{x} 等於 {y}")

while True:
    a = input().split(",")
    if int(a[0]) == 999 and int(a[1]) == 999: break
    else: f(int(a[0]), int(a[1]))