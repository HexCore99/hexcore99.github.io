#include <stdio.h>

int main()
{

    int a = 10, b = 20, count = 0;

    int i = b;

    while (i >= a)
    {

        int j = a;
        do
        {
            printf("%d ", j);
            j++;
        } while (j <= b);

        if (b % 2 != 0)
        {
            printf("%d \n", a);
        }
        else
        {
            printf("%d \n", b);
        }

        i--;
    }

    return 0;
}