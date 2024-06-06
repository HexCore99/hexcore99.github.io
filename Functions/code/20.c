#include <stdio.h>
void Get_Number_And_Base(int *num, int *base)
{
    scanf("%d %d", num, base);
}

int convert_Num(char str[], int size, int num, int base)
{

    int iteration = 0;

    char alphabet[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

    while (num > 0)
    {
        int reminder = num % base;

        str[iteration++] = alphabet[reminder];

        num /= base;
    }

    return iteration - 1;
}
void show_Converted_Number(char str[], int size)
{
    for (int i = size; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
}
int main()
{
    int num, base;
    char str[1000];
    Get_Number_And_Base(&num, &base);
    if (base < 1 || base > 16)
    {
        printf("Base not within proper range!\n");
        return 0;
    }

    int str_Size = convert_Num(str, 1000, num, base);
    show_Converted_Number(str, str_Size);
    return 0;
}