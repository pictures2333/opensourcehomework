m, n = int(input()), int(input())
found = False
for i in range(m, n+1):
    if i%3 == 2 and i%5 == 2 and i%7 == 2: 
        print(f"可能人數有 {i} 人")
        found = True
if not(found): print("不存在解")