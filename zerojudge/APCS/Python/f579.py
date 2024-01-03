cin = list(map(int, input().split()))
a, b = cin[0], cin[1]

n = int(input())
total = 0
for i in range(n):
    nums = list(map(int, input().split()[:-1]))
    if nums.count(a) > 0 and nums.count(b) > 0:
        if nums.count(a) > nums.count((-1)*a) and nums.count(b) > nums.count((-1)*b): total += 1
print(total)