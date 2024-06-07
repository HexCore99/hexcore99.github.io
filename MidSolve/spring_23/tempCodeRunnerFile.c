#include <stdio.h>

int main()
{
    int weeks = 2, days_in_week = 7;
    int i = 1; // Initialize i before the outer do-while loop

    do
    {
        printf("Week: %d\n", i);
        int j = 1; // Initialize j before the inner do-while loop

        do
        {
            if (i % 2 == 0)
            { // Check if week is even
                if (j % 2 == 0)
                { // Check if day is even
                    printf("  Day: %d\n", j);
                }
            }
            else
            { // Week is odd
                if (j % 2 != 0)
                { // Check if day is odd
                    printf("  Day: %d\n", j);
                }
            }
            j++; // Increment day counter
        } while (j <= days_in_week); // Inner loop condition

        i++; // Increment week counter
    } while (i <= weeks); // Outer loop condition

    return 0;
}
