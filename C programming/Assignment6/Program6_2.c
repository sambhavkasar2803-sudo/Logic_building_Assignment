//check Admission Eligibility

#include <stdio.h>

void CheckAdmission(int marks, int age)
{
    if (marks >= 60 && age >= 17)
    {
        printf("Eligible for Admission\n");
    }
    else
    {
        printf("Not Eligible\n");
    }
}

int main()
{
    int marks = 0;
    int age = 0;

    printf("Enter marks and age: ");
    scanf("%d %d", &marks, &age);

    if (marks < 0 || marks > 100 || age < 0)
    {
        printf("Invalid input!\n");
    }
    else
    {
        CheckAdmission(marks, age);
    }

    return 0;
}