import math # 匯入Python內建模組: math
a = float(input()) # 以input()函式接收使用者輸入，用float()函數轉換為浮點數後存入a變數

# %.2f 字串格式化-輸出浮點數，到小數點後二位
print("Radius = %.2f"%(a/2)) # 輸出半徑
print("Perimeter = %.2f"%(a*math.pi)) # 輸出圓周長
print("Area = %.2f"%((a/2)*(a/2)*math.pi)) # 輸出圓面積