#include <stdio.h>

int main(void)
{
    unsigned int counter; 
    int grade;      //individual grade value
    int total;      //total grades 
    int average;    // totals/10

    total = 0;      //initialize total
    counter = 1;    //initialize loop
    
    while ( counter <= 10 ) {       //loop 10 times
        printf("%s", "Enter grade: ");      //input promt
        scanf("%d", &grade);        //read grade
        total= total + grade;       //add up grades until counter = 10
        counter = counter + 1;      //increment until counter = 10
    }

    average = total / 10;       //average grade in sample size

    printf("The class average is %d\n", average);
}