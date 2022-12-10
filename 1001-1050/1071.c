#include <stdio.h>

int main(void)
{
    long long int a;

    reload:
    scanf("%lld", &a);
    
    if(a!=0) printf("%lld\n", a);
    if(a!=0) goto reload;
}