#include <stdio.h>

int main()
{
    int ara[5] = {8, 6, 2, 4, 7};
    printf("i\t\t ara[0]\t\t ara[1]\t\t ara[2]\t\t ara[3]\t\t ara[4]\n");
    for (int i = 1; i < 5; i += 2)
    {
        ara[i] = 3 * ara[i - 1];
        printf("%d\t\t %d\t\t %d\t\t %d\t\t %d\t\t %d\n", i, ara[0], ara[1], ara[2], ara[3], ara[4]);
    }

    for (int i = 1; i < 5; i++)
    {
        if (i % 2 == 0)
        { // Check if index is even
            ara[i] = i * 4 + ara[i - 1];
            printf("%d\t\t %d\t\t %d\t\t %d\t\t %d\t\t %d\n", i, ara[0], ara[1], ara[2], ara[3], ara[4]);
        }
    }

    return 0;
}
