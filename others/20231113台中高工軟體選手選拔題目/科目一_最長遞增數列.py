qs = int(input())
qqs = []

for i in range(qs): qqs.append(list(map(int, input().split(", "))))
ans = []

for nums in qqs:
    results = []

    r = []
    for i, n in enumerate(nums):
        if i == 0 or len(r) == 0: r.append(n)
        else:
            if n > r[-1]: r.append(n)
            else:
                if len(r) == 1: pass
                else: results.append(r)
                r = [n]
        if i == len(nums)-1: results.append(r)

    for i, n in enumerate(results): 
        if len(n) == 1: results[i] = 0
        else: results[i] = sum(n)
    ans.append(sorted(results)[-1])
for a in ans: print(a)