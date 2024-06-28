#include <stdio.h>

void find_Vwls_Consnt(char *str, int *vwls, int *consonants)
{
    for (char *s = str; *s != '\0'; s++)
    {
        char *vowels = "aeiouAEIOU";
        int flag = 0;
        for (char *v = vowels; *v != '\0'; *v++)
        {
            if (*v == *s)
            {
                flag = 1;
                break;
            }
        }

        if (flag)
            (*vwls)++;
        else
            (*consonants)++;
    }
}
int main()
{

    char str[100];
    scanf("%[^\n]%*c", str);
    int vwls = 0, consonants = 0;
    find_Vwls_Consnt(str, &vwls, &consonants);
    printf("Vowels: %d\nConsonants: %d", vwls, consonants);
    return 0;
}