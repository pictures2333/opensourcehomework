distance = float(input())
if (distance < 1.25): total = 90
else:  total = 90 + ((distance-1.25)//0.25)*5
print(f"車資為 {float(total)}")