x, n = input().split(" ")
map = list(map(int, input().split(" ")))
x = int(x)
n = int(n)
map.sort()

left, right = [], []
for m in map:
    if m > x: right.append(m)
    elif m < x: left.append(m)
if len(left) > len(right): print(int(len(left)), left[0])
elif len(left) < len(right): print(int(len(right)), right[len(right)-1])