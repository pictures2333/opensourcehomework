lines = int(input())
strs = []
for l in range(lines): strs.append(input())

results = {}

for s in strs:
    texts = []
    for t in s: texts.append(t)
    texts = list(set(texts))
    results[s] = len(texts)

print(results)

print(sorted(results.items(), key = lambda kv:(kv[1], kv[0])))  