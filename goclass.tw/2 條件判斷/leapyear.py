year = int(input()) # 接收使用者輸出
if (year%4==0 and year%100!=0) or year%400==0: print(str(year), "is a leap year.")
else: print(str(year), "is not a leap year.")
# [如果year除4取餘數結果為0(4的倍數) 且 year除100取餘數結果不是0(不是100的倍數)] 或是 year除400取餘數結果為0(400的倍數)