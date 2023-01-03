#include <stdio.h>

int main(void)
{
    int baduk[20][20] = {};
    int n, x, y;

    for(int i=0 ; i<19 ; i++){
        for(int j=0 ; j<19 ; j++){
            scanf("%d", &baduk[i][j]);
        }
    }

    scanf("%d", &n);
    for(int i=0 ; i<n ; i++){
        scanf("%d %d", &x, &y);

        for(int j=0 ; j<19 ; j++){
            if(baduk[x-1][j]==1)baduk[x-1][j]=0;
            else baduk[x-1][j]=1;

            if(baduk[j][y-1]==1)baduk[j][y-1]=0;
            else baduk[j][y-1]=1;
        }
    }

    for(int i=0 ; i<19 ; i++){
        for(int j=0 ; j<19 ; j++){
            printf("%d ", baduk[i][j]);
        }
        printf("\n");
    }
}