n = int(input())
chs, chnames = [], []
for i in range(n):
    inpt = input()
    chnames.append(inpt)
    chs.append(int(inpt.split()[0])*int(inpt.split()[0])+int(inpt.split()[1])*int(inpt.split()[1]))

while True:
    found = False
    for i in range(n-1):
        if chs[i] < chs[i+1]:
            chs[i], chs[i+1] = chs[i+1], chs[i]
            chnames[i], chnames[i+1] = chnames[i+1], chnames[i]
            found = True
    if not found: break
print(chnames[1])