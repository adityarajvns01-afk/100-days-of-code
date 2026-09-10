#include <stdio.h>30
int main() 
{
    double principal, rate, time, simple_interest, compound_interest;

    printf("Enter the Principal : ");
    scanf("%f", &principal);

    printf("Enter the Rate : ");
    scanf("%f", &rate);

    printf("Enter the Time : ");
    scanf("%f", &time);

    simple_interest = (principal * rate * time) / 100;
    compound_interest = principal * pow((1 + rate / 100), time) - principal;

    printf("Simple Interest : %.2f\nCompound Interest : %.2f", simple_interest, compound_interest);

    return 0;
}