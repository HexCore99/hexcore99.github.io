#include <stdio.h>
int count_Digits(int n)
{
    int count = 0;
    if (n <= 0)
        return count;
    count = count_Digits(n / 10);
    return count + 1;
}
int main()
{

    int n;
    scanf("%d", &n);
    printf("%d", count_Digits(n));

    return 0;
}