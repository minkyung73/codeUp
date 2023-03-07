#include <stdio.h>

int main()
{
    int n, arr[100]={0, };
    scanf("%d", &n);
    for(int i=0 ; i<n ; i++)
        scanf("%d", &arr[i]);

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n-1 ; j++){
            int temp = 0;
            if(arr[j] < arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(int i=0 ; i<n ; i++)
        printf("%d ", arr[i]);

    return 0;
}