//write a program which accept number from user and display all  number in between that Range in reverse order.

#include<stdio.h>

void RangeDisplayRev(int iStart, int iEnd)
{
    // Check if starting point is greater than ending point
    if (iStart > iEnd)
    {
        printf("Invalid range\n");
        return;
    }

    // Loop from iEnd down to iStart to print in reverse order
    for (int iCnt = iEnd; iCnt >= iStart; iCnt--)
    {
        printf("%d ", iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point: ");
    scanf("%d", &iValue1);

    printf("Enter ending point: ");
    scanf("%d", &iValue2);

    RangeDisplayRev(iValue1, iValue2);

    return 0;
}

