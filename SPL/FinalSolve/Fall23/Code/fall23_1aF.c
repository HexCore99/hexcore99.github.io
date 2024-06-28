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
