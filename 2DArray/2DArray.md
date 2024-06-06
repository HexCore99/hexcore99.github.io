# 2D Array

## 01

    WAP that will take 9 integers into a 3 by 3 array (2D) and show them as traditional 
    matrix view.
    
    Sample input
    9 8 7 6 5 4 3 2 1
     
    1 1 1 2 2 2 3 3 3
    
    
    Sample output
    9 8 7
    6 5 4
    3 2 1

    1 1 1
    2 2 2
    3 3 3


##

```c
#include <stdio.h>

int main() {
  
 int arr[3][3];

 for (int i = 0; i < 3; i++)
 {
    for (int j = 0; j < 3; j++)
    {
        scanf("%d", &arr[i][j]);
    }
    
 }
  
  for (int i = 0; i < 3; i++)
 {
    for (int j = 0; j < 3; j++)
    {
        printf("%d ", arr[i][j]);
    }
 printf("\n");
 }   
  
    return 0;
}

```

## 02

    WAP that will take (m x n) integers into a m by n array (2D) and print them both row-wise
    and column-wise.
    
    
    
    Sample input (m,n)
    2 3
    1 2 3
    6 5 4

    3 3
    1 1 1
    2 2 2
    3 3 3
    
    
    Sample output
    Row-wise: 1 2 3 6 5 4
    Column-wise: 1 6 2 5 3 4
    
    Row-wise: 1 1 1 2 2 2 3 3 3
    Column-wise: 1 2 3 1 2 3 1 2 3


##

```c
#include <stdio.h>

int main() {
 int m , n;
 scanf("%d %d", &m, &n); 
 int arr[m][n];

 for (int i = 0; i < m; i++)
 {
    for (int j = 0; j < n; j++)
    {
        scanf("%d", &arr[i][j]);
    }
    
 }
 printf("Row-wise: "); 
  for (int i = 0; i < m; i++)
 {
    for (int j = 0; j < n; j++)
    {
        printf("%d ", arr[i][j]);
    }

 }   
 printf("\n");
 printf("Column-wise: ");
  for (int i = 0; i < n; i++)
 {
    for (int j = 0; j < m; j++)
    {
        printf("%d ", arr[j][i]);
    }

 }   


  


    return 0;
}

```


## 03

    WAP that will take inputs of a 3 by 3 matrix into a 2D array. Now find the determinant of
    this matrix.


Sample input
1 2 3
4 5 6
7 8 9

Sample output
0



##

```c
#include <stdio.h>

int main() {
    float arr[3][3];

    // Input the matrix elements
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%f", &arr[i][j]);
        }
    }

    // Calculate the determinant
    float det = arr[0][0] * (arr[1][1] * arr[2][2] - arr[2][1] * arr[1][2])
                - arr[0][1] * (arr[1][0] * arr[2][2] - arr[1][2] * arr[2][0])
                + arr[0][2] * (arr[1][0] * arr[2][1] - arr[1][1] * arr[2][0]);

    // Display the determinant
    printf(" %.2f\n", det);

    return 0;
}

```




## 04

    WAP that will take inputs of a n sized square matrix into a 2D array.
    Now show all the elements of its two diagonals.



    Sample input
    5
    1 2 3 4 5
    5 4 3 2 1
    2 2 2 2 2
    6 7 8 9 0
    1 9 3 7 4

    Sample output
    Major diagonal: 1 4 2 9 4
    Minor diagonal: 5 2 2 7 1


##

```c

#include <stdio.h>

int main() {
  
 int n;
 scanf("%d", &n);

 int arr[n][n];

 for (int i = 0; i < n; i++)
 {
    for (int j = 0; j < n; j++)
    {
        scanf("%d", &arr[i][j]);
    }
    
 }

 printf("Major diagonal: "); 
 for (int i = 0; i < n; i++)
 {
    for (int j = 0; j < n; j++)
    {
        if (i == j )
        {
            printf("%d ", arr[i][j]);
        }
        
    }
    
 }
printf("\nMinor diagonal: ");
 for (int i = 0; i< n; i++)
 {
        for (int j = 0; j < n; j++)
    {
                        // printing ...
       if (j == n-i-1)  // 1st row n-1 column;
                        // 2nd row n-2 column;
                        // ith row n-i-1 column;
       {
        printf("%d ", arr[i][j]);
       }
        
    }
 }
  
    return 0;
}


```



