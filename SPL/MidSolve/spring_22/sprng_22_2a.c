#include <stdio.h>

int main()
{

    int b;
    scanf("%d", &b);

    printf("Begin\n");
    if (b >= 5)
    {
        printf("UIU\n");
    }
    else if (b <= 5)
    {
        printf("CSE\n");
    }
    else
    {
        printf("Bye\n");
    }
    printf("End\n");
    return 0;
}