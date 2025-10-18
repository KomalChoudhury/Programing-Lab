#include <stdio.h>

int main()
{
    float weight, charge;

    printf("Enter weight: ");
    scanf("%f", &weight);

    if (weight <= 10)
        charge = weight * 30;
    else if (weight <= 20)
        charge = (10 * 30) + (weight - 10) * 20;
    else
        charge = (10 * 30) + (10 * 20) + (weight - 20) * 10;

    printf("Charge = Rs. %.2f\n", charge);

    return 0;
}
