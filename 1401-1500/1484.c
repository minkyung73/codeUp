#include <stdio.h>

int main(void)
{
    int n, m, arr[100][100]={}, num=0;
    scanf("%d %d", &n, &m);

    int i=0, j=0;
    int xAxis=0, yAxis=0;
    int xF=1, yF=1;

    // 달팽이
    for(int cnt=0 ; cnt<(n-1)*2+1 ; cnt++){
        if(cnt%2!=0){

            for(i=0 ; i<m ; m++){

            }

            m -=2;
        }
        else{

        }
    }


    // output
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}