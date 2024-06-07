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