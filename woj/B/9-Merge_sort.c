#include <stdio.h>

const int ITEMSIZE = 6;
int result[ITEMSIZE];

void merge_sort(int array[], int left, int right);      //분할 함수
void merge(int num[], int left, int mid, int right);    //병합 함수

int main(void)
{
    int array[ITEMSIZE] = {3, 8, 0, 2, 1, 4};
    int i;

    printf("Original data output\n");
    for(i=0 ; i<ITEMSIZE ; i++)
        printf("%d ", array[i]);

    // function call
    merge_sort(array, 0, ITEMSIZE-1);

    printf("\nSorted data output\n");
    for(i=0 ; i<ITEMSIZE ; i++)
        printf("%d ", array[i]);

    return 0;
}

void merge_sort(int array[], int left, int right){
    int mid;
    if(left < right){
        mid = (left+right)/2;
        merge_sort(array, left, mid);
        merge_sort(array, mid+1, right);
        merge(array, left, mid, right);
    }
}

void merge(int array[], int left, int mid, int right){
    int i, j, k, m;
    i = left;
    j = mid + 1;
    k = left;
    int tempArray[ITEMSIZE];

    while(i <= mid && j <= right){
        if(array[i] < array[j]){
            tempArray[k] = array[i];
            i++;
        }
        else{
            tempArray[k] = array[j];
            j++;
        }
        k++;
    }

    if(i>mid){
        for(m=j; m<=right ; m++){
            tempArray[k] = array[m];
            k++;
        }
    }
    else{
        for(m=i ; m<=mid ; m++){
            tempArray[k] = array[m];
            k++;
        }
    }

    for(m=left ; m<=right ; m++)
        array[m] = tempArray[m];
}