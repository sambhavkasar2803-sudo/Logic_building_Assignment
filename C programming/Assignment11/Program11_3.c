//write a program accept range from user and return addition of numbers in between that range.

#include<stdio.h>

int RangeSum(int iStart, int iEnd)
{
    int iSum = 0;

    // Check for positive numbers only and valid range order
    if (iStart < 0 || iEnd < 0 || iStart > iEnd)
    {
        printf("Invalid range\n");
        return 0; // or handle error return as needed
    }

    // Calculate sum of numbers in the given range
    for (int iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        iSum = iSum + iCnt;
    }

    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point: ");
    scanf("%d", &iValue1);

    printf("Enter ending point: ");
    scanf("%d", &iValue2);

    iRet = RangeSum(iValue1, iValue2);

    if (iValue1 >= 0 && iValue2 >= 0 && iValue1 <= iValue2)
    {
       printf("Addition is %d\n", iRet);
    }

     return 0;
    
}
