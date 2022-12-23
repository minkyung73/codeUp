#include <stdio.h>

int arr[10000001]={};

int main(void)
{
    int n, num;
    scanf("%d", &n);
    for(int i=0 ; i<n ; i++){
        scanf("%d", &num);
        arr[num] = 1;
    }

    int m;
    scanf("%d", &m);
    for(int i=0 ; i<m ; i++){
        scanf("%d", &num);
        printf("%d ", arr[num]);
    }

    return 0;
}