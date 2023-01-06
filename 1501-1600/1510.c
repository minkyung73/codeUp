#include <stdio.h>

int main()
{
    int n, arr[50][50]={};
    scanf("%d", &n);

    int col=0, row=n/2;
    arr[col][row] = 1;
    int num = 1;

    for(int i=0 ; i<n*n ; i++){
        if(num%n==0) col++;
        else{
            col--;
            row++;
        }
    
        if(col<0) col=n-1;    
        if(row>n-1) row=0;  

        arr[col][row] = ++num;
    }

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}