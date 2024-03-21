#include <stdio.h>

int calculateSum(int n)
{
    int sum = 0;
    int num;

    ;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        sum += num;
    }

    printf("Sum In Function: %d\n", sum);
    return sum;
}

int main()
{
    int n;
    scanf("%d", &n);

    int sumInFunction = calculateSum(n);
    printf("Sum In Main: %d\n", sumInFunction);

    return 0;
}