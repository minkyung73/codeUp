#include <stdio.h>

int main(void)
{
    // float x, y;
    // scanf("%f.%f", &x, &y);
    // printf("%.0f\n%.06f", x, x);

    float a;
    char arr[7] = "";

    scanf("%f", &a);
    
    arr[0] = a;
    printf("%s", arr);
}