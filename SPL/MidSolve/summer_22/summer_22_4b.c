#include <stdio.h>

int main()
{

    int arr[100];
    int n;
    scanf("%d", &n);

    float sum_Of_Odd_index = 0;
    int count_Odd_index = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (i % 2 != 0)
        {
            sum_Of_Odd_index += arr[i];
            count_Odd_index++;
        }
    }

    printf("index\t Value\n");
    printf("-----\t -----\n");

    for (int i = 0; i < n; i++)
    {
        printf(" %d\t    %d\n", i, arr[i]);
    }

    float avg = sum_Of_Odd_index / count_Odd_index;

    printf("Average of odd index = %.2f", avg);
    return 0;
}