#include <stdio.h>
typedef struct
{
    float real;
    float imag;
} complex;

complex div(complex num1, complex num2)
{
    complex result;
    double denom = (num2.real * num2.real + num2.imag * num2.imag);
    result.real = (num1.real * num2.real + num1.imag * num2.imag) / denom;
    result.imag = (num1.imag * num2.real - num1.real * num2.imag) / denom;
    return result;
}
int main()
{

    complex num1, num2;
    scanf("%f %f", &num1.real, &num1.imag);
    scanf("%f %f", &num2.real, &num2.imag);

    printf("%.2f + %.2fi\n", div(num1, num2).real, div(num1, num2).imag);
    return 0;
}