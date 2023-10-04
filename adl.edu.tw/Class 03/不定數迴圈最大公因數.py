def compute(x, y):
    nx = []
    for i in range(1, x+1):
        if x%i == 0: nx.append(i)
    
    ny = []
    for i in range(1, y+1):
        if y%i == 0: ny.append(i)
    
    nums = []
    for i in nx:
        for j in ny: 
            if i == j: nums.append(j)
    
    return max(list(set(nums)))
nums = ["None"]
while not("-9999" in nums[-1]): nums.append(input())
for n in nums[1:-1]: 
    a = n.split(",")
    print(compute(int(a[0]), int(a[1])))