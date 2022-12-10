#include <stdio.h>
#include <math.h>

int main(void)
{
    float a, b;
    float max[8] = {};

    scanf("%f %f", &a, &b);

    max[0] = a+b;
    max[1] = a*b;
    max[2] = a-b;
    max[3] = b-a;
    max[4] = a/b;
    max[5] = b/a;
    max[6] = pow(a, b);
    max[7] = pow(b, a);

    float m = max[0];
    for(int i=1 ; i<8 ; i++){
        m = max[i]>m ? max[i]:m;
    }

    printf("%.6f", m);
}