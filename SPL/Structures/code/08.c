#include <stdio.h>
typedef struct
{
    float real;
    float imag;
} complex;

int main()
{

    complex num1, num2;
    scanf("%f %f", &num1.real, &num1.imag);
    scanf("%f %f", &num2.real, &num2.imag);

    float mult1;
    if (num1.imag < 0)
    {

        mult1 = num1.real * num2.real - num1.imag * num2.imag;
    }
    else if (num2.imag < 0)
    {
        mult1 = num1.real * num2.real - num1.imag * num2.imag;
    }
    else
    {

        mult1 = num1.real * num2.real + num1.imag * num2.imag;
    }

    float mult2 = num1.real * num2.imag + num1.imag * num2.real;

    printf("%.f + %.fi\n", mult1, mult2);
    return 0;
}