#include <stdio.h>
#include <string.h>
#include <ctype.h>
# define N 5

int main(void){
    int p[11][11];
    int i, j;
    int n=8, r=5;

    for(i=0;i<=n;i++){
        for(j=0;j<=n;j++){
            p[i][j] = 0;
        }
    }

    p[0][0] = 1;

    for(i=0;i<=n;i++){
        p[i][0] = 1;

        for(j=1;j<=i;j++) p[i][j] = p[i-1][j-1] + p[i-1][j];
    }

    printf("%d ", p[n][r]);
    return p[n][r];

}