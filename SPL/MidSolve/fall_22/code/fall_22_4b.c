#include <stdio.h>

int main()
{

    int n;
    int marks[100];
    scanf("%d", &n);

    int max_even = 0;
    int max_evn_index = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &marks[i]);

            if (marks[i] % 2 == 0 && (marks[i] > max_even))
            {

                max_even = marks[i];
                max_evn_index = i;
            }
        
    }

    printf("Maximum of even numbers = %d, at index %d.", max_even, max_evn_index);

    return 0;
}