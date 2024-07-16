#include <stdio.h>

int main() {
int rows; scanf("%d", &rows);

for (int i = 1; i <= rows/2 + 1; i++)
 {
    for (int j = 1; j <= rows/2 + 1-i; j++)
    {
        printf("_");
    }

    for (int j = 1; j <= 2*i-1; j++)
    {
        if (i == j || j== 1 || j == (2*i-1) || i == rows/2 + 1)
        {
            printf("$");
        }else  printf("_");       
    }
   printf("\n");   
 }
 for (int i = rows/2; i>=1; i--)
 {
    for (int j = 1; j <= rows/2 + 1-i; j++)
    {
        printf("_");
    }

    for (int j = 1; j <= 2*i-1; j++)
    {
        if (i == j || j== 1 || j == (2*i-1) || i == rows/2 + 1)
        {
            printf("$");
        }else  printf("_");       
    }
    printf("\n");     
    }
}