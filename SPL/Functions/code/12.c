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
void generatePrime(int num)
{
    int count = 0;
    for (int i = 2; i < num; i++)
    {
        if (isPrime(i))
        {
            if (count > 0)
                printf(",");
            printf(" %d", i);
            count++;
        }
    }
}
int main()
{

    int n;
    scanf("%d", &n);

    printf("Prime less than %d: ", n);
    generatePrime(n);
    return 0;
}