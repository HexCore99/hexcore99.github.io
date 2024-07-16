# 1D Array
##
    WAP that will take n integer numbers into an array, and then print all the integers into
    reverse order (from the last valid index to index 0).

     Sample Input                            Sample Output 
   
      5 
      1 2 3 4 5                                    5 4 3 2 1     
      
      6 
      2 8 3 9 0 1                               1 0 9 3 8 2     

## 01
```c
#include <stdio.h>

int main() {
  
 int n;
 scanf("%d", &n);
int arr[n];
 for (int i = 0; i < n; i++)
 {
    scanf("%d", &arr[i]);
 }
 for (int i = n-1; i >=0; i--)
 {
    printf("%d ", arr[i]);
 }
  
  
    return 0;
}

```
## 02

 WAP that will take n integer numbers into an array, and then sum up all the integers in that array.

    Sample Input        Sample Output
    5               
    1 2 3 4 5                     15
    
    6            
    2 8 3 9 0 1                   23
##
```c
#include <stdio.h>

int main() {
  
 int n, sum = 0;
 scanf("%d", &n);
int arr[n];
 for (int i = 0; i < n; i++)
 {
    scanf("%d", &arr[i]);
 sum += arr[i];
 }

  
 printf("%d\n", sum); 
    return 0;
}
```



## 03

    WAP that will take n integer numbers into an array, and then sum up all the even integers in that array.
    
    
    
    Sample input
    5
    1 2 3 4 5
    6
    2 8 3 9 0 1
    
    
    
    Sample output
    6
    
    10


##

```c
#include <stdio.h>

int main() {
  
 int n, sum = 0;
 scanf("%d", &n);
int arr[n];
 for (int i = 0; i < n; i++)
 {
    scanf("%d", &arr[i]);
 if (arr[i] % 2 == 0)
 {
 sum += arr[i];
 }
 
 }

  
 printf("%d\n", sum); 
    return 0;
}

```



## 04

    WAP that will take n integer numbers into an array, and then sum up all the even indexed integers in that array.
    Sample input 
    5
    1 2 3 4 5
    Sample output
    9

    Sample input
    6
    2 8 3 9 0 1
    Sample output
    5


##

```c

#include<stdio.h>
int  main() {
  
 int n, sum = 0;
 scanf("%d", &n);
int arr[n];
 for (int i = 0; i < n; i++)
 {
    scanf("%d", &arr[i]);
// if index is even then add ith value of array to the sum
 if ( i % 2 == 0)
 {
 sum += arr[i];
 }
 
 }

  
 printf("%d\n", sum); 
    return 0;
}


```



## 05

    WAP that will take n integer numbers into an array, and then reverse all the integers  within that array. Finally print them all from 0 index to last valid index.
    
    
    Sample input
    5
    1 2 3 4 5
    6
    2 8 3 9 0 1
    
    
    
    Sample output
    5 4 3 2 1
    
    1 0 9 3 8 2


##

```c

#include <stdio.h>

int main() {
  
 int n, sum = 0;
 scanf("%d", &n);
int arr[n];
 for (int i = 0; i < n; i++)
 {
    scanf("%d", &arr[i]);
 }

/*
here swapping 0th element with ( n-1)th element
              1th element with (n-2)th element
              ith element with n-i-1 element

*/
for (int i = 0; i < n/2; i++)
{
   int temp = arr[i];
   arr[i] = arr[n-i-1]; 
   arr[n-i-1] = temp;
}

 for (int i = 0; i < n; i++)
 {
    printf("%d ", arr[i]);
 }
  
    return 0;
}


```



## 06
    WAP that will take n integer numbers into an array, and then find the maximum and minimum among them with its index position.



    Sample input
    5
    1 2 3 4 5
    6
    2 8 3 9 0 1



    Sample output
    Max: 5, Index: 4
    Min: 1, Index: 0

    Max: 9, Index: 3
    Min: 0, Index: 4


##

