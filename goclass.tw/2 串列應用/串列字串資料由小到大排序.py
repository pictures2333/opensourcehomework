a = [None]
while a[-1] != "end": a.append(input())
print(f"原始內容是 {a[1:-1]}")
print(f"排序內容是 {sorted(a[1:-1])}")