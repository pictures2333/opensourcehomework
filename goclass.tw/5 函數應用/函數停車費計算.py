def f(hours:int):
    total = 0
    if hours <= 2: total = hours*30
    elif hours > 2 and hours <= 4: total = 2*30 + (hours-2)*50
    elif hours > 4 and hours <= 6: total = 2*30 + 2*50 + (hours-4)*80
    elif hours > 6: total = 2*30 + 2*50 + 2*80 + (hours-6)*100
    return total
hours = int(input())
print(f"停車時數：{hours}小時\n應繳費用：{f(hours)}元整")