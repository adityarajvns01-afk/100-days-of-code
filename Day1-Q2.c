#include <stdio.h>
int main()
{
    float num1, num2, sum, difference, product, quotient;

    printf("Enter the first number : ");
    scanf("%f", &num1);

    printf("Enter the second number : ");
    scanf("%f", &num2);

    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    quotient = num1 / num2;

    printf("Sum = %.2f\nDifference = %.2f\nProduct = %.2f\nDifference = %.2f", sum, difference, product, quotient);

    return 0;
}