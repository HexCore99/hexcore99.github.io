#include <stdio.h>

int main()
{
    int i;
    int F[6] = {0};
    F[0] = 1;
    F[1] = 1;
    printf("F[0]\t\t F[1]\t\t F[2]\t\t F[3]\t\t F[4]\t\t F[5]\n");
    for (int i = 2; i <= 5; i++)
    {
        F[i] = F[i - 1] + F[i - 2];
        printf("%d\t\t %d\t\t %d\t\t %d\t\t %d\t\t %d\n", F[0], F[1], F[2], F[3], F[4], F[5]);
    }

    printf("%d\t\t %d\t\t %d\t\t %d\t\t %d\t\t %d\n", F[0], F[1], F[2], F[3], F[4], F[5]);
    return 0;
}