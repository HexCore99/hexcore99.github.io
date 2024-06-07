#include <stdio.h>

int main()
{

    int arr[5] = {10, 20, 10, 10, 100};
    int size = 5;
    int k = 0, j = 0;
    // printf("i\tj\t(j< size)\t(arr[i] == arr[j])\tk\t(k< size-1)\tarr[k]\tsize\tj\n");
    printf("i\t j\t k\t size\tarr[0]\t arr[1]\t arr[2]\t arr[3]\t arr[4]\n", 0, 0, 0, 5, 10, 20, 10, 10, 100);
    for (int i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                for (k = j; k < size - 1; k++)
                {
                    arr[k] = arr[k + 1];
                    // printf("%d\t%d\tTRUE\t\tTRUE\tTRUE\tk=%d\tTRUE\t %d\t%d\t%d\n", i, j, k, k, arr[k], size, j);
                    printf("%d\t %d\t %d\t %d\t %d\t %d\t %d\t %d\t %d\n", i, j, k, size, arr[0], arr[1], arr[2], arr[3], arr[4]);
                }
                size--;
                j--;
                // printf("%d\t%d\t\t\t\t TRUE\tTRUE\tk=%d\tFALSE\t%d\t%d\t%d\n\n", i, j, k, k, arr[k], size, j);
                printf("%d\t %d\t %d\t %d\t %d\t %d\t %d\t %d\t %d\n", i, j, k, size, arr[0], arr[1], arr[2], arr[3], arr[4]);
            }
            else
            {
                // printf("%d\t%d\t\t\t\t TRUE\t FALSE\n", i, j);
                printf("%d\t %d\t %d\t %d\t %d\t %d\t %d\t %d\t %d\n", i, j, k, size, arr[0], arr[1], arr[2], arr[3], arr[4]);
            }
        }

           printf("%d\t %d\t %d\t %d\t %d\t %d\t %d\t %d\t %d\n", i, j, k, size, arr[0], arr[1], arr[2], arr[3], arr[4]);
    }

    return 0;
}