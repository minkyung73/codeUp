#include <stdio.h>
#include <string.h>

int main(void)
{
    char ioi[100];
    scanf("%s", ioi);
    
    if(strcmp(ioi, "IOI")==0) printf("IOI is the International Olympiad in Informatics.");
    else printf("I don't care.");
}