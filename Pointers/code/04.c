#include <stdio.h>
void find_length(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    printf("%d", i);
}
int main()
{

    char str[100];
    scanf("%[^\n]%*/c", str);
    find_length(str);
    return 0;
}