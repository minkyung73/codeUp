#include <stdio.h>
#include <string.h>
#include <ctype.h>
# define N 5

int a=0;

void sfunc(){
    // static int a=0;
    printf("%d ", ++a);
}

void func(){
    // int a=0;
    printf("%d ", --a);
}

char data[][10] = {
    "K.O.I", 
    "# @ *", 
    "WORLD"
};

int main(void){
    int i, j, k, l, len, w, h;
    h=2, w=3;

    for(i=0;i<3;i++){
        for(l=0;l<h;l++){
            for(j=0;j<strlen(data[i]);j++){
                for(k=0;k<w;k++) printf("%c", data[i][j]);
            }
            printf("\n");
        }
    }
}