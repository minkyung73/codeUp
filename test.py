def solution(rsp):
    answer = ''
    
    for i in range(len(rsp)):
        if(rsp[i]==2):
            answer += '0'
            print(i, answer)
        elif(rsp[i]==0):
            answer += '5'
            print(i, answer)
        elif(rsp[i]==5):
            answer += '2'
            print(i, answer)
    
    return answer

print(solution("205"))