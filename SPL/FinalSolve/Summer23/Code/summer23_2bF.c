#include <ctype.h>
#include <stdio.h>
#include <string.h>
// Function to convert a string to lowercase
int toLowerCase(char *str)
{
    int length = 0;
    for (int i = 0; str[i]; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
        length++;
    }
    return length;
}
int countOccurrences(char *str1, char *str2)
{
    int count = 0, i, j, len1, len2;
    len1 = toLowerCase(str1);
    len2 = toLowerCase(str2);

    printf("len1: %d\n", len1);
    for (i = 0; i <= len1 - len2; i++)
    {
        int match = 1;
        for (j = 0; j < len2; j++)
        {
            if ((str1[i + j]) != (str2[j]))
            {
                match = 0;
                break;
            }
        }
        if (match)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    char str1[100], str2[20];

    scanf("%[^\n]%*c", str1);
    scanf("%[^\n]%*c", str2);

    int occurrences = countOccurrences(str1, str2);
    printf("Number of occurrences: %d\n", occurrences);

    return 0;
}