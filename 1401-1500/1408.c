#include <stdio.h>

int main(void)
{
    char str[20];
    scanf("%s", str);

    // method1
    for(int i=0 ; str[i]!='\0' ; i++){
        printf("%c", str[i]+2);
    }
    
    printf("\n");

    // method2
    for(int i=0 ; str[i]!='\0' ; i++){
        printf("%c", (str[i]*7)%80+48);
    }
}