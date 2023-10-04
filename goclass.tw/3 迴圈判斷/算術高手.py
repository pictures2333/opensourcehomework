nums = [None]
while nums[-1] != 0: nums.append(int(input()))
for i in nums:
    if i != None and i != 0: print(f"{i}+{50-i}=50")