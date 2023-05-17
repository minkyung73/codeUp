#include <stdio.h>
#include <string.h>

int main()
{
    char s[200];
    scanf("%s", s);
    for(int i=0 ; i<strlen(s) ; i++){
        if(s[i] == ','){
            printf(" ");
            continue;
        }
        printf("%c", s[i]);
    }
}