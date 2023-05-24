

def f(num):
    num = str(num)
    result = ''
    for i in range(len(num)-1, -1, -1):
        result += num[i]
    result = int(result)
    return result


n = int(input())
result = f(n)
print(result)
