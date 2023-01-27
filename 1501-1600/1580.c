#include <stdio.h>

float circle(r){
    return 3.14*r*r;
}

int main()
{
    int r;
    scanf("%d", &r);
    printf("%.2f", circle(r));
}