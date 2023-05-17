#include <stdio.h>
#define MAX_SIZE 5

void bubble_sort(int list[], int n){
    int temp;

    for(int i=n-1 ; i>0 ; i--){
        for(int j=0 ; j<i ; j++){
            if(list[j] > list[j+1]){
                temp = list[j];
                list[j] = list[j+1];
                list[j+1] = temp;
            }
        }
    }
}

int main()
{
    int n = MAX_SIZE;
    int list[] = {7, 4, 5, 1, 3};

    bubble_sort(list, n);

    for(int i=0 ; i<n ; i++)
        printf("%d", list[i]);

    return 0;
}
