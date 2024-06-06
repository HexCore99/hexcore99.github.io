#include <stdio.h>

typedef struct
{
    int meter;
    int centimeter;
} distance;
int main()
{

    distance num1, num2;
    scanf("%d%d%d%d", &num1.meter, &num1.centimeter, &num2.meter, &num2.centimeter);

    int sum_metr = num1.meter + num2.meter;
    int sum_centimeter = num1.centimeter + num2.centimeter;

    if (sum_centimeter >= 100)
    {
        sum_metr++;
        sum_centimeter -= 100;
    }
    printf("The sum is %d meter  %d Centimeter", sum_metr, sum_centimeter);

    return 0;
}