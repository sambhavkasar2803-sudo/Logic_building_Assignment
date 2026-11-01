#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    // Convert negative number to positive if entered
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Loop to print '*' iNo times
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("* ");
    }

    // Loop to print '#' iNo times
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("# ");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}
