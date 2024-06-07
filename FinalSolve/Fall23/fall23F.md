---
title: Fall 23
---

# Fall 23

## Q1. a

```c
#include <stdio.h>

void updateBalance(float balances[], int customerID, int transactionType, float amount)
{
    if (transactionType == 1)
    { // Withdrawal
        if (balances[customerID] >= amount)
        {
            balances[customerID] -= amount;
            printf("Transaction successful. Updated balance: %.2f\n", balances[customerID]);
        }
        else
        {
            printf("Not sufficient balance\n");
        }
    }
    else if (transactionType == 2)
    { // Deposit
        balances[customerID] += amount;
        printf("Transaction successful. Updated balance: %.2f\n", balances[customerID]);
    }
    else
    {
        printf("Invalid transaction type\n");
    }
}

int main()
{
    float balances[100];
    int customerID, transactionType;
    float amount;

    for (int i = 0; i < 100; i++)
    {
        scanf("%f", &balances[i]);
    }

    scanf("%d", &customerID);

    scanf("%d", &transactionType);

    scanf("%f", &amount);

    updateBalance(balances, customerID, transactionType, amount);

    return 0;
}



```

## Q1. b

```c
output:
-------
-10, -8, -6, -4, -2,


```

## Q2. a

```c
output:
-------
i = 4
m = 9
str1 = CSE-I11m S LI am a UIUianCSE is
str2 = I am a UIUian

```

## Q2. b

```c
#include <stdio.h>

int main()
{
    char str[100];
    int vowelCounts[5] = {0};

    fgets(str, sizeof(str), stdin); // Use fgets to get input with spaces

    // Count the vowels (case-insensitive)
    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];
        if (ch >= 'A' && ch <= 'Z')
        {
            ch += 32;
        }

        switch (ch)
        {
        case 'a':
            vowelCounts[0]++;
            break;
        case 'e':
            vowelCounts[1]++;
            break;
        case 'i':
            vowelCounts[2]++;
            break;
        case 'o':
            vowelCounts[3]++;
            break;
        case 'u':
            vowelCounts[4]++;
            break;
        }
    }

    printf("A/a: %d\n", vowelCounts[0]);
    printf("E/e: %d\n", vowelCounts[1]);
    printf("I/i: %d\n", vowelCounts[2]);
    printf("O/o: %d\n", vowelCounts[3]);
    printf("U/u: %d\n", vowelCounts[4]);

    return 0;
}



```

## Q3. a

```c
#include <stdio.h>
#include <string.h>

#define MAX_CUSTOMERS 100
#define MAX_NAME_LENGTH 100
#define MAX_SHOPPINGS 12

typedef struct
{
    char name[MAX_NAME_LENGTH];
    int id;
    int timesShopped;
    double spentMoney[MAX_SHOPPINGS];
} Customer;

int main()
{
    Customer customers[MAX_CUSTOMERS];
    int i, j;
    double sumSpent, avgSpent, bestAvgSpent = 0;
    char bestCustomer[MAX_NAME_LENGTH];

    // Input data for 100 customers
    for (i = 0; i < MAX_CUSTOMERS; i++)
    {
        fgets(customers[i].name, MAX_NAME_LENGTH, stdin);

        scanf("%d", &customers[i].id);

        scanf("%d", &customers[i].timesShopped);

        for (j = 0; j < customers[i].timesShopped; j++)
        {
            scanf("%lf", &customers[i].spentMoney[j]);
        }

        getchar();
    }

    // Find the customer with the best average purchase who shopped more than 10 times
    for (i = 0; i < MAX_CUSTOMERS; i++)
    {
        if (customers[i].timesShopped > 10)
        {
            sumSpent = 0;
            for (j = 0; j < customers[i].timesShopped; j++)
            {
                sumSpent += customers[i].spentMoney[j];
            }
            avgSpent = sumSpent / customers[i].timesShopped;

            if (avgSpent > bestAvgSpent)
            {
                bestAvgSpent = avgSpent;
                strcpy(bestCustomer, customers[i].name);
            }
        }
    }

    printf("The best customer is: %s\n", bestCustomer);

    return 0;
}



```

## Q4. a

```c

#include <stdio.h>

int main()
{
    int num = 10;

    printf("Initial value of num: %d\n", num);

    int *ptr = &num;

    *ptr = *ptr * 2;

    printf("Value of num after modification: %d\n", num);

    return 0;
}


```

## Q4. b

```c
output:
-------
2 5 8 11 14



```

## Q5. a

```c
output:
--------
How are you?
How are you?
How are you?
How are you?
How are you?
How are you?
I am fine
I am fine
I am fine
I am fine
I am fine

```

## Q5. b

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *inputFile, *outputFile;
    int number, maxNumber;

    inputFile = fopen("in.txt", "r");
    if (inputFile == NULL)
    {
        printf("Could not open input file.\n");
        return 1;
    }

    maxNumber = 0;

    while (fscanf(inputFile, "%d", &number) != EOF)
    {
        if (number > maxNumber)
        {
            maxNumber = number;
        }
    }

    fclose(inputFile);

    outputFile = fopen("out.txt", "w");
    if (outputFile == NULL)
    {
        printf("Could not open output file.\n");
        return 1;
    }

    fprintf(outputFile, "%d\n", maxNumber);

    fclose(outputFile);

    return 0;
}



```