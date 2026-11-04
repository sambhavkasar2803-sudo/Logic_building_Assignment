//write a program accept range from user and return addition of all even numbers in between that range.

#include<stdio.h>

int RangeSumEven(int iStart, int iEnd)
{
    int iSum = 0;

    // Check if range contains positive numbers only and iStart <= iEnd
    if (iStart < 0 || iEnd < 0 || iStart > iEnd)
    {
        printf("Invalid range\n");
        return 0;
    }

    // Calculate sum of all even numbers in the range
    for (int iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if (iCnt % 2 == 0)
        {
            iSum = iSum + iCnt;
        }
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

    iRet = RangeSumEven(iValue1, iValue2);

    if (iValue1 >= 0 && iValue2 >= 0 && iValue1 <= iValue2)
    {
        printf("Addition is %d\n", iRet);
    }

    return 0;
}


