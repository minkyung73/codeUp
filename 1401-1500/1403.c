#include <stdio.h>

int main(void)
{
    int k, num[100]={};
    scanf("%d", &k);
    for(int i=0 ; i<k ; i++){
        scanf("%d", &num[i]);
    }

    for(int i=0 ; i<2 ; i++){
        for(int j=0 ; j<k ; j++){
            printf("%d\n", num[j]);
        }
    }
}