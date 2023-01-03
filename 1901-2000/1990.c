#include <stdio.h>

int main(void)
{
    char num[1000];
    int sum=0;

    scanf("%s", num);

    for(int i=0 ; num[i]!='\0' ; i++){
        sum += num[i]-48;
    }

    if(sum%3==0) printf("1");
    else printf("0");
}