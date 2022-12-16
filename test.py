cnt=0

def f(x):
    if x<1: return
    print(x, "*")
    f(x//2)
    print(x%2, end='')


f(10)
print()
f(13)
# print(cnt)