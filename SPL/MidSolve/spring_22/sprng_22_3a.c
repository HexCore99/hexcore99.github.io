#include <stdio.h>

int main()
{
    int n = 5, sum = 0, i, a = 3, sign = 1;

    printf("i\t\t sum\t\t (i%%2) == 0\t\t a\t\t sign\n");
    for (i = 1; i <= n; i++)
    {
        sum = sum + sign * a;
        if (i % 2 == 0)
        {
            a = a + 6;
            printf("%d\t\t %d\t\t TRUE\t\t\t %d\t\t %d\n", i, sum, a, sign);
        }
        else
        {
            a = a + 4;
            sign = -sign;

            printf("%d\t\t %d\t\t FALSE\t\t\t %d\t\t %d\n", i, sum, a, sign);
        }
    }
    // printf("%d", sum);
    return 0;
}