## 05

    WAP that will take the size of an identity matrix from the user and
    generate the identity matrix into a 2D array. Finally display it.
    
    
    Sample input
    5   
    
    Sample output
    1 0 0 0 0
    0 1 0 0 0
    0 0 1 0 0
    0 0 0 1 0
    0 0 0 0 1



##

```c

#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);
    int arr[n][n];


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                printf("1 ");
            }else
            {
                printf("0 ");
            }
            
            
        }
        
    printf("\n");
    }
    return 0;
}


```



## 06

    WAP that will take inputs of two m x n sized matrix into two 2D array, suppose A and B.
    Now do C = A + B. Finally display all the elements from matrix / 2D array C.
    
    
    Sample input
    2 3
    1 2 3
    2 3 4
    1 1 1
    2 2 2
    
    
    Sample output
    2 3 4
    4 5 6


##

```c

#include <stdio.h>

int main() {
    int m, n;

    scanf("%d", &m);

    scanf("%d", &n);

    int A[m][n], B[m][n], C[m][n];

    // Input elements for matrix A
 
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {

            scanf("%d", &A[i][j]);
        }
    }

    // Input elements for matrix B

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {

            scanf("%d", &B[i][j]);

            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // Display the elements of matrix C

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}


```



## 07

    WAP that will take inputs of two 3 x 3 sized matrix into two 2D array, suppose A and B.
    Now  do C = A * B (multiplication). Finally display all the elements from matrix / 2D array C.
    
    Sample input
    1 2 3
    4 5 6
    7 8 9
    2 2 2
    2 2 2
    1 1 1
       
    Sample output
    9 9 9
    24 24 24
    39 39 39


##

```c
#include <stdio.h>



int main() {
int SIZE = 3;
    int A[SIZE][SIZE], B[SIZE][SIZE], C[SIZE][SIZE];

    //  matrix A
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // matrix B
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Multipling matrices A and B to matrix C
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            C[i][j] = 0;
            for (int k = 0; k < SIZE; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Display  matrix C

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}



```



## 08

    WAP that will take inputs of m x n sized matrix into a 2D array and find the maximum
    element with index location from that matrix.
     
    
    Sample input
    3 3
    1 2 3
    4 5 6
    2 9 2

    2 3
    9 8 7
    3 4 5   
    
    Sample output
    Max: 9
    Location: [2][1]
    
    
    Max: 9
    Location: [0][0]


##

```c

#include <stdio.h>

int main() {
    int m, n;

    // Input the dimensions of the matrix
    scanf("%d %d", &m, &n);


    // Declare the matrix
    int matrix[m][n];

    int element = 0;
    int RowIndx = 0, ColIndx = 0;

    // Input the matrix elements
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);


            if (matrix[i][j] > element) {
                element = matrix[i][j];
                RowIndx = i;
                ColIndx = j;
            }

        }
    }


    // Display the maximum element and its index location
    printf("Max: %d\n", element);
    printf("Location: [%d][%d]\n", RowIndx, ColIndx);

    return 0;
}


```



## 09




##

```c

#include <stdio.h>

int main() {
    int m;

    // Input the dimensions of the matrix
    scanf("%d", &m);


    // Declare the matrix
    int matrix[m][m];


int sum = 0;
    // Input the matrix elements
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m ; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }


    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if ( i == 0 || i == (m-1)) // adding first row and last row
            {
                sum += matrix[i][j];
            }else if (j == i || j == m-i-1) // adding diagonal
            {
                sum+= matrix[i][j];
            }
            
            
        }
        
    }
    

printf("%d\n", sum);

    return 0;
}


```



## 10




##

```c
#include <stdio.h>

int main() {
    int m;

    // Input the dimensions of the matrix
    scanf("%d", &m);


    // Declare the matrix
    int matrix[m][m];


int sum = 0;
    // Input the matrix elements
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m ; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }


    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
           if (i<  m/2)
           {
            if ((i == 0 && j<= m/2) || (i == 0 && j == m-1))
            {
                sum += matrix[i][j];
            }else if ( j== m/2 || j == m-1)
            {
                sum += matrix[i][j];
            }
            
            
           }else if (i == m/2)
           {
            sum += matrix[i][j];
           }else
           {
         if ((i == m-1 && j == 0) || (i == m-1 && j>m/2))
           {
            sum += matrix[i][j];
           }else if (j == 0 || j == m/2)
           {
            sum += matrix[i][j];
           }
    
           }
           
         
        }
        
    }
    

printf("%d\n", sum);

    return 0;
}



```



## 11




##

