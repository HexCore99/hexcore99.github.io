#include <stdio.h>

void find_Max(int *a, int *b)
{
    if (*a >= *b)
    {
        printf("%d", *a);
    }
    else
        printf("%d", *b);
}
int main()
{

    int a, b;
    scanf("%d%d", &a, &b);
    find_Max(&a, &b);
    return 0;
}