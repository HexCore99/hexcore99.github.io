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
void genNthPrime(int nth_Prime)
{
    int count = 0;
    for (int i = 2;; i++)
    {
        if (isPrime(i))
        {
            ++count;
            if (count == nth_Prime)
            {
                printf(" %d \n", i);
                break;
            }
        }
    }
}
int main()
{

    int n;
    scanf("%d", &n);

    printf("%dth Prime:", n);
    genNthPrime(n);
    return 0;
}