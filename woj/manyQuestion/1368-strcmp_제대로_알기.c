#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100], s2[100];
    gets(s1);
    gets(s2);

    if(strcmp(s1, s2) == 0){
        printf("0");
    } else if (strcmp(s1, s2) > 0){
        printf("1");
    } else {
        printf("-1");
    }
    
    
}