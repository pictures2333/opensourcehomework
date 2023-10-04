a2 = 0
tin = int(input())
for a in range(10, tin+1):
    a2 += (1/a)
print("1/10+1/11+1/12+...+1/%d=%.2f"%(tin,a2))