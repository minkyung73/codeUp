from sys import stdin

n = int(stdin.readline().strip())
num = stdin.readline()

stack = []
for i in num[::-1]:
    stack.append(i)

s = ''

if len(stack) > 3:
    for i in range(len(stack)):
        if i % 3 == 2:
            s += ','
        s += str(stack.pop())
else:
    print(num)

print(s)
