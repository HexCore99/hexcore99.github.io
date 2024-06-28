#include <stdio.h>

int main()
{

    int i, j, n = 4, count = 0;

    printf("i\tj\t(j<=n-i)\t(count<= n-1 )\t\tcount\n");
    for (int i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            if (count <= n - 1)
            {
                count++;
                printf("|%d\t|%d\t|TRUE\t\t\t|TRUE\t\t|%d\n", i, j, count);
            }
            else
            {
                printf("|%d\t|%d\t|TRUE\t\t\t|FALSE\t\t|%d\n", i, j, count);
            }
        }
        count = 0;
        printf("|%d\t |%d\t|FALSE\t\t\t\t\t|%d\n", i, j, count);
        printf("\n");
    }

    return 0;
}