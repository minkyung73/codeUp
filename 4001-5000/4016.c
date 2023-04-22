#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int min = ((a<b?a:b)<c)?(a<b?a:b):c;

    int gcd = 1;
    for(int i=2 ; i<=min ; i++){
        if((a%i == 0) && (b%i == 0) && (c%i ==0)){
            gcd = i;
        }
    }

    printf("%d", gcd);
}