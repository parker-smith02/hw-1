#include <stdio.h>
#include <stdlib.h>

int sum_square_digits(int num)
{
    int sum = 0, m;
    while (num > 0)
    {
        m = num % 10;
        sum += m * m;
        num /= 10;
    }
    printf("%d\n", sum);
    return sum;
}

int main()
{
    int n;
    printf("n = ");
    scanf("%d", &n);
    int m = n;

    while (n != 4 && n != 1)
    {
        n = sum_square_digits(n);
    }

    if (n == 1)
        printf("%d is a happy number.\n", m);
    else
        printf("%d is a NOT a happy number.\n", m);
    return 0;
}
