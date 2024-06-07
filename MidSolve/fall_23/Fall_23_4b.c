#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    float arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%f", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 500.00)
        {
            for (int j = i; j < n - 1; j++)
            {
                arr[j] = arr[j + 1];
            }
            n--;
            i--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%f ", arr[i]);
    }

    printf("\n%d", n);
    return 0;
}