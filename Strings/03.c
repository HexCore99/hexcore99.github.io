#include <stdio.h>

int main()
{
    char input;

    scanf("%c", &input);

    if (input >= '0' && input <= '9')
    {
        int value = input - '0';
        printf("%d\n", value);
    }
    else
    {
        printf("Wrong input\n");
    }

    return 0;
}