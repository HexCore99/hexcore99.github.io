---
title: Summer 23
---
# Summer 23

## Q1. a

```c
#include <stdio.h>

int IsEven(int num)
{
    if (num % 2 == 0)
        return 1;
    else
        return 0;
}

int ComputeEvenSum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (IsEven(arr[i]))
            sum += arr[i];
    }
    return sum;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int evenSum = ComputeEvenSum(arr, n);

    printf("The sum of even numbers in the array is: %d", evenSum);
    return 0;
}
```

## Q1.b

```c
output:
-------
1  3  5 2
8  3  4 2
16 3  4 12
32 29 4 12
```

## Q2. a

```c
output:
-------
Hello
# Gen Z

```

## Q2. b

```c
#include <ctype.h>
#include <stdio.h>
#include <string.h>
// Function to convert a string to lowercase
int toLowerCase(char *str)
{
    int length = 0;
    for (int i = 0; str[i]; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
        length++;
    }
    return length;
}
int countOccurrences(char *str1, char *str2)
{
    int count = 0, i, j, len1, len2;
    len1 = toLowerCase(str1);
    len2 = toLowerCase(str2);

    printf("len1: %d\n", len1);
    for (i = 0; i <= len1 - len2; i++)
    {
        int match = 1;
        for (j = 0; j < len2; j++)
        {
            if ((str1[i + j]) != (str2[j]))
            {
                match = 0;
                break;
            }
        }
        if (match)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    char str1[100], str2[20];

    scanf("%[^\n]%*c", str1);
    scanf("%[^\n]%*c", str2);

    int occurrences = countOccurrences(str1, str2);
    printf("Number of occurrences: %d\n", occurrences);

    return 0;
}
```

## Q3

```c
#include <stdio.h>
#include <string.h>

#define MAX_CRICKETERS 100
#define MAX_NAME_LENGTH 50
#define MAX_COUNTRY_LENGTH 50
#define MAX_TYPE_LENGTH 10
#define MAX_MATCHES 30

// Structure to store cricketer information
typedef struct
{
    char name[MAX_NAME_LENGTH];
    char country[MAX_COUNTRY_LENGTH];
    char type[MAX_TYPE_LENGTH];
    int wickets[MAX_MATCHES];
    int runs[MAX_MATCHES];
    int matches_played;
} Cricketer;

int main()
{
    Cricketer cricketers[MAX_CRICKETERS];
    int num_cricketers;
    int i, j;
    double max_performance = 0.0;
    int cricketer_of_the_year_index = -1;

    // Take input for 100 cricketers
    printf("Enter the number of cricketers (up to %d): ", MAX_CRICKETERS);
    scanf("%d", &num_cricketers);

    for (i = 0; i < num_cricketers; i++)
    {
        scanf("%[^\n]%*c", cricketers[i].name);
        scanf("%[^\n]%*c", cricketers[i].country);
        scanf("%[^\n]%*c", cricketers[i].type);
        for (j = 0; j < MAX_MATCHES; j++)
        {
            scanf("%d", &cricketers[i].wickets[j]);
        }
        for (j = 0; j < MAX_MATCHES; j++)
        {
            scanf("%d", &cricketers[i].runs[j]);
        }
        scanf("%d", &cricketers[i].matches_played);
    }

    // Find the "Cricketer of the Year"
    for (i = 0; i < num_cricketers; i++)
    {
        double performance = 0.0;
        if (strcmp(cricketers[i].type, "bowler") == 0)
        {
            int total_wickets = 0;
            for (j = 0; j < MAX_MATCHES; j++)
            {
                total_wickets += cricketers[i].wickets[j];
            }
            performance = total_wickets + cricketers[i].matches_played;
        }
        else if (strcmp(cricketers[i].type, "batsman") == 0)
        {
            int total_runs = 0;
            for (j = 0; j < MAX_MATCHES; j++)
            {
                total_runs += cricketers[i].runs[j];
            }
            performance = total_runs + cricketers[i].matches_played;
        }

        if (performance > max_performance)
        {
            max_performance = performance;
            cricketer_of_the_year_index = i;
        }
    }

    printf("\nCricketer of the Year:\n");
    printf("Name: %s\n", cricketers[cricketer_of_the_year_index].name);
    printf("Country: %s\n", cricketers[cricketer_of_the_year_index].country);
    printf("Type: %s\n", cricketers[cricketer_of_the_year_index].type);

    return 0;
}
```

## Q4. a

```c
output:
-------
10 21 40
20 24 40
```

## Q4. b

```c
output:
-------
0 1 2 0 3 0 1

```

## Q5. a

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *inFile, *outFile;
    int num, sum = 0, count = 0;

    inFile = fopen("Sample.txt", "r");
    if (inFile == NULL)
    {
        printf("Error opening input file!\n");
        return 1;
    }

    while (fscanf(inFile, "%d", &num) != EOF)
    {
        count++;
    }
    rewind(inFile);

    int arr[count];
    int i = 0;
    while (fscanf(inFile, "%d", &num) != EOF)
    {
        arr[i++] = num;
    }

    fclose(inFile);

    for (i = 0; i < count; i++)
    {
        if (arr[i] % 2 == 0 && arr[i] % 4 == 0)
        {
            sum += arr[i];
        }
    }

    outFile = fopen("Output.txt", "w");
    if (outFile == NULL)
    {
        printf("Error opening output file!\n");
        free(arr);
        return 1;
    }

    fprintf(outFile, "Sum: %d", sum);

    fclose(outFile);

    free(arr);

    return 0;
}
```

## Qa5. b

```c
#include <stdio.h>

int sumOfOddElements(int *arr, int size)
{
    int sum = 0;
    int *ptr = arr;

    while (size--)
    {
        if (*ptr % 2 != 0)
        {
            sum += *ptr;
        }
        ptr++;
    }

    return sum;
}

int main()
{
    int numbers[] = {10, 21, 35, 42, 57, 68, 73};
    int n = sizeof(numbers) / sizeof(numbers[0]);
    int sum = sumOfOddElements(numbers, n);
    printf("Sum of odd elements: %d\n", sum);

    return 0;
}
```

