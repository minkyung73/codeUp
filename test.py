res = [5, 15, 25, 35, 45, 55, 65, 75, 85, 95]

for i in range(len(res)):
    if i%2==1:
        res.pop()

print(res)