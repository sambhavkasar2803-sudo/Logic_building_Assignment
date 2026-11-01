#include<stdio.h>

int DollarToINR(int iNo)
{
    int iAns = 0;
    
    // Multiply the given USD amount by 70 to get the value in INR
    iAns = iNo * 70;
    
    return iAns;
}

int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter number of USD: ");
    scanf("%d", &iValue);
    
    iRet = DollarToINR(iValue);
    
    printf("Value in INR is %d\n", iRet);
    
    return 0;
}