#include <stdio.h>

void scalar_Multiply(int Row, int Col, int mat[][Col], int mult_Value)
{
    printf("\n\nMultiplied by %d:\n", mult_Value);

    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Col; j++)
        {
            mat[i][j] *= mult_Value;
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}

void show_Matrix(int Row, int Col, int mat[][Col])
{
    printf("Orginal:\n");
    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Col; j++)
        {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}
int input_Matrix(int Row, int Col, int mat[][Col])
{

    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Col; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    int multiple_Value;
    scanf("%d", &multiple_Value);

    return multiple_Value;
}

int main()
{
    int Row, Col;
    scanf("%d %d", &Row, &Col);
    int mat[Row][Col];
    int mult_Value = input_Matrix(Row, Col, mat);
    show_Matrix(Row, Col, mat);
    scalar_Multiply(Row, Col, mat, mult_Value);
    return 0;
}