n = int(input())
nums = list(map(int, input().split()))

total = 0
for i in range(1, n+1):
    x = nums.index(i)
    
    nums2 = nums[x+1:]
    x2 = x + nums2.index(i)+1

    low = nums[x+1: x2]

    for l in low:
        if l < i: total += 1
print(total)