## Recursion

## 01
    WAP that will display numbers 1 to 10 using recursion.


    Sample input                  Sample output


##
```c

#include <stdio.h>
void printNum(int n)
{
    if(n< 0) return;
    printNum(n-1);
    printf("%d", n);
}
int main()
{

    int n;
    scanf("%d", &n);
printNum(n);
    return 0;
}


```
## 02
    WAP that will calculate the sum of numbers from 1 to n using recursion.


    Sample input                  Sample output


##

```c

#include <stdio.h>
int calcSum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + calcSum(n - 1);
}
int main()
{

    int n;
    scanf("%d", &n);

    printf("%d", calcSum(n));
    return 0;
}

```

## 03
    WAP that will display Fibonacci Series using recursion.

##

```c
#include <stdio.h>

int findFibonacci(int n)
{
    if (n < 2)
        return n;
    return findFibonacci(n - 1) + findFibonacci(n - 2);
}

void printFibonacci(int n)
{
    if (n == 0)
    {
        printf("0 "); // Print 0 separately
        return;
    }

    printFibonacci(n - 1);
    printf("%d ", findFibonacci(n));
}

int main()
{
    int n;
    scanf("%d", &n);

    printFibonacci(n - 1);
    return 0;
}



```

## 04
    WAP that will print the array elements using recursion.


    Sample input                  Sample output

##

```c
#include <stdio.h>
void printArray(int arr[], int size)
{
    if (size <= 0)
    {
        return;
    }
    printArray(arr, size - 1);
    printf("%d ", arr[size - 1]);
}
int main()
{

    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printArray(arr, n);
    return 0;
}


```

## 05
    WAP that will count the digits of a given number using recursion.


    Sample input                  Sample output

##

```c
#include <stdio.h>
int count_Digits(int n)
{
    int count = 0;
    if (n <= 0)
        return count;
    count = count_Digits(n / 10);
    return count + 1;
}
int main()
{

    int n;
    scanf("%d", &n);
    printf("%d", count_Digits(n));

    return 0;
}


```

## 06
    WAP that will get the largest element of an array using recursion.


    Sample input                  Sample output

##

```c
#include <stdio.h>
int find_Max(int arr[], int size)
{
    if (size <= 0)
    {
        return arr[size];
    }
    int max = find_Max(arr, size - 1);
    return max > arr[size] ? max : arr[size];
}
int main()
{

    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("%d", find_Max(arr, n - 1));
    return 0;
}


```

## 07
    WAP that will print even or odd numbers in given range using recursion.


    Sample input                  Sample output

##

```c

#include <stdio.h>
void print_Even_Odd(int n)
{
    if (n == 0)
        return;
    print_Even_Odd(n - 1);
    if (n % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");
}
int main()
{

    int n;
    scanf("%d", &n);

    print_Even_Odd(n);
    return 0;
}

```

## 08
    WAP that will check whether a given String is Palindrome or not.


    Sample input                  Sample output

##

```c
#include <stdio.h>

void checkPalidrome(char *str, int length)
{
    if (length <= 1)
    {
        printf("Palindrome\n");
        return;
    }
    if (*str != *(str + length))
    {
        printf("Not Palindrome\n");
        return;
    }

    checkPalidrome(str + 1, length - 2);
}
int main()
{

    char str[100];
    char ch;
    int lngth = 0;
    while ((ch = getchar()) != '\n')
    {
        str[lngth++] = ch;
    }
    str[lngth] = '\0';
    checkPalidrome(str, lngth - 1);
    return 0;
}


```