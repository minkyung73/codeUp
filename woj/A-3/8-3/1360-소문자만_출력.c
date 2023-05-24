#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s[200];
    scanf("%s", s);

    for(int i=0 ; i<strlen(s) ; i++){
        if(islower(s[i]))
            printf("%c ", s[i]);
    }
}