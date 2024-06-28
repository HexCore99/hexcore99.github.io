#include <stdio.h>

int main()
{
    int num = 10;

    printf("Initial value of num: %d\n", num);

    int *ptr = &num;

    *ptr = *ptr * 2;

    printf("Value of num after modification: %d\n", num);

    return 0;
}
