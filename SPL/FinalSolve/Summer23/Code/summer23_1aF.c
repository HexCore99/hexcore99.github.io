#include <stdio.h>

int IsEven(int num)
{
    if (num % 2 == 0)
        return 1;
    else
        return 0;
}

int ComputeEvenSum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (IsEven(arr[i]))
            sum += arr[i];
    }
    return sum;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int evenSum = ComputeEvenSum(arr, n);

    printf("The sum of even numbers in the array is: %d", evenSum);
    return 0;
}