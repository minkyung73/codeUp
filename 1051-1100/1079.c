#include <stdio.h>

int main(void)
{
    char c;
    scanf("%c ", &c);

    while(c!='q'){
        printf("%c\n", c);
        scanf("%c ", &c);
    }
    
    if(c=='q') printf("%c", c);
}