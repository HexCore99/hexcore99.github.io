#include <stdio.h>

int main()
{
    float a = 5 * (5 / 2);
    int b = 5 * (5 / 2);
    float c = 5 * (5.0 / 2);
    int d = 5 * (5.0 / 2);

    printf("float a = %f\nint b = %d\nfloat c = %f\nint d = %d\n", a, b, c, d);
    return 0;
}