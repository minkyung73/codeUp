#include <stdio.h>

int main(void)
{
    int n, k;
    int arr[100]={}, sum[100]={};

    scanf("%d", &n);
    for(int i=0 ; i<n ; i++){
        scanf("%d", &arr[i]);
    }

    for(int i=0 ; i<n ; i++){
        if(i==0) sum[i] = arr[i];
        else{
            for(int j=0 ; j<=i ; j++){
                sum[i] += arr[j];
            }
        }
    }

    for(int i=0 ; i<n ; i++){
        printf("%d ", sum[i]);
    }
}