#include <math.h>
#include <stdio.h>

int main()
{

    float n_, m = 5;
    scanf("%f", &n_);

    float p = ((int)n_ % (int)m) / sqrt(6);
    printf("%f", p);
    return 0;
}