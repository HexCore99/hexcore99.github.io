#include <stdio.h>
int fact(int n)
{
    int store = 1;
    for (int i = 2; i <= n; i++)
    {
        store *= i;
    }
    return store;
}
int add(int a, int b)
{
    return a + b;
}
int main()
{

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int sum = add(fact(a), fact(b));
    sum = add(sum, fact(c));

    printf("%d", sum);

    return 0;
}