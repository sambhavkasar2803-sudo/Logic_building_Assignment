//Check Divisibility by 3 and 5

#include <stdio.h>

void CheckDivisibility(int iValue)
{
    if (iValue % 3 == 0 && iValue % 5 == 0)
    {
        printf("%d is Divisible by Both\n", iValue);
    }
    else if (iValue % 3 == 0)
    {
        printf("%d is Divisible by 3 Only\n", iValue);
    }
    else if (iValue % 5 == 0)
    {
        printf("%d is Divisible by 5 Only\n", iValue);
    }
    else
    {
        printf("%d is Not Divisible by Either\n", iValue);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    CheckDivisibility(iValue);

    return 0;
}