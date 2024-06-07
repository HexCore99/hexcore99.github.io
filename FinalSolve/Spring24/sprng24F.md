---
title: Spring 24
---
# Spring 24
## Q1. a

```c
#include <stdio.h>
int fact(int n)
{
    int store = 1;
    for (int i = 2; i <= n; i++)
    {
        store *= i;
    }
    return store;
}
int add(int a, int b)
{
    return a + b;
}
int main()
{

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int sum = add(fact(a), fact(b));
    sum = add(sum, fact(c));

    printf("%d", sum);

    return 0;
}

```

## Q1. b

```c
output:
--------
7 16 17 8 13

```

## Q2. a

```c
ouput:
------
striker - str

```

## Q2. b

```c
#include <stdio.h>

int main()
{

    char str[55] = "I love spl. Uiu has some good labs for spl.";

    for (char *p = str; *p != '\0'; *p++)
    {
        if (*p == 's' && *(p + 1) == 'p' && *(p + 2) == 'l')
        {
            *p = 'd';
            *(p + 1) = 's';
            *(p + 2) = 'a';
        }
    }

    for (char *s = str; *s != '\0'; *s++)
    {
        printf("%c", *s);
    }

    return 0;
}

```

## Q3. a

```c
#include <stdio.h>

typedef struct
{
    char name[20];
    int ID;
} student;

int main()
{
    student s1, s2;
    strcpy(s1.name, "Rahim");
    s1.ID = 101;

    student *s_ptr = &s2;
    scanf("%s", s_ptr->name);
    scanf("%d", &s_ptr->ID);

    return 0;
}

```

## Q3. b

```c
#include <stdio.h>
#include <string.h>

#define MAX_PATIENTS 100

// 1. Create the Patient structure
struct Patient
{
    char name[50];
    int age;
    float height;
    float weight;
    float BMI;
};

int main()
{
    struct Patient patients[MAX_PATIENTS]; // 2. Declare an array of patients
    int numPatients;

    scanf("%d", &numPatients);

    // 3. Take input and calculate BMI
    for (int i = 0; i < numPatients; i++)
    {

        scanf("[%s^\n]", patients[i].name);

        scanf("%d", &patients[i].age);

        scanf("%f", &patients[i].height);

        scanf("%f", &patients[i].weight);

        // BMI calculation

        patients[i].BMI = patients[i].weight / (patients[i].height);
    }

    // 4. Find the youngest patient with the lowest age
    int youngestIndex = 0;
    for (int i = 1; i < numPatients; i++)
    {
        if (patients[i].age < patients[youngestIndex].age)
        {
            youngestIndex = i;
        }
    }

    // Display information of the youngest patient
    printf("\nYoungest Patient:\n");
    printf("Name: %s\n", patients[youngestIndex].name);
    printf("Age: %d\n", patients[youngestIndex].age);
    printf("Height: %.2f meters\n", patients[youngestIndex].height);
    printf("Weight: %.2f kg\n", patients[youngestIndex].weight);
    printf("BMI: %.2f\n", patients[youngestIndex].BMI);

    return 0;
}


```

## Q4. a

```c
output:
-------
Inside power_of_2(16)
Inside power_of_2(8)
Inside power_of_2(4)
Inside power_of_2(2)
Inside power_of_2(1)

```

## Q4. b

```c
ouput:
------
1 2 4 4 6 6 8 8
Dummy=3


```

## Q5. a

```c
#include <stdio.h>

int main()
{

    int arr[100];
    int *arrPtr = arr;

    for (int offset = 0; offset < 100; offset++)
    {
        scanf("%d", &arrPtr + offset);
    }

    int max = 0;
    for (; *arrPtr < 100; *arrPtr++)
    {
        if (max < *arrPtr)
            max = *arrPtr;
    }

    printf("%d", max);
    return 0;
}

```

## Q5. b

```c
#include <stdio.h>

int main()
{
    FILE *fp = fopen("string.txt", "a");
    fprintf(fp, "This is another string\n");
    fclose(fp);

    return 0;
}

```