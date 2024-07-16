#include <stdio.h>
int main()
{
    printf("\n");
    int arr[10] = {0};
    int k = 15;
    printf("i\t k\t arr[0]\t arr[1]\t arr[2]\t arr[3]\t arr[4]\t arr[5]\t arr[6]\t arr[7]\t arr[8]\t arr[9]\n");
    for (int i = 1; i < 6; i += 2)
    {
        arr[i] = ++k - 2;
        k++;
        printf("%d\t %d\t %d\t %d\t %d\t %d\t %d\t %d\t %d\t %d\t %d\t %d\n", i, k, arr[0], arr[1], arr[2], arr[3], arr[4], arr[5], arr[6], arr[7], arr[8], arr[9]);
    }
    printf("\n");

    int c = 0;
    printf("i\t j\t c\t arr[0]\t arr[1]\t arr[2]\t arr[3]\t arr[4]\t arr[5]\t arr[6]\t arr[7]\t arr[8]\t arr[9]\n");

    for (int i = 6; i < 10; i++)
    {
        for (int j = 10; j >= i; j--)
        {
            arr[j] = ++c;
            printf("%d\t %d\t %d\t %d\t %d\t %d\t %d\t %d\t %d\t %d\t %d\t %d\t %d\n", i, j, c, arr[0], arr[1], arr[2], arr[3], arr[4], arr[5], arr[6], arr[7], arr[8], arr[9]);
        }
    }
    printf("\n");

    //  printf("i\t(i %% 2)\tarr[i]\tK\n");
    printf("i\t (i%%2)\t arr[0]\t arr[1]\t arr[2]\t arr[3]\t arr[4]\t arr[5]\t arr[6]\t arr[7]\t arr[8]\t arr[9]\t k\n");

    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
        {
            arr[i] = ++k;
            printf("%d\t TRUE\t %d\t %d\t %d\t %d\t %d\t %d\t %d\t %d\t %d\t %d\t %d\n", i, arr[0], arr[1], arr[2], arr[3], arr[4], arr[5], arr[6], arr[7], arr[8], arr[9], k);
        }
        else
        {
            //  printf("%d\t FALSE\t %d\t %d \n", i, i, i, arr[i], k);
            printf("%d\t FALSE\t %d\t %d\t %d\t %d\t %d\t %d\t %d\t %d\t %d\t %d\t %d\n", i, arr[0], arr[1], arr[2], arr[3], arr[4], arr[5], arr[6], arr[7], arr[8], arr[9], k);
        }
    }
    printf("\n");
    return 0;
}
