#include <stdio.h>

int main()
{

    char str[55] = "I love spl. Uiu has some good labs for spl.";

    for (char *p = str; *p != '\0'; *p++)
    {
        if (*p == 's' && *(p + 1) == 'p' && *(p + 2) == 'l')
        {
            *p = 'd';
            *(p + 1) = 's';
            *(p + 2) = 'a';
        }
    }

    for (char *s = str; *s != '\0'; *s++)
    {
        printf("%c", *s);
    }

    return 0;
}