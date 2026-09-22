#include <stdio.h>

int main() {
    int i;

    // Print first group: 4 stars
    for(i = 1; i <= 4; i++) {
        printf("*\n");
    }

    // Print a blank line
    printf("\n");

    // Print second group: 5 stars
    for(i = 1; i <= 5; i++) {
        printf("*\n");
    }

    // Print a blank line
    printf("\n");

    // Print third group: 3 stars
    for(i = 1; i <= 3; i++) {
        printf("*\n");
    }

    // Print a blank line
    printf("\n");

    // Print last star
    printf("*\n");

    return 0;
}