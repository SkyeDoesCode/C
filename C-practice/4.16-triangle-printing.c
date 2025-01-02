#include <stdio.h>

int main() {
    int rows;

    // Ask the user for the number of rows for the diamond
    printf("Enter the number of rows for the diamond: ");
    scanf("%d", &rows);

    // Print the top half of the diamond
    for (int i = 1; i <= rows; i++) {
        // Print spaces
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Print stars
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Print the bottom half of the diamond
    for (int i = rows - 1; i >= 1; i--) {
        // Print spaces
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Print stars
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
