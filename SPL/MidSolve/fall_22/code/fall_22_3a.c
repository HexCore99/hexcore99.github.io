#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    int sum = 0;
    int sequence = 0;
    int track = 5;

    printf("0, ");
    for (int i = 1; i < n; i++)
    {
        sequence += track;
        printf("%d, ", sequence);

        track += 8;
        sum += sequence;
    }

    printf("Sum = %d", sum);
    return 0;
}