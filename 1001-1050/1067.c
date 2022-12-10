#include <stdio.h>

int main(void)
{
    long long int a;
    scanf("%lld", &a);

    if(a<0){
        printf("minus\n");
        if(a%2==0){
            printf("even");
        }else printf("odd");
    }
    else{
        printf("plus\n");
        if(a%2==0){
            printf("even");
        }else printf("odd");
    }
}