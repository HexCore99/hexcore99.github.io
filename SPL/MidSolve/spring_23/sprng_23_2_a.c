#include <stdio.h>
int main()
{

    int n, a;
    scanf("%d %d", &n, &a);

    switch (n > a)
    {
    case 1:
        switch (n - a > 5)
        {
        case 1:
            printf("Difference is greater than 5\n");
            break;
        default:
            printf("Difference is less than or equal to 5\n");
            break;
        }
        break;
    default:
        printf("Please give a larger value of n\n");
        break;
    }

    return 0;
}
