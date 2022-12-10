#include <stdio.h>

int main(void)
{
    int n; 
    scanf("%d", &n);

    int arr[50];
    for(int i=0 ; i<n-1 ; i++){
        scanf("%d", &arr[i]);
    }

    int flag = 0;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            if(arr[j] != i+1) flag = 0;
            else flag=1; continue;
        }
        if(flag==0){
            printf("%d", i+1); 
            continue;
        } 
        else flag=0;
    }
}