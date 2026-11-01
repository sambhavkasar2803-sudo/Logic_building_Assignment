#include<stdio.h>

void TableRev(int iNo)
{
    int iCnt = 0;

    // Convert negative number to positive if entered
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Loop to print multiplication table in reverse order from 10 down to 1
    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        printf("%d ", iNo * iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    TableRev(iValue);

    return 0;
}