```c

int main() {
  
 int n, sum = 0;
 scanf("%d", &n);
int arr[n];
 for (int i = 0; i < n; i++)
    scanf("%d", &arr[i]);
 

int max = 0, min = arr[0];
int max_indx = 0, min_indx = 0;

for (int i = 0; i < n; i++)
{
    if (arr[i]>max)
    {
        max = arr[i];
        max_indx = i;
    }
    else if (min>arr[i])
    {
        min = arr[i];
        min_indx= i;
    }
    
    
}

printf("Max: %d, Index: %d\nMin: %d, Index: %d",max, max_indx, min, min_indx);
    return 0;
}


```



## 07

    WAP that will take n alphabets into an array, and then count number of vowels in that
    array.
    
    
    
    Sample input
    7
    AKIOUEH

     29
    UNITEDINTERNATIONALUNIVERSITY
    
    
    
    Sample output
    Count: 5
    
    Count: 13
    


##

```c

#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);



    char alphabets[n];

    for (int i = 0; i < n; i++) {
        scanf(" %c", &alphabets[i]); // Note the space before %c to consume the newline character
    }

    int nmbr_Of_vwls = 0;
    for (int i = 0; i < n; i++) {
        
        if ((alphabets[i] == 'a' || alphabets[i] == 'e' || alphabets[i] == 'i' || alphabets[i] == 'o' || alphabets[i] == 'u' ||
             alphabets[i] == 'A' || alphabets[i] == 'E' || alphabets[i] == 'I' || alphabets[i] == 'O' || alphabets[i] == 'U')) {
            
            nmbr_Of_vwls++;
        }
    }

    printf(" %d\n", nmbr_Of_vwls);

    return 0; 
}


```



## 08

    WAP that will take n integers into an array, and then search a number into that array. If found then print its index. If not found then print NOT FOUND.



    Sample input
    8
    7 8 1 3 2 6 4 3
    3

    8
    7 8 1 3 2 6 4 3
    5



    Sample output
    FOUND at index position: 3, 7

    NOT FOUND


##

```c
#include <stdio.h>

int main() {
  
 int n, sum = 0;
 scanf("%d", &n);
int arr[n];
 for (int i = 0; i < n; i++)
 {
    scanf("%d", &arr[i]);
 }

  int search_Num;
  scanf("%d", &search_Num);

int search_Num_Indx[n];
int count_found_elements = 0;

// searching for the input number.
for (int i = 0; i < n; i++)
{
    if (arr[i]== search_Num)
    {
        search_Num_Indx[count_found_elements] = i; // storing found elements index in search_Num_Indx Array.
        count_found_elements++;
        
    }
    
}


if (count_found_elements)
{
    printf("FOUND at index position:");
for (int i = 0; i < count_found_elements; i++)
{
    printf("%d ", search_Num_Indx[i]);
}

}else
{
    printf("NOT FOUND\n");
}



    return 0;
}



```



## 09

    WAP that will take n integers into an array A, and then copy all numbers in reverse order from array A to another array B. Finally show all elements of both array A and B.
    
    
    
    Sample input
    8
    7 8 1 3 2 6 4 3

    3
    3 2 1
    
    
    
    Sample output
    Array A : 7 8 1 3 2 6 4 3
    Array B : 3 4 6 2 3 1 8 7

    Array A : 3 2 1
    Array B : 1 2 3
    


##

```c

#include <stdio.h>

int main() {
  
 int n, sum = 0;
 scanf("%d", &n);
int arr[n];
 for (int i = 0; i < n; i++)
 {
    scanf("%d", &arr[i]);
 }

 int cpy_arr[n];
 for (int i = 0; i < n; i++)
 {
    cpy_arr[i] = arr[n-i-1];  // putting (n-1)th element of arr to the 0th index of cpy_arr;
                             //           (n-2)th element of arr to the 1th index of cpy_arr;
                             //            (n-i-1)th element of arr to the ith index of cpy_arr;
 }

  
printf("Array A:\n");
for (int i = 0; i < n; i++)
{
    printf("%d ",arr[i]);
}


printf("\n");
printf("Array B:\n");
for (int i = 0; i < n; i++)
{
    printf("%d ",cpy_arr[i]);
}

    return 0;
}


```



