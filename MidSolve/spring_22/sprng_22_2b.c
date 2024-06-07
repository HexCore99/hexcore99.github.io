#include <stdio.h>

int main()
{
    char category;
    int work_experience, family_members;
    float family_income;

    scanf(" %c", &category);

    scanf("%d", &work_experience);

    scanf("%d", &family_members);

    scanf("%f", &family_income);

    if (
        (work_experience >= 12 && family_members > 5) ||
        family_income < 1000.50)
    {
        printf("eligible for the bonus!\n");
    }
    else if (
        (category == 'Y' || category == 'Z') &&
        family_members > 8 && family_income < 1100.78)
    {
        printf("eligible for the bonus!\n");
    }
    else if (category == 'X' && family_members > 6)
    {
        printf("eligible for the bonus!\n");
    }
    else
    {
        printf("not eligible for the bonus.\n");
    }

    return 0;
}
