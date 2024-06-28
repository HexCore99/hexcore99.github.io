#include <stdio.h>
int check_Sub_String(char str[], int str_lngth, char sub_Str[], int sub_str_lngth)
{
    int flag = 0;
    for (int i = 0; i < str_lngth; i++)
    {
        int track = 0, count = 0;

        if (str[i] == sub_Str[0])
        {
            track = i;
            for (int j = 0; j < sub_str_lngth; j++)
            {

                if (str[track] == sub_Str[j])
                {
                    count++;
                }
                else
                    break;

                track++;
            }
        }
        if (count == sub_str_lngth)
        {
            return 1;
            break;
        }
    }
    return -1;
}
int main()
{
    char str[100], sub_Str[100];
    int lngth = 0, sub_lngth = 0;
    int flag = 0;

    while (1)
    {
        scanf("%c", &str[lngth]);

        if (str[lngth] == '\n')
            break;

        lngth++;
    }

    while (1)
    {
        scanf("%c", &sub_Str[sub_lngth]);

        if (sub_Str[sub_lngth] == '\n')
            break;

        sub_lngth++;
    }
    printf("%d\n", check_Sub_String(str, lngth, sub_Str, sub_lngth));
    return 0;
}