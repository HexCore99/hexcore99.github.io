#include <math.h>
#include <stdio.h>
typedef struct
{
    float x;
    float y;
} value;
float findModulus(value x)
{
    return sqrt(x.x * x.x + x.y * x.y);
}

float findArgument(value x)
{

    return atan2(x.y, x.x);
}
int main()
{
    value X;
    scanf("%f", &X.x);
    scanf("%f", &X.y);

    printf("Modulus: %.4f", findModulus(X) * 1.0);
    printf("\nArgument: %.4f", findArgument(X) * 1.00);

    return 0;
}