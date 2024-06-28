#include <stdio.h>

int main()
{
    char str[100];
    int vowelCounts[5] = {0};

    fgets(str, sizeof(str), stdin); // Use fgets to get input with spaces

    // Count the vowels (case-insensitive)
    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];
        if (ch >= 'A' && ch <= 'Z')
        {
            ch += 32;
        }

        switch (ch)
        {
        case 'a':
            vowelCounts[0]++;
            break;
        case 'e':
            vowelCounts[1]++;
            break;
        case 'i':
            vowelCounts[2]++;
            break;
        case 'o':
            vowelCounts[3]++;
            break;
        case 'u':
            vowelCounts[4]++;
            break;
        }
    }

    printf("A/a: %d\n", vowelCounts[0]);
    printf("E/e: %d\n", vowelCounts[1]);
    printf("I/i: %d\n", vowelCounts[2]);
    printf("O/o: %d\n", vowelCounts[3]);
    printf("U/u: %d\n", vowelCounts[4]);

    return 0;
}
