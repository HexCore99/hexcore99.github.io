#include <stdio.h>

int main()
{

    float sum = 0;
    int pos_Count = 0;

    while (1)
    {
        int input;
        scanf("%d", &input);

        if (input == 0)
        {
            break;
        }
        else if (input > 0)
        {
            sum += input;
            pos_Count++;
        }
    }

    float avg = sum / pos_Count;

    printf("Average = %.2f", avg);
    return 0;
}