## 10

    WAP that will first take n integers into an array A and then m integers into array B. Now swap all elements between array A and B. Finally show all elements of both array A and B.
    
    Sample input
    8
    7 8 1 3 2 6 4 3

    3
    3 2 1
    
    
    
    Sample output
    Array A : 3 2 1
    Array B : 7 8 1 3 2 6 4 3


##

```c
#include <stdio.h>

int main() {
int MAX = 30;
 int A[MAX];
 int B[MAX];

int n;
scanf("%d", &n);

for (int i = 0; i < n; i++)
{
    scanf("%d", &A[i]);
}
int m;
scanf("%d", &m);
for (int i = 0; i < m; i++)
{
    scanf("%d", &B[i]);
}
int max = (n>m)?n:m;

for (int i = 0; i < max; i++)
{
    int temp = A[i];
    A[i]= B[i];
    B[i] = temp;
}

printf("Array A: ");
for (int i = 0; i < m; i++)
{
    printf("%d ", A[i]);
}

printf("\nArray B: ");
for (int i = 0; i < n; i++)
{
    printf("%d ", B[i]);
}





    return 0;
}



```



## 11

    WAP that will take n positive integers into an array A. Now find all the integers that are divisible by 3 and replace them by -1 in array A. Finally show all elements of array A.
    
    
    Sample input
    8
    7 8 1 3 2 6 4 3

    3
    3 2 1
    
    
    
    Sample output
    7 8 1 -1 2 -1 4 -1
    
    -1 2 1
    


##

```c

#include <stdio.h>

int main() {
  
 int n;
 scanf("%d", &n);
int arr[n];
 for (int i = 0; i < n; i++)
 {
    scanf("%d", &arr[i]);

        if (arr[i] % 3 == 0)
        {
            arr[i] = -1;
        }
        
 }

for (int i = 0; i < n; i++)
{
    printf("%d ", arr[i]);
}

    return 0;
}


```



## 12

    WAP that will take n integers into an array A. Now sort them in ascending order within that array. Finally show all elements of array A. Reference:  http://en.wikipedia.org/wiki/Bubble_sort
    
    
    Sample input
    8
    7 8 1 3 2 6 4 3

    3
    3 2 1
    
    
    Sample output
    1 2 3 3 4 6 7 8
    
    1 2 3


##

```c

#include <stdio.h>

int main() {
  
 int n;
 scanf("%d", &n);
int arr[n];
 for (int i = 0; i < n; i++)
 {
    scanf("%d", &arr[i]);

 }

for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n-i-1; j++)
    {
        if (arr[j]>arr[j+1])
        {
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
        
    }
    
}

for (int i = 0; i < n; i++)
{
    printf("%d ", arr[i]);
}

    return 0;
}


```



## 13

    WAP that will take n integers into an array A. Now remove all duplicates numbers from that array. Finally print all elements from that array.
      
    Sample input:
    8
    2 8 1 3 2 6 4 3

    3
    3 3 3
    
    4
    6 7 8 9
    
    
    Sample output
    2 8 1 3 6 4
    
    3
  
    6 7 8 9
    


##

```c

#include <stdio.h>

int main() {
  
 int n;
 scanf("%d", &n);
int arr[n];
 for (int i = 0; i < n; i++)
 {
    scanf("%d", &arr[i]);

 }

for (int i = 0; i < n; i++)
{
    for (int j = i+1; j <= n; j++)
    {
    if (arr[i] == arr[j])
    {
        n--;
        for (int k = j; k < n; k++)
        {
            arr[k] = arr[k+1];
        }
        
        
    }
    
        
    }
    
}

for (int i = 0; i < n; i++)
{
    printf("%d ", arr[i]);
}

    return 0;
}


```



