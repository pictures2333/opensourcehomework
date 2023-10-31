a = [None]
while a[-1] != "test": a.append(input())
a = list(map(int, a[1:-1]))
print(f"原始內容是 {a}")
print(f"排序內容是 {sorted(a)}")