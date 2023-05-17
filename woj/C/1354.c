#include <stdio.h>
#include <string.h>

int main()
{
    char ar[20];
    int i;
    scanf("%s", ar);

    for(i=0 ; ar[i] != NULL ; i++){
        if(ar[i] == '-')
            continue;
        printf("%c", ar[i]);
    }   
}