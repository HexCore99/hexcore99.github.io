
#include <stdio.h>
typedef struct
{
    float real;
    float imaginary;
} cmplx;
int main()
{
    cmplx num;

    scanf("%f %f", &num.real, &num.imaginary);

    printf("%.2f%+.2fi\n", num.real, num.imaginary);

    return 0;
}