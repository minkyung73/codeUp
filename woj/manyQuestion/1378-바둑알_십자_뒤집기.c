#include <stdio.h>

int main()
{
    int baduk[20][20];
    for(int i=1 ; i<20 ; i++){
        for(int j=1 ; j<20 ; j++){
            scanf("%d", &baduk[i][j]);
        }
    }

    int n, temp[20][2];
    scanf("%d", &n);
    for(int i = 0 ; i<n ; i++)
        scanf("%d %d", &temp[i][0], &temp[i][1]);

    // 

    for(int i=0 ; i<n ; i++){
        for(int j=1 ; j<20 ; j++){
            if(baduk[temp[i][0]][j] == 0)
                baduk[temp[i][0]][j] = 1;
            else
                baduk[temp[i][0]][j] = 0;
        }

        for(int j=1 ; j<20 ; j++){
            if(baduk[j][temp[i][1]] == 0)
                baduk[j][temp[i][1]] = 1;
            else
                baduk[j][temp[i][1]] = 0;
        }
    }

    // 

    for(int i=1 ; i<20 ; i++){
        for(int j=1 ; j<20 ; j++){
            printf("%d ", baduk[i][j]);
        }
        printf("\n");
    }

}