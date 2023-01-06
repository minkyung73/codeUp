#include <stdio.h>

int main()
{
    int n, arr[50][50]={}, num=0;
    scanf("%d", &n);

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            arr[i][j] = ++num;
        }
    }

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }    
}