```c

#include <stdio.h>

int main() {
    int m;

    // Input the dimensions of the matrix
    scanf("%d", &m);


    // Declare the matrix
    int matrix[m][m];

    int element = 0;
int sum = 0;
    // Input the matrix elements
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m ; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }


    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {

          if (i % 2 == 0 && j% 2 != 0)
          {
           sum += matrix[i][j]; 
          }else if(i % 2 != 0)
          {
            sum += matrix[i][j];
          }
          
        }
        
    }
    

printf("%d\n", sum);

    return 0;
}


```



## 12

    WAP that will take (m x n) integer inputs into a matrix of dimension m x n. Now reverse
    that matrix within itself and display it. Reversal means swap 1ˢᵗ column with the nᵗʰ column,
    swap  2ⁿᵈ column with the (n-1)ᵗʰ column and so on…


    Sample input
    3 3
    1 2 3
    4 5 6
    2 9 2

    2 6
    1 2 3 4 5 6
    9 8 7 6 5 4



    Sample output
    3 2 1
    6 5 4
    2 9 2

    6 5 4 3 2 1
    4 5 6 7 8 9



##

```c
#include <stdio.h>

int main() {
    int m, n;

    scanf("%d %d", &m, &n);

    // Declare the matrix
    int matrix[m][n];


    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Reverse the matrix within itself
for (int  i = 0; i < m; i++)
{
    for (int j = 0; j < n/2; j++)
    {
       int temp = matrix[i][j];
       matrix[i][j] = matrix[i][n-j-1];
       matrix[i][n-j-1] = temp; 
    }
    
}


    // Display the reversed matrix
   
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}



```



## 13

    WAP that will take (n x n) integer inputs into a square matrix of dimension n. Now
    determine whether the matrix is symmetric or not. Reference: 
    http://en.wikipedia.org/wiki/Symmetric_matrix
    
    
    
    
    
    Sample input
    3
    1 7 3
    7 4 5
    3 5 6

    2
    1 3
    4 2

    
    
    Sample output
    Yes
    
    
    
    No
    


##

```c

#include <stdio.h>

int main() {
    int m, n;
    int flag = 0;

    scanf("%d", &m);

    // Declare the matrix
    int matrix[m][m];


    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }


for (int i = 0; i < m; i++)
{
for (int j = 0; j < m; j++)
{
if (matrix[i][j] != matrix[j][i])
{
    flag = 1;
    break;
}

}
if (flag)
{
    break;
}

}

if (flag)
{
    printf("NO\n");
}else
{
    printf("YES\n");
}



    return 0;
}


```



## 14

    WAP that will take (m x n) positive integer inputs into a matrix of dimension m x n.
    Now replace all the duplicate integers by -1 in that matrix. Finally display it.
     
    
    Sample input
    3 3
    1 7 3
    7 4 5
    3 5 6

    2 6
    2 2 2 2 2 2
    6 5 4 3 2 1
    
    
    Sample output
    1 7 3
    -1 4 5
    -1 -1 6
    
    2 -1 -1 -1 -1 -1
    6 5 4 3 -1 1
    


##

```c
#include <stdio.h>


int main() {
    int m, n;

    scanf("%d %d", &m, &n);

    // Declare the matrix
    int matrix[m][n];

    // Input the matrix elements
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
            for(int i = 0; i< m; i++){
                for (int j = 0; j < n; j++)
                {

                    // here traversing the whole matrix for every [i][j]
            for (int p = 0; p < m; p++) {
                for (int q = 0; q < n; q++) {
                    if (p == i && j == q)
                    {
                       continue; 
                    }
                    
                       else if ((matrix[i][j] == matrix[p][q]))
                        {
                            matrix[p][q] = -1;
                        }
                        
                    }
               
 
                }
            }

        }
    


    // Display the modified matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}



```



## 15

    WAP that will take (m x n) integer inputs into a matrix of dimension m x n. Now just
    simply add all the integers in that matrix and show the result.
    
    
    
    Sample input
    3 3
    1 7 3
    7 4 5
    3 5 6

    2 6
    2 2 2 2 2 2
    6 5 4 3 2 1
    
    
    Sample output
    41
    
    33


##

```c

#include <stdio.h>



int main() {
    int m, n;

    // Input the dimensions of the matrix
    scanf("%d %d", &m, &n);



    // Declare the matrix
    int matrix[m][n];
int sum  = 0;
    // Input the matrix elements
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];


        }
    }

printf("%d\n", sum);
          return 0;
}


```

