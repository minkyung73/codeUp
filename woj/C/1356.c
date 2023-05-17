#include <stdio.h>
#include <string.h>

int main()
{
    char s[101];
    int cnt=0;
    gets(s);
    for(int i=0 ; i<strlen(s) ; i++)
        cnt++;

    printf("%d", cnt);
}