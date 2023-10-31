a = input()
if a.isalpha(): # 如果是英文字母
    if a.upper() == a: print(f"{a} is a capital letter.") # 如果是大寫
    elif a.lower() == a: print(f"{a} is a lowercase letter.") # 如果是小寫
elif a.isdigit(): print(f"{a} is a number.") # 如果是數字
else: print(f"{a} is a symbol.") # 如果不符合以上條件=>特殊字元