row, column = input().split(" ")
row = int(row)
column = int(column)

nums = []
for i in range(row):
    nums.append(list(map(int, input().split(" "))))

nums2 = []
for i in range(column): nums2.append([])
for i in range(row):
    for j in range(column):
        nums2[j].append(nums[i][j])

for i in range(len(nums2)):
    for j in range(len(nums2[i])):
        print(nums2[i][j], end = " ")
    print()