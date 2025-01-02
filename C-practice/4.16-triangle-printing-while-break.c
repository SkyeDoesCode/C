#include <stdio.h>

int main() {
    int rows;

    // Ask the user for the number of rows
    printf("Enter the number of rows for the reverse triangle: ");
    scanf("%d", &rows);

    int line = rows; // Start from the total number of rows
    while (1) { // Infinite loop, we'll use break to exit
        int spaces = rows - line; // Calculate spaces needed
        int stars = line;         // Number of stars for the current row

        // Print spaces
        while (spaces > 0) {
            printf(" ");
            spaces--;
        }

        // Print stars
        while (stars > 0) {
            printf("*");
            stars--;
        }

        printf("\n"); // Move to the next line after each row

        line--; // Move to the next row (decrease the star count)
        if (line <= 0) { // Exit the loop when all rows are printed
            break;
        }
    }

    return 0;
}

