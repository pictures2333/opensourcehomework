a = [None]
while a[-1] != "end": a.append(input())
for n, i in enumerate(a[1:-1]): print(f"第 {n+1} 項內容是 {i}")