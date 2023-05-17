#include <stdio.h>
#include <string.h>

int main()
{
    char s1[20], s2[20], s3[20];
    scanf("%s", s1);
    scanf("%s", s2);
    scanf("%s", s3);

    int len1 = strlen(s1)-1;
    int len2 = strlen(s2)-1;
    int len3 = strlen(s3)-1;

    if(s1[len1] == s2[0] && s2[len2] == s3[0])
        printf("good");
    else
        printf("bad");


}