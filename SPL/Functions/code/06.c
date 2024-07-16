#include <stdio.h>
void swap(int *ptr1, int *ptr2)
{
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    printf("Value in func: %d %d\n", *ptr1, *ptr2);
}
int main()
{

    int m, n;
    scanf("%d %d", &m, &n);
    swap(&m, &n);

    printf("Value in main: %d %d\n", m, n);

    return 0;
}