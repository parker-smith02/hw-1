#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i = 0;

    printf("n = ");
    scanf("%d", &n);

    int m = n;
    double pi = 0.;

    while (i <= m)
    {

        pi += ((4.0 / (8 * i + 1)) - (2.0 / (8 * i + 4)) - (1.0 / (8 * i + 5)) - (1.0 / (8 * i + 6))) * (1.0 / (1 << (i * 4)));
        i++;
    }

    printf("PI = %.10f\n", pi);
    return 0;
}