def f(times:int, ex:str, sti:int, total:int, pos:int):
    i = sti
    eni = 0
    while (times != 0):
        if ex[i] == "T":
            total += abs(pos-int(ex[i+1]+ex[i+2]))
            pos = int(ex[i+1]+ex[i+2])
            i+=2
        elif ex[i] == "L":
            total, pos, i = f(int(ex[i+1]), ex, i+2, total, pos) ###
        elif ex[i] == "E":
            times -= 1
            eni = i
            i = sti-1
        i+=1
    return total, pos, eni

ex = input()
pos = int(ex[1]+ex[2])
total = 0

i = 3
while (i < len(ex)):
    if ex[i] == "T":
        total += abs(pos-int(ex[i+1]+ex[i+2]))
        pos = int(ex[i+1]+ex[i+2])
        i+=2
    elif ex[i] == "L":
        total, pos, i = f(int(ex[i+1]), ex, i+2, total, pos) ###
    i+=1
print(total)