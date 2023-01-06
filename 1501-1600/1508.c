#include <stdio.h>

int main()
{
    int n, arr[20][20]={};
    scanf("%d", &n);
    for(int i=0 ; i<n ; i++) scanf("%d", &arr[i][0]);

    //
    int n2=n;
    for(int i=0 ; i<n ; i++){
        for(int j=i ; j<n ; j++){
            arr[j+1][i+1] = arr[j+1][i] - arr[j][i];
        }
    }


    // output
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<=i ; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}