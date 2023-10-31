a = [None]
while a[-1] != "end": a.append(input())
a = list(map(int, a[1:-1]))
print(f"內容是 {a}, 最大值是 {max(a)}, 最小值是 {min(a)}")