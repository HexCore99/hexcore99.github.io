#include <stdio.h>
int isPrime(int value)
{
    for (int i = 2; i * i <= value; i++)
    {
        if (value % i == 0)
        {
            return 0;
            break;
        }
    }

    return 1;
}
int main()
{

    int n;
    scanf("%d", &n);

    if (n != 1 && isPrime(n))
    {
        printf("Prime\n");
    }
    else
    {
        printf("Not Prime\n");
    }

    return 0;
}