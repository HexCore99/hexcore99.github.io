#include <stdio.h>

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    printf("Value in func: %d %d\n", a, b);
}

int main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    swap(num1, num2);
    printf("Value in main: %d %d\n", num1, num2);
    return 0;
}