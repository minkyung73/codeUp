#include <stdio.h>
#define MAX_SIZE 5

void insertion_sort(int list[], int n){
    int key, i, j;

    for(i=1; i<n; i++){
        key = list[i]; 

        for(j=i-1; j>=0 && list[j]>key; j--){
            list[j+1] = list[j]; 
        }

        list[j+1] = key;
    }
}

int main()
{
    int n = MAX_SIZE;
    int list[] = {8, 5, 6, 2, 4};

    insertion_sort(list, n);

    for(int i=0 ; i<n ; i++)
        printf("%d ", list[i]);

    return 0;
}