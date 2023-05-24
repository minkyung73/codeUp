#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s[200];
    gets(s);

    for(int i=0 ; i<strlen(s) ; i++){
        if(isupper(s[i]))
            printf("%c\n", s[i]);
    }
}