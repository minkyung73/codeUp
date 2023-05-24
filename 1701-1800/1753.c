#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    char s[100][100];
    scanf("%d", &n);
    printf("hello");

    for(int i=0 ; i<n ; i++){
        // printf("%d\t", i);
        scanf("%s", s[i]);
    }

    for(int i=0 ; i<n ; i++){
        printf("%d\t", i);
        for(int j=strlen(s[i])-1 ; j>=0 ; j--){
            printf("%c", s[i][j]);
        }
        printf("\n");
    }
}