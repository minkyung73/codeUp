from sys import stdin

n = int(stdin.readline().strip())
dice = []
for _ in range(n):
    dice.append(list(map(int, stdin.readline().strip().split())))
# print(dice)

dice_num = []
for i in range(n):
    temp = [0] * 6
    for j in range(4):
        temp[dice[i][j]-1] += 1
    dice_num.append(temp)
# print(dice_num)

price = []

for i in range(n):
    # 4개의 눈이 모두 다른 경우
    cnt = 0
    flag1 = 0
    for j in range(6):
        if dice_num[i][j] == 1:
            cnt += 1
        if cnt == 4:
            flag1 = 1
            price.append(max(dice[i]) * 100)
            break
    if flag1 == 1:
        continue

    # 4, 3, 2
    for j in range(6):
        if dice_num[i][j] == 4:
            price.append(50000 + (j+1)*5000)
            break
        elif dice_num[i][j] == 3:
            price.append(10000 + (j+1)*1000)
            break
        elif dice_num[i][j] == 2:
            flag = 0
            for k in range(j+1, 6):
                if dice_num[i][k] == 2:
                    flag = 1
                    price.append(2000 + (j+1) * 500 + (k+1) * 500)
                    break
            if flag == 1:
                break
            else:
                price.append(1000 + (j+1) * 100)
                break

# print(price)
print(max(price))




