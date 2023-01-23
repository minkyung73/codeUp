from sys import stdin

pasta = []
juice = []

for _ in range(3):
    pasta.append(int(stdin.readline()))

for _ in range(2):
    juice.append(int(stdin.readline()))

price = 1.1 * (min(pasta) + min(juice))
print(round(price, 1))