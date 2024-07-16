#include <stdio.h>

struct complex
{
    float real;
    float imag;
};

struct complex add(struct complex num1, struct complex num2)
{
    struct complex result;
    result.real = num1.real + num2.real;
    result.imag = num1.imag + num2.imag;
    return result;
}

struct complex subtract(struct complex num1, struct complex num2)
{
    struct complex result;
    result.real = num1.real - num2.real;
    result.imag = num1.imag - num2.imag;
    return result;
}

int main()
{
    struct complex num1, num2, sum, difference;

    scanf("%f %f", &num1.real, &num1.imag);

    scanf("%f %f", &num2.real, &num2.imag);

    // Add the complex numbers
    sum = add(num1, num2);

    // Subtract the complex numbers
    difference = subtract(num1, num2);

    printf("%.2f + %.2fi\n", sum.real, sum.imag);
    printf("%.2f + %.2fi\n", difference.real, difference.imag);

    return 0;
}
