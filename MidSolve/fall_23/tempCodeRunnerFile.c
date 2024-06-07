#include <stdio.h>

int main()
{
    int start = 105, end = 112, count = 0;

    printf("i\t\t start\t\t (end%%2) \tend\t\t count\t\t end+2\t\t start+1\n");
    for (int i = end; i >= start; i--)
    {
        if (end % 2 != 0)
        {
            count++;
            start++;
            end + 2;
            printf("%d\t\t %d\t\t  TRUE\t\t %d\t\t %d\t\t %d\t\t %d\n", i, start, end, count, end + 2, start + 1);
        }
        else
        {
            end--;
            start + 1;
            printf("%d\t\t %d\t\t  FALSE\t\t %d\t\t %d\t\t %d\t\t %d\n", i, start, end, count, end + 2, start + 1);
        }
    }

    return 0;
}
