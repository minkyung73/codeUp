from sys import stdin

n = int(stdin.readline())

abc = 65
num = 1

for i in range(n):
    for j in range(n-i):
        print(chr(abc), end=' ')
        abc += 1
    # for j in range(i+1):
    #     print(num, end=' ')
    #     num += 1
    print()



