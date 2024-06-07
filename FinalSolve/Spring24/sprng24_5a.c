#include <stdio.h>

int main()
{

    int arr[100];
    int *arrPtr = arr;

    for (int offset = 0; offset < 100; offset++)
    {
        scanf("%d", &arrPtr + offset);
    }

    int max = 0;
    for (; *arrPtr < 100; *arrPtr++)
    {
        if (max < *arrPtr)
            max = *arrPtr;
    }

    printf("%d", max);
    return 0;
}