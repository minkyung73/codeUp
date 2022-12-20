#include <stdio.h>

int main(void)
{
    int arr[10], flag = 0;
    for(int i=0 ; i<10 ; i++) scanf("%d", &arr[i]);

    for(int i=0 ; i<10 ; i++){
        if(arr[i]%5 == 0){
            flag = 1;
            printf("%d", arr[i]);
            break;
        }
    }

    if(flag==0) printf("0");
}