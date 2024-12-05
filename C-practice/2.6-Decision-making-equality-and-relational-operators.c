#include <stdio.h> 
// Includes the standard input/output library for functions like printf and scanf.

int main(void)
// Entry point of the program, which returns an integer value. The void keyword indicates it takes no arguments.
{
    int num1;
    // Declares an integer variable to store the first number.
    int num2;
    // Declares another integer variable to store the second number.

    printf("Enter two numbers and I will tell you\n");
    // Print a message prompting the user to input two numbers.
    printf("the relationships they satisfy:\n ");
    // Print a continuation of the message on a new line.

    scanf("%d%d", &num1, &num2);
    // Read two integer inputs from the user and stores them in `num1` and `num2`.

    if (num1 == num2){
        // Checks if `num1` is equal to `num2`.
        printf("%d is equal to %d\n", num1, num2 );
        // If true, prints a message indicating the two numbers are equal.
    }

    if (num1 != num2) {
        // Checks if `num1` is not equal to `num2`.
        printf ("%d is not equal to %d\n", num1, num2);
        // If true, prints a message indicating the two numbers are not equal.
    }
    if (num1 < num2) {
        // Checks if `num1` is less than `num2`.
        printf("%d is less than %d\n", num1, num2);
        // If true, prints a message indicating that `num1` is less than `num2`.
    }
    if (num1 > num2) {
        // Checks if `num1` is greater than `num2`.
        printf ("%d is greater than %d\n", num1, num2);
        // If true, prints a message indicating that `num1` is greater than `num2`.
    }
    if (num1 <= num2) {
        // Checks if `num1` is less than or equal to `num2`.
        printf ("%d is less than or equal to %d\n", num1, num2);
        // If true, prints a message indicating that `num1` is less than or equal to `num2`.
    }
    if (num1 >= num2) {
        // Checks if `num1` is greater than or equal to `num2`.
        printf ("%d is greater than or equal to %d\n", num1, num2);
        // If true, prints a message indicating that `num1` is greater than or equal to `num2`.
    }
}
