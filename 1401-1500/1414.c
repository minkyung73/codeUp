#include <stdio.h>
#include <string.h>

int main(void)
{
    int numC=0, numCC=0;
    char str[100];
    scanf("%s", str);

    for(int i=0 ; str[i]!='\0' ; i++){
        if(str[i]=='c'||str[i]=='C') numC++;
        if((str[i]=='c'||str[i]=='C') && (str[i+1]=='c' || str[i+1]=='C')) numCC++;
    }

    printf("%d\n%d", numC, numCC);
}