#include <stdio.h>
int gcd(int num1, int num2)
{
    while (num2 != 0)
    {
        int rem = num1 % num2;
        num1 = num2;
        num2 = rem;
    }
    return num1;
}
int lcm(int num1, int num2)
{
    return num1 * num2 / gcd(num1, num2);
}
int main()
{
    while (1)
    {

        int a, b;

        scanf("%d %d", &a, &b);
        printf("GCD: %d\n", gcd(a, b));
        printf("LCM: %d\n", lcm(a, b));
    }

    return 0;
}