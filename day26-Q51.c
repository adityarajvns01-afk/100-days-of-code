#include <stdio.h>

int main() {
    int i, j;

    // Outer loop controls the rows
    for(i = 1; i <= 5; i++) {

        // Inner loop prints spaces and numbers
        for(j = 1; j <= 5; j++) {

            // Print spaces before the numbers
            if(j < 6 - i)
                printf(" ");

            // Print the numbers
            else
                printf("%d", j);
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}