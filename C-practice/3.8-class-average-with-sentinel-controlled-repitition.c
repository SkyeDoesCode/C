#include <stdio.h>

int main(void) 
{
    unsigned int counter;  // Counter to track number of grades entered
    int grade;             // Variable to store individual grade input
    int total;             // Variable to accumulate total of grades
    float average;         // Variable to store the calculated average

    total = 0;             // Initialize total to 0
    counter = 0;           // Initialize counter to 0

    printf("%s", "Enter grade, -1 to end: ");  // Prompt user to enter a grade or -1 to finish
    scanf("%d", &grade);   // Read the user's grade input

    while (grade != -1) {  // Loop continues until user enters -1
        total = total + grade;  // Add the entered grade to the total
        counter = counter + 1;  // Increment the counter for the number of grades entered
        printf("%s", "Enter grade, enter -1 to end: ");  // Prompt again for another grade
        scanf("%d", &grade);   // Read the next grade input
    }

    if (counter != 0) {   // Check if any grades were entered
        average = (float) total / counter;  // Calculate the average by dividing total by counter
        printf("The class average is %.2f\n", average);  // Print the average with 2 decimal places
    }
    else {  
        puts("No grades were entered");  // If no grades were entered, print this message
    }
}
