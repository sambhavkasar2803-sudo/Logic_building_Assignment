
 /* Write a program which accept a range from user and
   display all the number in between that Range */

   /*
   Input : 23 25 
   Output : 23 24 25 26 27 28 29 30 31 32 33 34 35
   */

   

#include<stdio.h>

void RangeDisplay(int iStart, int iEnd)
{
    // Logic
    if (iStart > iEnd)
    {
        printf("Invalid range");
    }
    else
    {
        int iCnt = 0;
        for (iCnt = iStart; iCnt <= iEnd; iCnt++)
        {
            printf("%d ", iCnt);
        }
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point: ");
    scanf("%d", &iValue1);

    printf("Enter ending point: ");
    scanf("%d", &iValue2);

    RangeDisplay(iValue1, iValue2);

    return 0;
}
