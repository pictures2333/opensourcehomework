nums = [None]
while nums[-1] != 999999: nums.append(int(input()))
print(min(nums[1:-1]))