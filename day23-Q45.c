#include <stdio.h>
int main() {
    
    // Declare variables
    int n, i;
    float sum = 0;

    // Input the number of terms
    printf("Enter number of terms: ");
    scanf("%d", &n);

    // Loop to calculate the sum of the series
    for (i = 1; i <= n; i++) {

        // Add each term: (2*i) / (4*i - 1) to the sum
        sum = sum + (float)(2 * i) / (4 * i - 1);
    }

    // Display the final sum up to 2 decimal places
    printf("Sum = %.2f", sum);

    return 0;   
}