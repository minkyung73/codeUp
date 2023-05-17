#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    scanf("%s", s);

    char s2[100];
    s2[0] = s[0];
    int cnt=1;
    
    for(int i=1 ; i<strlen(s) ; i++){
        if(s[i] == ',' && s[i+1] != NULL){
            s2[cnt] = s[i+1];
            cnt++;
        }
    }

    printf("%s", s2);
}