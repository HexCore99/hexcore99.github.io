#include <stdio.h>
int calcSum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + calcSum(n - 1);
}
int main()
{

    int n;
    scanf("%d", &n);

    printf("%d", calcSum(n));
    return 0;
}