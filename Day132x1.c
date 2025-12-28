#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float percentage;
};

void input(struct Student s[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("\nEnter details of student %d\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &s[i].roll);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Percentage: ");
        scanf("%f", &s[i].percentage);
    }
}

void displayAbove(struct Student s[], int n, float p)
{
    printf("\nStudents scoring above %.2f%%:\n", p);
    for(int i = 0; i < n; i++)
    {
        if(s[i].percentage > p)
        {
            printf("Roll: %d  Name: %s  Percentage: %.2f\n",
                   s[i].roll, s[i].name, s[i].percentage);
        }
    }
}

int main()
{
    struct Student s[50];
    int n;
    float p;

    printf("Enter number of students: ");
    scanf("%d", &n);

    input(s, n);

    printf("\nEnter percentage to filter: ");
    scanf("%f", &p);

    displayAbove(s, n, p);

    return 0;
}
