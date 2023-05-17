#include <stdio.h>
#include <string.h>

int main()
{
    char s[100000];
    scanf("%s", s);

    int cnt1 = 0, cnt2 = 0;
    for(int i=0 ; i<strlen(s) ; i++){
        if(s[i] == '(')
            cnt1++;
        else if(s[i] == ')')
            cnt2++;
    }

    printf("%d %d", cnt1, cnt2);
}