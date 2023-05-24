from sys import stdin

n = int(stdin.readline())
# result = '0' * 32

n = str(bin(n))
n = n[2:]

result = '0' * (32-len(n)) + n

for i in range(0, 32, 4):
    print(result[i:i+4], end=' ')

