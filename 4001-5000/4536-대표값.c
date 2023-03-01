#include <stdio.h>

int main()
{
    int num[10] = {0, };
    for(int i=0 ; i<10 ; i++)
        scanf("%d", &num[i]);

    // 평균
    int sum = 0;
    for(int i=0 ; i<10 ; i++)
        sum += num[i];
    int avg = sum/10;

    // 최빈값
    int fre[100] = {0, };
    for(int i=0 ; i<10 ; i++)
        fre[num[i]/10]++;

    int max = 0;
    int idx = 0;
    for(int i=1 ; i<100 ; i++){
        if(fre[i] > max){
            max = fre[i];
            idx = i;
        }
    }
    
    // 출력
    printf("%d\n%d", avg, idx*10);

}