#include <stdio.h>

int main()
{
    int height[3] = {};
    for(int i=0 ; i<3 ; i++) 
        scanf("%d", &height[i]);
    
    int flag = 0;

    for(int i=0 ; i<3 ; i++){
        if(height[i] <= 170){
            flag = 1;
            printf("CRASH %d", height[i]);
            break;
        }
    }

    if(flag == 0)
        printf("PASS");
    
    return 0;
}