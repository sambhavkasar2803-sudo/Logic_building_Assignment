//check electricity bill

#include <stdio.h>

void CalculateElectricityBill(int units)
{
    float bill = 0.0;

    if (units <= 100)
    {
        bill = units * 5.0;
    }
    else if (units <= 200)
    {
        bill = (100 * 5.0) + ((units - 100) * 7.0);
    }
    else
    {
        bill = (100 * 5.0) + (100 * 7.0)
               + ((units - 200) * 10.0);
    }

    printf("Electricity Bill = %.2f\n", bill);
}

int main()
{
    int units = 0;

    printf("Enter consumed units: ");
    scanf("%d", &units);

    if (units < 0)
    {
        printf("Invalid units!\n");
    }
    else
    {
        CalculateElectricityBill(units);
    }

    return 0;
}
