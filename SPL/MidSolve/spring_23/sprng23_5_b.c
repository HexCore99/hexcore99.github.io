#include <stdio.h>

int main()
{

  int arr[100][100], i, j, t1 = 0, t2 = 1, t3, x, y, z;
  printf("i=\t\t x=t1\t\t y=t2\t\t z=t1+t2\t\t j\t\t t3=t1+t2\t\t arr[i][j]\t\t t1=t2\t\t t2=t3 \n");

  for (i = 0; i < 5; i++)
  {
    x = t1, y = t2, z = t1 + t2;
    for (j = 0; j < 5; j++)
    {
      t3 = t1 + t2;
      arr[j][i] = t3;
      t1 = t2;
      t2 = t3;
      printf("%d\t\t %d\t\t %d\t\t %d\t\t\t %d\t\t %d\t\t\t %d\t\t\t %d\t\t %d\n", i, x, y, z, j, t3, j, i, arr[j][i], t1, t2);
    }
    t1 = y;
    t2 = z;

    printf(" \t\t  \t\t  \t\t  \t\t\t\t  \t\t  \t\t\t\t\t %d\t\t %d\n", t1, t2);
  }
  printf("\n\n");

  // printing the array
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      printf(" %d  ", arr[i][j]);
    }
    printf("\n");
  }

  return 0;
}