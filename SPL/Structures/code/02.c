#include <stdio.h>
typedef struct
{
    char name[20];
    char id[20];
    float cgpa;
} S;

int main()
{
    int n;
    scanf("%d", &n); // consume the newline after the number
    getchar();

    S s[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%[^\n]%*c", s[i].name);
        scanf("%[^\n]%*c", s[i].id);
        scanf("%f", &s[i].cgpa); // consume the newline after the float
        getchar();
    }

    for (int i = 0; i < n; i++)
    {
        printf("%s\n", s[i].name);
        printf("%s\n", s[i].id);
        printf("%.2f\n", s[i].cgpa);
    }

    return 0;
}