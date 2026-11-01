#include<stdio.h>

int OddFactorial(int iNo)
{
    int iFact = 1;
    int iCnt = 0;

    // Convert negative number to positive if entered
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Multiply only odd numbers from 1 to iNo
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            iFact = iFact * iCnt;
        }
    }

    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number is %d\n", iRet);

    return 0;
}