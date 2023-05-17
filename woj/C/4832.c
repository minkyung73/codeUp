// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char s[5][16];
//     for(int i=0 ; i<5 ; i++){
//         scanf("%s", s[i]);
//     }

//     for(int i=0 ; i<15 ; i++){
//         for(int j=0 ; j<5 ; j++){
//             if(s[j][i] != NULL){
//                 printf("%c", s[j][i]);
//             }
//         }
//     }
// }

#include <stdio.h>
int main()
{
    int i,k;
    char a[5][16]={};
    for(i=0;i<5;i++)
        scanf("%s",a[i]);
    for(i=0;i<15;i++)
    {
        for(k=0;k<5;k++)
        {
            if(a[k][i]!=NULL)
                printf("%c",a[k][i]);
        }
    }
    return 0;
}