#include "stdio.h"
#include "stdlib.h"

struct student
{
    char firstname[20], section;
    int roll, marks[5];
};

int main()
{
    int num_students;
    printf("How many students data do you want to enter\n");
    scanf("%d", &num_students);
    struct student s[num_students];
    for (int i = 0; i < num_students; i++)
    {
        printf("Enter first name of the student %d \n", i + 1);
        scanf("%s", s[i].firstname);

        printf("Enter the roll number of the student\n");
        scanf("%d", &s[i].roll);

        for (int j = 0; j < 5; j++)
        {
            printf("Enter the marks of subject %d \n", j + 1);
            scanf("%d", &s[i].marks[j]);
        }
    }

    printf("\n\nPrinting the details of the entered students\n\n");
    for (int i = 0; i < num_students; i++)
    {
        printf("The name of the student %d is %s \n", i + 1, s[i].firstname);
        printf("The roll number of the student %d is %d\n", i + 1, s[i].roll);
        for (int j = 0; j < 5; j++)
        {
            printf("The marks is subject %d is %d \n", j + 1, s[i].marks[j]);
        }
        printf("\n");
    }
}