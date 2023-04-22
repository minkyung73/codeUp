#include <stdio.h>

int main()
{
    int num[7] = {};
    for(int i=0 ; i<7 ; i++)
        scanf("%d", &num[i]);

    int oddMax=0, evenMax=0;
    for(int i=0 ; i<7 ; i++){
        if((num[i] %2 ==0) && num[i] > evenMax)
            evenMax = num[i];
        if((num[i] %2 ==1) && num[i] > oddMax)
            oddMax = num[i];
    }

    printf("%d", oddMax+evenMax);
}