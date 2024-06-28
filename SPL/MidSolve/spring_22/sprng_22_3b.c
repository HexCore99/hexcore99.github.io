#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int dubl = n * 2;
    int sum_Of_Factors = 0;
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            sum_Of_Factors += i;
                }
    }

    if (sum_Of_Factors + n < dubl)
    {
        printf("Deficient Number");
    }
    else
    {
        printf("Not a Deficient Number");
    }

    return 0;
}