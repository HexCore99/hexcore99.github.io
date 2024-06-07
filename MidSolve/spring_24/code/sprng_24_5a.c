#include <stdio.h>

int main()
{

    int N;
    scanf("%d", &N);
    int arr[N];
    for (
        int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    int k;
    scanf("%d", &k);

    for (int i = 0; i < N; i++)
    {
        if (i % 2 == 0)
        {
            arr[i] += k;
        }
        else
            arr[i] -= k;
    }

    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}