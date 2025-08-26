#include <stdio.h>

int main() {
    double principal, rate, time, amount, compound_interest;
    
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the annual interest rate : ");
    scanf("%f", &rate);

    printf("Enter the time period : ");
    scanf("%f", &time);

    
    rate = rate / 100.0;

    amount = principal * pow((1 + rate /100 ),time) ;


    compound_interest = amount - principal;

    
    printf("\nFinal Amount: %.2f\n", amount);
    printf("Compound Interest: %.2f\n", compound_interest);

    return 0;
}
