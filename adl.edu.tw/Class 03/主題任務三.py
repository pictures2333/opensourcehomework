scores = [None]
while scores[-1] != 99999: scores.append(int(input()))
print(f"Sum: {sum(scores[1:-1])} | Average: {sum(scores[1:-1])/(len(scores)-2)}")