pens, lines, actions = input().split(" ")
pens, lines, actions = int(pens), int(lines), int(actions)

display = []

for p in range(pens):
    td = []

    nums = []
    nums_check = []
    for n in range(lines):
        ns = list(map(int, input().split(" ")))
        nums.append(ns)
        for i in ns: nums_check.append(i)

    actions = list(map(int, input().split(" ")))

    if len(list(set(nums_check))) == len(nums_check): con = True
    else: con = False
    if con:
        for n in nums_check:
            if n < 1 or n > lines*lines: 
                con = False
                break
    td.append(con)

    if con:
        # 偵測是否有被叫號
        for i in range(len(nums)):
            for j in range(len(nums[i])):
                if nums[i][j] in actions: nums[i][j] = "X"
                else: nums[i][j] = "O"
        # 製作答案卷
        ans = []
        aa = []
        for i in range(lines):
            for j in range(lines): aa.append("O")
            ans.append(aa)
            aa = []
        # 偵測連線數
        checklines = 0
        # 橫排
        for i in range(len(nums)):
            if "O" in nums[i]: pass
            else: 
                checklines += 1
                for j in range(lines): ans[i][j] = "X"
        # 直排 
        cn = []
        for i in range(lines):
            for j in range(lines):
                cn.append(nums[j][i])
            if "O" in cn: pass
            else: 
                for j in range(lines): ans[j][i] = "X"
                checklines += 1
            cn = []
        # 斜排1
        cn = []
        for i in range(lines):
            cn.append(nums[i][i])
        if "O" in cn: pass
        else: 
            for i in range(lines):
                ans[i][i] = "X"
            checklines += 1
        # 斜排2
        cn = []
        for i in range(lines):
            cn.append(nums[i][lines-1-i])
        if "O" in cn: pass
        else:
            for i in range(lines): ans[i][lines-1-i] = "X" 
            checklines += 1

        td.append(checklines)
        td.append(ans)
    display.append(td)

for t in display:
    print(t[0])
    if t[0]:
        print(t[1])
        ans = t[2]
        for i in range(len(ans)):
            for j in range(len(ans[i])):
                print(ans[i][j], end = "")
            print()