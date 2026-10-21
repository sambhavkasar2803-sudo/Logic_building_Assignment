// Check leap year

#include <stdio.h>

void CheckLeapYear(int iYear)
{
    if (iYear % 400 == 0)
    {
        printf("%d is a Leap Year\n", iYear);
    }
    else if (iYear % 100 == 0)
    {
        printf("%d is Not a Leap Year\n", iYear);
    }
    else if (iYear % 4 == 0)
    {
        printf("%d is a Leap Year\n", iYear);
    }
    else
    {
        printf("%d is Not a Leap Year\n", iYear);
    }
}

int main()
{
    int iYear = 0;

    printf("Enter year: ");
    scanf("%d", &iYear);

    CheckLeapYear(iYear);

    return 0;
}