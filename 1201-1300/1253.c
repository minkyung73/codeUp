#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);

    int max = a>b ? a:b;
    int min = a<b ? a:b;

    for(int i=min ; i<=max ; i++){
        printf("%d ", i);
    }
}