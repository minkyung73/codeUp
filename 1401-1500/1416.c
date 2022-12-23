#include <stdio.h>

int main(void)
{
    int n, bin[100000]={};
    scanf("%d", &n);

    int digit=0;
    while(1){
        bin[digit] = n%2;
        n /= 2;
        digit++;

        if(n==0) break;
    }

    for(int i=digit-1 ; i>=0 ; i--){
        printf("%d", bin[i]);
    }
}