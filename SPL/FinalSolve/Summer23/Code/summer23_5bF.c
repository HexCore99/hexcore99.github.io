#include <stdio.h>

int sumOfOddElements(int *arr, int size)
{
    int sum = 0;
    int *ptr = arr;

    while (size--)
    {
        if (*ptr % 2 != 0)
        {
            sum += *ptr;
        }
        ptr++;
    }

    return sum;
}

int main()
{
    int numbers[] = {10, 21, 35, 42, 57, 68, 73};
    int n = sizeof(numbers) / sizeof(numbers[0]);
    int sum = sumOfOddElements(numbers, n);
    printf("Sum of odd elements: %d\n", sum);

    return 0;
}