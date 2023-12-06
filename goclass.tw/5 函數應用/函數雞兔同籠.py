def f(feet:int):
    for i in range(0, (feet//2)+1):
        if (feet-(i*2))%4 == 0: print(f"雞{i}隻,兔{(feet-(i*2))//4}隻,共{feet}隻腳")
f(int(input()))