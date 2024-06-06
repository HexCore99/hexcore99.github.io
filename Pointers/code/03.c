#include <stdio.h>
void print_Array(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *arr++);
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
    print_Array(arr, n);
    return 0;
}