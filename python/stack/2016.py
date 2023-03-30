from sys import stdin

n = int(stdin.readline().strip())
num = stdin.readline().strip()

stack = []
for i in range(len(num)):
    stack.append(num[len(num)-i-1])
    if i % 3 == 2 and i != len(num) - 1:
        stack.append(',')


length = len(stack)
for i in range(length):
    print(stack.pop(), end='')



