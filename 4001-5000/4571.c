#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d\n%d", &n, &m);

    int min = n<m?n:m;
    int max = n>m?n:m;

    printf("%d %d", min, max);
}