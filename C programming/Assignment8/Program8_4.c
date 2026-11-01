#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0;

    // Convert negative number to positive if entered
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Loop to print multiplication table from 1 to 10
    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d ", iNo * iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Table(iValue);

    return 0;
}