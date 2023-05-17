#include <stdio.h>
#include <string.h>

int main()
{
    char s[200];
    gets(s);

    int cnt=0;
    for(int i=0 ; i <= strlen(s) ; i++){
        if(s[i] == ' ' || s[i] == NULL)
            cnt++;
    }

    printf("%d", cnt);
}