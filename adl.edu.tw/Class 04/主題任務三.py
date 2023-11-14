a = [None]
while a[-1] != "no number": a.append(input())
a = sorted(list(map(int, a[1:-1])))
print(f"最大值: {max(a)} | 最小值: {min(a)} | 第四大的數字: {a[-4]} | 第二小的數字: {a[1]}")