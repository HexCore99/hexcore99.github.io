#include <stdio.h>

int main()
{
    char input[100];
    int length = 0;
    char c;

    int i = 0;
    while ((c = getchar()) != '\n' && i < 99)
    {
        input[i++] = c;
        length++;
    }
    input[i] = '\0';

    printf("Length of the string: %d\n", length);

    return 0;
}