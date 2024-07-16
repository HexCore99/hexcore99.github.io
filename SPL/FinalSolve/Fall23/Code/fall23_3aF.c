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
