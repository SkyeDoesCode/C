#include <stdio.h>
#include <math.h>

int main( void )
{
   double amount; 
   double principal = 1000.0; 
   double rate = .05; 
   unsigned int year; 

   // output table column heads
   printf( "%4s%21s\n", "Year", "Amount on deposit" );

   // calculate amount on deposit for each of ten years
   for ( year = 1; year <= 10; ++year ) {

      // calculate new amount for specified year
      amount = principal * pow( 1.0 + rate, year );

      // output one table row
      printf( "%4u%21.2f\n", year, amount );
   } // end for
} // end function main