## 14

    WAP that will take n integers into an array A and m positive integers into array B. Now find the intersection (set operation) of array A and B.
    

    Sample input
    8
    7 8 1 5 2 6 4 3
    6
    1 3 6 0 9 2

    3
    1 2 3
    2
    4 5

    
    Sample output
    1 2 6 3
    
    Empty set
     


##

```c
#include <stdio.h>

int main() {



int n;
scanf("%d", &n);
int A[n];
for (int i = 0; i < n; i++)
{
    scanf("%d", &A[i]);
}
int m;
scanf("%d", &m);


int B[m];
for (int i = 0; i < m; i++)
{
    scanf("%d", &B[i]);
}


int max = (n>m)? n: m;
int store_intersec[max];
int indx = 0;

for (int i = 0; i < n; i++)
{
    for (int j = 0; j < m; j++)
    {
       if (A[i] == B[j])
       {
        store_intersec[indx++] = B[j];
       }
       
    }
    
}

if (indx == 0)
{
    printf("Empty set\n");
    return 0;
}


for (int i = 0; i < indx; i++)
{
    printf("%d ", store_intersec[i]);
}


    return 0;
}



```



## 15

 
    Sample input
    8
    7 8 1 5 2 6 4 3
    6
    1 3 6 0 9 2

    3
    1 2 3
    2
    4 5
    
  
    Sample output
    7 8 1 5 2 6 4 3 0 9
    
    
    1 2 3 4 5
    


##

```c

#include <stdio.h>

int main() {
 int n;
 scanf("%d", &n); 
 int arr1[n];
 for (int i = 0; i < n; i++)
 {
    scanf("%d", &arr1[i]);
 }
 int m;
 scanf("%d", &m); 
int arr2[m];

for (int i = 0; i < m; i++)
{
   scanf("%d", &arr2[i]);

}

int Union[m+n];
int Union_Indx = 0;
for (int i = 0; i < n; i++)
{
   Union[Union_Indx++] = arr1[i];
}


for (int i = 0; i < m; i++)
{

 int flag = 1; 
   for (int j =0 ; j < n; j++)
   {
    if (arr1[j] == arr2[i])    // checking if arr2 element and arr1 element is same
    {
      flag = 0;
      break;
    }
     
   }
  if (flag)
  {
   Union[Union_Indx++] = arr2[i]; // if arr2 element is not present int the arr1,
                                  // then put that element into Union array

  }
   
}

for (int i = 0; i < Union_Indx; i++)
{
   printf("%d ", Union[i]);
}

 
    return 0;
}


```


## 16

    WAP that will take n integers into an array A and m positive integers into array B. Now find the difference (set operation) of array A and B or (A-B).
    
    
    
    Sample input
    8
    7 8 1 5 2 6 4 3
    6
    1 3 6 0 9 2

    3
    1 2 3
    2
    4 5
    
    
    Sample output
    7 8 5 4
    
    1 2 3


##

```c

#include < stdio.h >

int main() {
 int n;
 scanf("%d", &n); 
 int arr1[n];
 for (int i = 0; i < n; i++)
 {
    scanf("%d", &arr1[i]);
 }
 int m;
 scanf("%d", &m); 
int arr2[m];

for (int i = 0; i < m; i++)
{
   scanf("%d", &arr2[i]);

}

int subtrct[m+n];
int subtrct_Indx = 0;



for (int i = 0; i < n; i++)
{

 int flag = 1; 
   for (int j =0 ; j < m; j++)
   {
    if (arr1[i] == arr2[j])    // checking if arr2 element and arr1 element is same
    {
      flag = 0;
      break;
    }
     
   }
  if (flag)
  {
   subtrct[subtrct_Indx++] = arr1[i]; 

  }
   
}

for (int i = 0; i < subtrct_Indx; i++)
{
   printf("%d ", subtrct[i]);
}

 
    return 0;
}


```

