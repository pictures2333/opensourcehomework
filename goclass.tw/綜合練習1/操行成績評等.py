s = int(input())
print(f"{s} ", end="")
if s>=90: print("優等")
elif s >= 80 and s < 90: print("甲等")
elif s >= 70 and s < 80: print("乙等")
elif s >= 60 and s < 70: print("丙等")
else: print("丁等")
