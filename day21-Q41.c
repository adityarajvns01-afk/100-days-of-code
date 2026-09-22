#include <stdio.h>

int main() 
{
    int n, temp, first, last;
    int digits = 1, middle, result;

    // Take input
    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;              // Save original number

    // Find last digit
    last = n % 10;

    // Find first digit and place value
    while (n >= 10) 
    {
        n = n / 10;
        digits = digits * 10;
    }

    first = n;

    // Remove first and last digits
    middle = temp % digits;   // Removes first digit
    middle = middle / 10;     // Removes last digit

    // Form the new number
    result = (last * digits) + (middle * 10) + first;

    printf("Number after swapping first and last digit = %d", result);

    return 0;
}