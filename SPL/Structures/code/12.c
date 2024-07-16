#include <stdio.h>

typedef struct
{
    double hour;
    double min;
    double sec;
} data;

int main()
{

    data time;
    scanf("%lf%lf%lf", &time.hour, &time.min, &time.sec);
    printf("Time interval in hour %.2lf\n", (time.hour + (time.min / 60) + (time.sec / 3600)) * 1.00);
    printf("Time interval in min %.2lf\n", (time.hour * 60 + time.min + (time.sec / 60)) * 1.00);
    printf("Time interval in sec %.lf\n", time.hour * 3600 + time.min * 60 + time.sec);

    return 0;
}