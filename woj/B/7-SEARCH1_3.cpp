/*
// lower_bound
#include <stdio.h>
#include <algorithm>
using namespace std;

int main()
{
    int n, k, ar[1001], i;

    scanf("%d", &n);
    for(i=0 ; i<n ; i++)
        scanf("%d", ar+i);
    scanf("%d", &k);

    printf("%ld", lower_bound(ar, ar+n, k)-ar);

    return 0;
}
*/

// upper_bound
#include <stdio.h>
#include <algorithm>
using namespace std;

int main()
{
    int n, k, ar[1001], i;

    scanf("%d", &n);
    for(i=0 ; i<n ; i++)
        scanf("%d", ar+i);
    scanf("%d", &k);

    printf("%ld", upper_bound(ar, ar+n, k)-ar);

    return 0;
}