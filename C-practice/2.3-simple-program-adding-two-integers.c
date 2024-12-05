#include <stdio.h> //C preprocessor, stdio = standard input and output

int main ( void ) //main function begins program execution, ( void ) indicates that main doesn't receive any information 
{
    int integer1;   //int1 to be entered by user
    int integer2;   //int2 to be entered by user
    int sum;    

    printf("Enter the first Integer\n");    //prompt with new line escape sequence 
    scanf("%d"     //scanf = scan formatted, %d = conversion specifier(%) for decimal integer(d)
    , &integer1 );    //Ampersand(&) is an address operator, when combined with the variable, tells scanf the location of the variable in memory

    printf("Enter second Integer\n");   
    scanf("%d", &integer2);    
    
    sum = integer1 + integer2;      //sum = sum of int1 and int2
    printf("Sum is %d\n", sum);     //print string with conversion specifier that is sum on a new line

}