#include <stdio.h>

typedef struct
{
    double meter;
    double centimeter;
} distance;

int main()
{

    distance val;
    scanf("%lf %lf", &val.meter, &val.centimeter);

    printf("Length in meter: %.2lf\n", val.meter + val.centimeter / 100);
    printf("Length in centimeter: %.lf", val.meter * 100 + val.centimeter);

    return 0;
}