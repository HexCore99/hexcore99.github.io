#include <stdio.h>

int main()
{
    int a = 10.0 / 3 * 10;
    float b = (int)23.0 % 11;
    int c = (10 > 9 && 21 <= 19) * 5;
    float d = 7 / 2;
    printf("%d\n%f\n%d\n%f", a, b, c, d);
    return 0;
}