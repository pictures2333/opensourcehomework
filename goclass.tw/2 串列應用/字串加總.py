a = input().split(" ")
for i in a: print(i)
a = list(map(int, a))
print(f"Total = {sum(a)}\nAverage = {sum(a)/len(a)}")