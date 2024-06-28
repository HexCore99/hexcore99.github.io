#include <stdio.h>
typedef struct
{
    char name[20];
    char id[20];
    float cgpa;
} S;

int main()
{

    S s1;
    scanf("%19[^\n]%*c", &s1.name);
    scanf("%19[^\n]%*c", &s1.id);
    scanf("%f", &s1.cgpa);
    printf("%s\n", s1.name);
    printf("%s\n", s1.id);
    printf("%.2f\n", s1.cgpa);
    return 0;
}