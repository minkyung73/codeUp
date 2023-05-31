#include <stdio.h>

int main()
{
    int n, arr[1000] = {0, };
    scanf("%d", &n);
    for(int i=0 ; i<n ; i++){
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n ; i++){
        for(int j=i ; j<i+n ; j++){
            if(j<n)
                printf("%d ", arr[j]);
            else{
                int temp = j - n;
                printf("%d ", arr[temp]);
            }
        }
        printf("\n");
    }
}