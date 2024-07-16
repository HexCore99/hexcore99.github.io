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