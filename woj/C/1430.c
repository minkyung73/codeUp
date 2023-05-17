#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d\n", &n);

    char s[15][300];
    for(int i=0 ; i<n ; i++){
        gets(s[i]);
    }

    for(int i=n-1 ; i>=0 ; i--){
        printf("%s\n", s[i]);
    }
}