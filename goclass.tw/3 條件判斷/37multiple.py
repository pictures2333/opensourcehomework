num = int(input())

# 如果(被除數)除以(除數)的餘數等於0 => (被除數)是(除數)的倍數
# 例如 21除以3=7...0 => 21是3的倍數
# 例如 69除以5=13...4 => 69不是5的倍數
if num%3 == 0 and num%7 == 0: print(str(num),"is a multiple of 3 and 7.") # 如果同時滿足 是3的倍數 跟 是7的倍數
elif num%3 == 0: print(str(num),"is a multiple of 3.") # 如果只有滿足 是3的倍數
elif num%7 == 0: print(str(num),"is a multiple of 7.") # 如果只有滿足 是7的倍數
else: print(str(num),"is not a multiple of 3 or 7.") # 如果條件皆不滿足