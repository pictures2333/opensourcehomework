n = int(input())
pair = []

c = []
for i in range(n):
    c.append(input())
    if i > 0:
        for j in range(0, i):
            if len(c[i]+c[j])%2 == 0 and (c[i]+c[j])[0:int(len(c[i]+c[j])//2)] == (c[i]+c[j])[int(len(c[i]+c[j])//2):]: pair.append((i, j))
print(len(pair))