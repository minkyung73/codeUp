from sys import stdin

n = stdin.readline().strip()
stack = []
for i in n:
    stack.append(i)

for i in range(len(stack)):
    print(stack.pop(), end='')

    