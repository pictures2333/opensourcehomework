a = int(input())
b = int(input())

if (a+b)%13==0: print(str(a+b), "是13的倍數") # 如果(a+b)除以13取餘數等於0 => 是13的倍數
else: print(str(a+b), "不是13的倍數")