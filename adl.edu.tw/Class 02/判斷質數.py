a = int(input())
for i in range(2, a):
    if a%i == 0: 
        print(f"{int(a)}不是質數!")
        exit()
print(f"{int(a)}是質數!")