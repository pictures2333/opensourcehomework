# 接收使用者輸入的數字後以判斷式判斷奇偶數
# % 運算子 可以取除法計算結果之餘數
# 如果餘數 == 0: 偶數；如果餘數 != 0: 奇數
a = int(input())
if a%2 != 0: print(f"{a} is an odd number.")
else: print(f"{a} is not an odd number.")