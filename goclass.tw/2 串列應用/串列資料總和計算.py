a = [None]
while a[-1] != "end": a.append(input())
a = list(map(int, a[1:-1]))
print(f"內容是 {a}, 總和 {sum(a)}")