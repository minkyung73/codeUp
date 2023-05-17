#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100], s2[100];
    gets(s1);
    gets(s2);

    int len = strlen(s1) + strlen(s2);
    printf("%d", len);
}