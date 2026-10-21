//Check triangle validity

#include <stdio.h>

void CheckTriangle(int side1, int side2, int side3)
{
    if (side1 > 0 && side2 > 0 && side3 > 0 &&
        (long long)side1 + side2 > side3 &&
        (long long)side1 + side3 > side2 &&
        (long long)side2 + side3 > side1)
    {
        printf("Valid Triangle\n");
    }
    else
    {
        printf("Invalid Triangle\n");
    }
}

int main()
{
    int side1 = 0;
    int side2 = 0;
    int side3 = 0;

    printf("Enter three sides: ");
    scanf("%d %d %d", &side1, &side2, &side3);

    CheckTriangle(side1, side2, side3);

    return 0;
}