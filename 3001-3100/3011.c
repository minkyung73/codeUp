#include <stdio.h>

int main()
{
    int n, num[1000]={}, temp;
    int  step=0, flag=0;
    scanf("%d", &n);
    for(int i=0 ; i<n ; i++) scanf("%d ", &num[i]);

    for(int i=0 ; i<n-1 ; i++){
        flag=0;        
        for(int j=0 ; j<n-1 ; j++){
            if(num[j]>num[j+1]){
                temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
                flag=1;
            }
        }

        if(flag==0) break;
        step++;
    }

    printf("%d", step);

    return 0;
}