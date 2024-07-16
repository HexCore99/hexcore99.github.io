#include <stdio.h>

int main()
{

    int F[6] = {0};
    int i, n;
    n = 3;
    printf("i\t F[0]\t F[1]\t F[2]\t F[3]\t F[4]\t F[5]\n");

    for (i = 0; i < 6; i++)
    {
        F[i] = n + i;
        int x = F[i];

        if (F[i] % 2 == 0)
        {

            F[i] *= 2;
        }
        printf("%\t %d\t %d\t %d\t %d\t %d\t %d\n", i, F[0], F[1], F[2], F[3], F[4], F[5]);
    }

    return 0;
}