#include <stdio.h>

int main(void)
{
    int n, m, arr[100][100]={}, num=0;
    int n2, m2=0;
    scanf("%d %d", &n, &m);

    // 지그재그 절반 Part1
    for(int i=0 ; i<n ; i++){
        n2 = i;
        for(int j=0 ; j<n ; j++){
            if(n2<0 || j>=m) continue;

            arr[n2][j] = ++num;
            n2--;
        }
    }

    // 지그재그 절반 Part2
    for(int i=m-1 ; i>0 ; i--){
        n2 = n-1;
        for(int j=m-i ; j<m ; j++){
            if(n2<0 || j>m-1) continue;

            arr[n2][j] = ++num;
            n2--;
        }
    }

    // 출력
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}