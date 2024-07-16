#include <stdio.h>
void printArray(int arr[], int size)
{
    if (size <= 0)
    {
        return;
    }
    printArray(arr, size - 1);
    printf("%d ", arr[size - 1]);
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
    printArray(arr, n);
    return 0;
}