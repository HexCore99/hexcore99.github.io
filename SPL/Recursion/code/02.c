#include <stdio.h>

int findFibonacci(int n)
{
    if (n < 2)
        return n;
    return findFibonacci(n - 1) + findFibonacci(n - 2);
}

void printFibonacci(int n)
{
    if (n == 0)
    {
        printf("0 "); // Print 0 separately
        return;
    }

    printFibonacci(n - 1);
    printf("%d ", findFibonacci(n));
}

int main()
{
    int n;
    scanf("%d", &n);

    printFibonacci(n - 1);
    return 0;
}
