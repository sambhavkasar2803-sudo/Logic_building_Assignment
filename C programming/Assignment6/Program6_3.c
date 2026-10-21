//calcuate shopping discount

#include <stdio.h>

void CalculateDiscount(float amount)
{
    float discount = 0.0;

    if (amount < 1000)
    {
        discount = 0.0;
    }
    else if (amount < 5000)
    {
        discount = amount * 0.10;
    }
    else
    {
        discount = amount * 0.20;
    }

    printf("Purchase Amount = %.2f\n", amount);
    printf("Discount Amount = %.2f\n", discount);
    printf("Final Amount = %.2f\n", amount - discount);
}

int main()
{
    float amount = 0.0;

    printf("Enter purchase amount: ");
    scanf("%f", &amount);

    if (amount < 0)
    {
        printf("Invalid purchase amount!\n");
    }
    else
    {
        CalculateDiscount(amount);
    }

    return 0;
}