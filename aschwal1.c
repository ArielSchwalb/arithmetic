/* --------------------------------------------------------------------------

Program file:		aschwal1.c
Author:             Ariel Schwalb
Date: 				February 6, 2022
Assignment: 		#1
Objective:			This program calculates and prints the sum, difference,
					product, quotient, and remainder (modulus) of two
 					integer numbers. The results of the conversions are then
				    output. No user input is required.

-------------------------------------------------------------------------- */

#include <stdio.h>

int main (void)

{
	
	/* Declare variables and assign values.*/
	/* ----------------------------------- */
	
	int num1 = 10, num2 = 5;
	int sum, difference, product, quotient, remain;
	
	/* Compute the sum, difference, product, quotient, and the remainder.*/
	/* ----------------------------------------------------------------- */
	
	sum = num1 + num2;
	difference = num1 - num2;
	product = num1 * num2;
	quotient = num1 / num2;
	remain = num1 % num2;
	
	/* Display all values and the calculated sum, difference, product,  */
	/* remainder, and quotient. The %i does not cause decimal places to */
	/* print out . In addition, kindly thank the user. :) 				*/
	/* ---------------------------------------------------------------- */
	
	printf ("The two numbers used by this program are 10 and 5.\n");
	printf ("The sum is %i.\n", sum);
	printf ("The difference is %i.\n", difference);
	printf ("The product is %i.\n", product);
	printf ("The quotient is %i.\n", quotient);
	printf ("The remainder is %i.\n", remain);
	printf ("Thank you for using the program.\n");
		
	/* The next statement pauses output, as some applications   */
	/* erase the output before the user has a chance to see it. */
	/* -----------------------------------------------------    */
	
	getchar();
	
	return 0;
	
}	/* end main */




