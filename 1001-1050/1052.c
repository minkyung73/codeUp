#include <stdio.h>

int main(void)
{
    long long int a, b;
    scanf("%lld %lld", &a, &b);

    if(a != b){
        printf("1");
    }else printf("0");
}