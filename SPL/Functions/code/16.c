#include <stdio.h>
int find_substr(char str[], int str_lngth, char sub_Str[], int sub_str_lngth)
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
int str_length(char str[])
{
    int length = 0;
    while (str[length] != '\n')
    {
        length++;
    }
    return length;
}
int main()
{
    char str[100], sub_Str[100];
    int lngth = 0, sub_lngth = 0;
    int check_return = 0;

    while (1)
    {
        scanf("%c", &str[lngth]);

        if (str[lngth] == '\n')
        {
            break;
        }

        lngth++;
    }
    int str_lngth = str_length(str);
    while (1)
    {
        scanf("%c", &sub_Str[sub_lngth]);

        if (sub_Str[sub_lngth] == '\n')
        {
            break;
        }

        sub_lngth++;
    }

    int sub_str_lngth = str_length(sub_Str);

    if (sub_str_lngth > str_lngth)
    {
        check_return = find_substr(sub_Str, sub_str_lngth, str, str_lngth);
    }
    else
    {
        check_return = find_substr(str, str_lngth, sub_Str, sub_str_lngth);
    }
    if (check_return == 1)
    {
        printf("%d\n", 1);
    }
    else
    {
        printf("%d\n", 0);
    }

    return 0;
}