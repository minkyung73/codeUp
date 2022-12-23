#include <stdio.h>

int main(void)
{
    int n, student[10000]={};
    scanf("%d", &n);
    for(int i=0 ; i<n ; i++){
        scanf("%d", &student[i]);
    }

    int cnt[24]={};
    for(int i=0 ; i<n ; i++){
        cnt[student[i]-1]++;
    }

    for(int i=0 ; i<23 ;i++){
        printf("%d ", cnt[i]);
    }
}