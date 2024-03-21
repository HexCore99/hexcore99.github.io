#include <stdio.h>

int main()
{
    char s;
    scanf(" %c", &s);
    if (s >= 'A' && s <= 'Z')
        printf("%c", s + 32);

    else
    {
        printf("Wrong input");
    }
    return 0;
}