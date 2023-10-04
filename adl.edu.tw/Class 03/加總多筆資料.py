nums = [int(input())]
for i in range(nums[0]): nums.append(int(input()))
print(f"總和是{sum(nums[1:])}")