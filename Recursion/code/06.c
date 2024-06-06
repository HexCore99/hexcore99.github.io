#include <stdio.h>
void print_Even_Odd(int n)
{
    if (n == 0)
        return;
    print_Even_Odd(n - 1);
    if (n % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");
}
int main()
{

    int n;
    scanf("%d", &n);

    print_Even_Odd(n);
    return 0;
}