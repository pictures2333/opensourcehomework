lines = int(input())
strs = []
for l in range(lines): strs.append(input())

results = {}
rns = []

for s in strs:
    texts = []
    for t in s: texts.append(t)
    texts = list(set(texts))
    results[s] = len(texts)
    rns.append(len(texts))

rns.sort()
ans = []
for i in results:
    if results[i] == rns[0]: ans.append(i)

print(sorted(ans)[0])