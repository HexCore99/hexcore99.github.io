#include <stdio.h>
void printReverse(int *arr, int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", *(arr + i));
    }
}
int main()
{

    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr + i);
    }

    printReverse(arr, n);
    return 0;
}