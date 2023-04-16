#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100], s2[100];
    scanf("%s %s", s1, s2);

    if(strlen(s1) < strlen(s2))
        printf("%s %s", s1, s2);
    else if (strlen(s2) < strlen(s1))
        printf("%s %s", s2, s1);
    else{
        if(strcmp(s1, s2) < 0)
            printf("%s %s", s1, s2);
        else
            printf("%s %s", s2, s1);
    }
}