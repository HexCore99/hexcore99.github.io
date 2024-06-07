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
