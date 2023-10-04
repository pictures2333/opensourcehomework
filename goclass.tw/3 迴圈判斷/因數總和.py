nums=[]
a=int(input())
for i in range(1, a+1):
    if a%i == 0:
        print(i)
        nums.append(i)
print(f"總和 {sum(nums)}")