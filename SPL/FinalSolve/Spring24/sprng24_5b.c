#include <stdio.h>

int main()
{
    FILE *fp = fopen("string.txt", "a");
    fprintf(fp, "This is another string\n");
    fclose(fp);

    return 0;
}