#include <stdio.h>

int main(void)
{
    int n, student[10000]={};
    scanf("%d", &n);
    for(int i=0 ; i<n ; i++){
        scanf("%d", &student[i]);
    }

    for(int i=n-1 ; i>=0 ; i--){
        printf("%d ", student[i]);
    }
}