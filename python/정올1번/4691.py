from sys import stdin

n = int(stdin.readline().strip())
dice = []
for _ in range(n):
    dice.append(list(map(int, stdin.readline().strip().split())))

price = [0] * n
for i in range(n):
    if dice[i][0] == dice[i][1] == dice[i][2] == dice[i][3]:
        price.append(50000 + dice[i][0] * 5000)
        continue

    count = 0

