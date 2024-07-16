# Pointers

## 01
    WAP that will add two numbers using pointers.

##

```c
#include <stdio.h>

void sum(int *a, int *b)
{
    printf("%d\n", *a + *b);
}
int main()
{

    int a, b;
    scanf("%d %d", &a, &b);
    sum(&a, &b);
    return 0;
}


```

## 02
    WAP that will find the maximum number between two numbers using a pointer.

##

```c
#include <stdio.h>

void find_Max(int *a, int *b)
{
    if (*a >= *b)
    {
        printf("%d", *a);
    }
    else
        printf("%d", *b);
}
int main()
{

    int a, b;
    scanf("%d%d", &a, &b);
    find_Max(&a, &b);
    return 0;
}


```

## 03
    WAP that will print the elements of an array without using index.

##

```c
#include <stdio.h>
void print_Array(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *arr++);
    }
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
    print_Array(arr, n);
    return 0;
}


```

## 04
    WAP that will calculate the length of the string using pointers.

##

```c

#include <stdio.h>
void find_length(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    printf("%d", i);
}
int main()
{

    char str[100];
    scanf("%[^\n]%*/c", str);
    find_length(str);
    return 0;
}

```

## 05
    WAP that will swap values of two variables using pointers.

##

```c
#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{

    int a, b;
    scanf("%d%d", &a, &b);
    swap(&a, &b);
    printf("%d  %d", a, b);

    return 0;
}


```

## 06
    WAP that will count the number of vowels and consonants in a string using pointer

##

```c

#include <stdio.h>

void find_Vwls_Consnt(char *str, int *vwls, int *consonants)
{
    for (char *s = str; *s != '\0'; s++)
    {
        char *vowels = "aeiouAEIOU";
        int flag = 0;
        for (char *v = vowels; *v != '\0'; *v++)
        {
            if (*v == *s)
            {
                flag = 1;
                break;
            }
        }

        if (flag)
            (*vwls)++;
        else
            (*consonants)++;
    }
}
int main()
{

    char str[100];
    scanf("%[^\n]%*c", str);
    int vwls = 0, consonants = 0;
    find_Vwls_Consnt(str, &vwls, &consonants);
    printf("Vowels: %d\nConsonants: %d", vwls, consonants);
    return 0;
}

```

## 07
    WAP that will compute the sum of all elements in an array using pointers.

##

```c
#include <stdio.h>

int sum(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += *(arr + i);
    }
    return sum;
}
int main()
{

    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr + i);
    }

    printf("%d", sum(arr, n));
    return 0;
}


```

## 08
    WAP that will print the elements of an array in reverse indexed order.

##

```c

#include <stdio.h>
void printReverse(int *arr, int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", *(arr + i));
    }
}
int main()
{

    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr + i);
    }

    printReverse(arr, n);
    return 0;
}

```