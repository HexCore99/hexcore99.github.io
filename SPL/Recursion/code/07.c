#include <stdio.h>

void checkPalidrome(char *str, int length)
{
    if (length <= 1)
    {
        printf("Palindrome\n");
        return;
    }
    if (*str != *(str + length))
    {
        printf("Not Palindrome\n");
        return;
    }

    checkPalidrome(str + 1, length - 2);
}
int main()
{

    char str[100];
    char ch;
    int lngth = 0;
    while ((ch = getchar()) != '\n')
    {
        str[lngth++] = ch;
    }
    str[lngth] = '\0';
    checkPalidrome(str, lngth - 1);
    return 0;
}