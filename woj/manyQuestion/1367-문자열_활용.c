#include <stdio.h>
#include <string.h>

int main()
{
    char s1[1000], s2[1000];
    // scanf("%s", s1);
    // scanf("%s", s2);
    gets(s1);
    gets(s2);

    char* ptr = strstr(s1, s2);

    if(ptr != NULL){
        printf("YES");
    }
    else{
        printf("NO");
    }
}