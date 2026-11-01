#include<stdio.h>

void Display(int iNo)
{
    // Handle negative numbers by converting to positive for word mapping
    int iDigit = iNo < 0 ? -iNo : iNo;
    
    if(iDigit == 0)
    {
        printf("Zero");
    }
    else if(iDigit == 1)
    {
        printf("One");
    }
    else if(iDigit == 2)
    {
        printf("Two");
    }
    else if(iDigit == 3)
    {
        printf("Three");
    }
    else if(iDigit == 4)
    {
        printf("Four");
    }
    else if(iDigit == 5)
    {
        printf("Five");
    }
    else if(iDigit == 6)
    {
        printf("Six");
    }
    else if(iDigit == 7)
    {
        printf("Seven");
    }
    else if(iDigit == 8)
    {
        printf("Eight");
    }
    else if(iDigit == 9)
    {
        printf("Nine");
    }
    else
    {
        printf("Invalid Number");
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter number: ");
    scanf("%d", &iValue);
    
    Display(iValue);

    return 0;
}