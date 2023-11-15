def f(name:str, gender:int): 
    for i in range(3):
        if gender == 1: print(f"{name}先生,歡迎光臨!")
        elif gender == 0: print(f"{name}小姐,歡迎光臨!")
f(input(), int(input()))