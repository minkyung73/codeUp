from sys import stdin

n1 = stdin.readline().strip()
n2 = stdin.readline().strip()

if int(n1) > int(n2):
    maxNum = n1
    minNum = n2
else:
    maxNum = n2
    minNum = n1

minL = []
maxL = []

# for i in range(len(n1)):
#     minL.append(int(n1[len(n1) - i - 1]))
#
# for i in range(len(n2)):
#     maxL.append(int(n2[len(n2) - i - 1]))

for i in range(len(minNum)):
    minL.append(int(minNum[i]))

for i in range(len(maxNum)):
    maxL.append(int(maxNum[i]))

result = []
temp = 0
while minL:
    sum = minL.pop() + maxL.pop() + temp
    if sum < 10:
        result.append(sum)
        temp = 0
    else:
        result.append(sum % 10)
        temp = 1

while maxL:
    sum = maxL.pop() + temp
    if sum < 10:
        result.append(sum)
        temp = 0
    else:
        result.append(sum % 10)
        temp = 1

if temp == 1:
    result.append(1)

while result:
    print(result.pop(), end='')

