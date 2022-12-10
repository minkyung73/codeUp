#include <stdio.h>

int main(void)
{
    int a=1, b=1;
    printf("%d %d", a<<31, (b<<31)-b);
}