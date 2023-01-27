#include <stdio.h>

int n;

void f(n){
    int flag = 1;
    for(int i=2 ; i<n ; i++){
        if(n%i == 0) {
            flag = 0;
            break;
        }
    }

    if (flag==1) printf("prime");
    else printf("composite");
}

int main()
{
  scanf("%d", &n);
  f(n);
  return 0;
}