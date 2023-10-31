a = [None]
while a[-1] != -1: a.append(int(input()))
a = tuple(a[1:-1])
print(f"{a}\nLength: {int(len(a))}\nMax: {max(a)}\nMin: {min(a)}\nSum: {sum(a)}")