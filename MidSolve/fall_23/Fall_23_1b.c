#include <stdio.h>

int main()
{

    float a = 101 / 7;
    float b = (float)(3 % 5);
    float c = 21 > 43 || 6 != 6;
    double result = 12 + (1 * '3');

    printf("%f\n%f\n%f\n%lf\n", a, b, c, result);



    return 0;
}