#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iMeter = 0;

    // Convert kilometres to metres (1 km = 1000 meters)
    iMeter = iNo * 1000;

    return iMeter;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance: ");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in meters is %d\n", iRet);

    return 0;
}