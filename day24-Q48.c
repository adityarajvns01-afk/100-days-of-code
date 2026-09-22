#include <stdio.h>
int main()
{
    int i, j;               

    // Outer loop controls the number of rows
    for (i = 1; i <= 5; i++)
    {
        // Inner loop prints numbers in each row
        for (j = 1; j <= i; j++)
        {
            printf("%d", j); // Print the current number
        }
        printf("\n"); // Move to the next line after printing one row
    }
    return 0; 
}