#include <stdio.h>
#include <string.h>

typedef struct {
    char id;
    int num;
    char name[11];
    int f;
} INFO;

INFO info[20000];

int main()
{
    int n, dig[5];
    scanf("%d", &n);

    for(int i=0 ; i<n ; i++){
        scanf(" %c %d %s", &info[i].id, &info[i].num, info[i].name);
        info[i].f = 0;
    }

    for(int i=0 ; i<5 ; i++)
        scanf("%d", &dig[i]);

    for(int i=0 ; i<n ; i++){
        if(info[i].id == 'D'){
            for(int j=i-1 ; j>= 0 ; j--){
                if(info[i].num == info[j].num){
                    info[j].num = 0;
                    break;
                }
            }
            info[i].num = 0;
        }
    }

    int cnt = 0;
    for(int i=0 ; i<n ; i++){
        if(info[i].id == 'I' && info[i].num > 0)
            info[cnt++] = info[i];
    }

    INFO temp;
    int min;
    for(int i=0 ; i<cnt - 1; i++){
        min = i;
        for(int j=i+1 ; j<cnt ; j++){
            if(info[min].num > info[j].num)
                min = j;
            else if(info[min].num == info[j].num && info[j].f == 0)
                min = j;
        }

        if(min != i){
            temp = info[i];
            info[i] = info[min];
            info[min] = temp;
            info[min].f = 1;
        }
    }

    for(int i=0 ; i<5 ; i++){
        printf("%d %s\n", info[dig[i] - 1].num, info[dig[i] - 1].name);
    }
}