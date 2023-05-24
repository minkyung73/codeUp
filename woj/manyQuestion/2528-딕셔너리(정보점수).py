from sys import stdin

n = int(stdin.readline().strip())
dic = {}

for i in range(n):
    temp = list(map(str, stdin.readline().strip().split()))
    dic[temp[0]] = list(map(int, temp[1:]))

maxNum = 0
student = ''
idx = 0
for name in dic:
    if dic[name][4] > maxNum:
        maxNum = dic[name][4]
        student = name

# 등수
result = []
for i in range(4):
    rank = 1
    for name in dic:
        if dic[name][i] > dic[student][i]:
            rank += 1
    result.append(rank)

result_dic = {student: result}
print(result_dic)
