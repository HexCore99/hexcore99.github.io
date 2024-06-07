#include <stdio.h>

int main()
{

    int row, col, sum = 0;
    int A[][3] = {{1, 2, 3},
                  {11, 5, 6},
                  {12, 7, 9},
                  {8, 13, 4}};

    // printf("row\t\t col\t\t col>row\t\t sum\n");
    for (row = 0; row < 4; row++)
    {
        for (col = 0; col < 3; col++)
        {
            if (col > row)
            {
                sum += A[row][col];
                // printf("%d\t\t %d\t\t TRUE\t\t\t %d\n", row, col, sum);
            }
            else
            {
                //  printf("%d\t\t %d\t\t FALSE\t\t\t %d\n", row, col, sum);
            }
        }
    }

    return 0;
}