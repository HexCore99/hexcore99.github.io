#include <stdio.h>

int main()
{

    int sum = 0, i, a = 1, b, x = 1, y = 1;
    for (i = 1; i <= 5; i++)
    {
        sum = sum + a;
        b = 6 * x + 1;
        a = a + b;
        y++;
        x = x + y;
        printf("i=%d,\t sum =%d,\t b=%d,\t a=%d,\t y=%d,\t x=%d\n", i, sum, b, a, y, x);
    }

    return 0;
}