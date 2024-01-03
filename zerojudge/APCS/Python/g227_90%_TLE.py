n = int(input())
nums = list(map(int, input().split()))

l, r = 0, n
while True:
    minIndex = nums.index(min(nums[l:r]))
    lSum = sum(nums[l: minIndex])
    rSum = sum(nums[minIndex+1: r])
    if lSum <= rSum: l = minIndex+1
    elif lSum > rSum: r = minIndex
    #print(l, r-1)
    if (l == r-1): break
print(nums[l])