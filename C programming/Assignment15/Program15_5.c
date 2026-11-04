//Write a program which accept total marks & obtained marks from user and calculate percentage.

#include<stdio.h>

float Percentage(float fTotal, float fObtained)
{
    if(fTotal == 0.0f || fObtained > fTotal || fObtained < 0.0f || fTotal < 0.0f)
    {
        return 0.0f;
    }

    return (fObtained / fTotal) * 100.0f;
}

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;
    float fRet = 0.0f;

    printf("Please enter total marks: ");
    scanf("%f", &fValue1);

    printf("Please enter obtained marks: ");
    scanf("%f", &fValue2);

    fRet = Percentage(fValue1, fValue2);

    printf("%.2f%%\n", fRet);

    return 0;
}