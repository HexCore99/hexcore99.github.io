#include <stdio.h>
int find_Max(int arr[], int size)
{
    if (size <= 0)
    {
        return arr[size];
    }
    int max = find_Max(arr, size - 1);
    return max > arr[size] ? max : arr[size];
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

    printf("%d", find_Max(arr, n - 1));
    return 0;
}