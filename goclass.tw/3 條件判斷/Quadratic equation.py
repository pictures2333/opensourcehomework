def compute(a, b, c):
    from math import sqrt # 從python內建模組math匯入開根號的部分
    # 計算 & 判斷式
    num = (b*b)-(4*a*c)
    if num < 0: return "Your equation has no root." # R < 0
    elif num == 0: return -b/(2*a) # R = 0
    elif num > 0: return f"{(-b+sqrt(num))/(a*2)}, {(-b-sqrt(num))/(a*2)}" # R >= 0
    # return <內容> - 函式輸出變數

print(compute(int(input()), int(input()), int(input()))) # 接收使用者輸入並傳入compute()，並將傳回值print出來