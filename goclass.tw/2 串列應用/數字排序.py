a = []
for i in range(10): a.append(int(input()))
print(" ".join(list(map(str, sorted(a, reverse=True)[:3]))))