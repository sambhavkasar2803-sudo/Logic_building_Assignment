/*
Accept number of rows and number of columns from user and display below pattern.
Input: iRow = 4, iCol = 4
Output:2 4 6 8 10
       1 3 5 7 9
       2 4 6 8 10
       1 3 5 7 9 (Note: For iCol=4 as shown in layout, it displays up to 8, but follows the alternating even/odd row pattern)
 */

 #include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        int iEvenCnt = 2;
        int iOddCnt = 1;

        for(j = 1; j <= iCol; j++)
        {
            if(i % 2 != 0)
            {
                printf("%d\t", iEvenCnt);
                iEvenCnt += 2;
            }
            else
            {
                printf("%d\t", iOddCnt);
                iOddCnt += 2;
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}