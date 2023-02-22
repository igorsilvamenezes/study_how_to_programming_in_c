/* 	fig. 5.3: fig05_03.c
	Creating and using a programmer-defined function */
#include <stdio.h>

int square( int y ); /* function prototype */

/* function main begins program execution */
int main( void )
{
	int x; /* counter */
	
	/* loop 10 times and calculate and output square of x each time */
	for ( x = 1; x <= 10; x++ ){
		printf( "%d ", square( x) ); /* function call */
	} /* end for */
	
	printf( "\n" );
	return 0; /* indicates successfull termination */
} /* end main */

/* square function definition returns square of perameter */
int square( int y ) /* y is a copy of argument to function */
{
	return y * y; /* returns square of y as an int */
} /* end function square */
