//calcuate empolyee bonus

#include <stdio.h>

void CalculateBonus(float salary, int years)
{
    float bonus = 0.0;

    if (years > 10)
    {
        bonus = salary * 0.15;
    }
    else if (years >= 5)
    {
        bonus = salary * 0.10;
    }
    else
    {
        bonus = salary * 0.05;
    }

    printf("Basic Salary = %.2f\n", salary);
    printf("Bonus Amount = %.2f\n", bonus);
    printf("Total Salary = %.2f\n", salary + bonus);
}

int main()
{
    float salary = 0.0;
    int years = 0;

    printf("Enter salary and years of service: ");
    scanf("%f %d", &salary, &years);

    if (salary < 0 || years < 0)
    {
        printf("Invalid input!\n");
    }
    else
    {
        CalculateBonus(salary, years);
    }

    return 0;
}