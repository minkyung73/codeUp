#include <stdio.h>

int main(void)
{
    int n, card[50]={};
    scanf("%d", &n);
    for(int i=0 ; i<n-1 ; i++){
        scanf("%d", &card[i]);
    }

    int flag[50]={};
    for(int i=0 ; i<n ; i++){
        flag[card[i]-1]++;
    }

    for(int i=0 ; i<n ; i++){
        if(flag[i]==0) printf("%d", i+1);
    }
}