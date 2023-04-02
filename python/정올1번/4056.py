from sys import stdin

money = int(stdin.readline().strip())

if money <= 500:
    print(int(money*70/100))
elif money <= 1500:
    print(int(350 + (money-500)*40/100))
elif money <= 4500:
    print(int(750 + (money-1500)*15/100))
elif money <= 10000:
    print(int(1200 + (money-4500)*5/100))
else:
    print(int(1475 + (money-10000)*2/100))