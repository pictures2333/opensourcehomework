data = list(map(int, input().split()))
n = data[0]
m = data[1]

fight = list(map(int, input().split()))
react = list(map(int, input().split()))
indexes = list(map(int, input().split()))
fail = [0 for i in range(n)]

# compute
i = 0
newIndex_win = []
newIndex_fail = []
while True:
    a = fight[indexes[i]-1]
    b = react[indexes[i]-1]

    c = fight[indexes[i+1]-1]
    d = react[indexes[i+1]-1]

    # A贏
    if a*b >= c*d:
        fight[indexes[i]-1] = a + c*d//(2*b)
        react[indexes[i]-1] = b + c*d//(2*a)

        fight[indexes[i+1]-1] = c + c//2
        react[indexes[i+1]-1] = d + d//2

        fail[indexes[i+1]-1] += 1

        newIndex_win.append(indexes[i])
        if fail[indexes[i+1]-1] < m: newIndex_fail.append(indexes[i+1])
    # B贏
    elif a*b < c*d:
        fight[indexes[i]-1] = a + a//2
        react[indexes[i]-1] = b + b//2

        fight[indexes[i+1]-1] = c + a*b//(2*d)
        react[indexes[i+1]-1] = d + a*b//(2*c)

        fail[indexes[i]-1] += 1

        newIndex_win.append(indexes[i+1])
        if fail[indexes[i]-1] < m: newIndex_fail.append(indexes[i])
    
    i += 2
    if i >= len(indexes): 
        i = 0
        indexes = newIndex_win+newIndex_fail
        newIndex_win, newIndex_fail = [], []
        if len(indexes) == 1:
            print(indexes[0])
            break
    elif i == len(indexes)-1:
        i = 0
        newIndex_win.append(indexes[-1])
        indexes = newIndex_win+newIndex_fail
        newIndex_win, newIndex_fail = [], []
        if len(indexes) == 1:
            print(indexes[0])
            break