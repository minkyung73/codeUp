def solution(num, k):
    answer = 0
    digit = 0
    arr = []
    
    while(num>0):
        arr.append(num%10)
        num //= 10
        digit += 1

    # cnt=0
    # for i in arr:
    #     print(cnt, "\t", i)
    #     cnt += 1

    cnt=0
    for i in range(digit-1, -1, -1):
        cnt += 1
        print(i, "\t", arr[i])
        if(arr[i]==k):
            answer = cnt
            break

    return answer

    # for i in range(digit-1, 0, -1):
    #     if(arr[i]==k):
    #         answer = i+1
    #         break

    # if(answer==0):
    #     answer = -1
    
    # return answer

print("answer: ", solution(232443, 4))
# print(solution(29183, 1))

