#include <stdio.h>
int det_even(int check_Num)
{
    if (check_Num % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;

    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (det_even(arr[i]))
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}