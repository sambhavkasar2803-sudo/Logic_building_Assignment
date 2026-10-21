//find the greatest of three numbers

#include <stdio.h>

void FindGreatest(int iNo1, int iNo2, int iNo3)
{
    if (iNo1 == iNo2 && iNo2 == iNo3)
    {
        printf("All three numbers are equal\n");
    }
    else if (iNo1 >= iNo2 && iNo1 >= iNo3)
    {
        printf("%d is Greatest\n", iNo1);
    }
    else if (iNo2 >= iNo1 && iNo2 >= iNo3)
    {
        printf("%d is Greatest\n", iNo2);
    }
    else
    {
        printf("%d is Greatest\n", iNo3);
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    FindGreatest(iValue1, iValue2, iValue3);

    return 0;
}
