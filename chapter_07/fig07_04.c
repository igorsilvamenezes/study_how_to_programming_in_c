/*	Fig. 7.4: fig07_04.c
	Using the & and * operators */
#include <stdio.h>

int main( void )
{
	int a; /* a is an integer */
	int *aPtr; /* aPtr is a pointer to an integer */
	
	a = 7;
	aPtr = &a; /* aPtr set to adderss of a */
	
	printf( "The address of a is %p" 
			"\nThe value od aPtr is %p", &a, aPtr );
			
	printf( "\n\nThe value of a is %d" 
			"\nThe value od *aPtr is %d", a, *aPtr );

	printf( "\n\nShowing that * and & are complements of "
			"each other\n&*aPtr = %p"
			"\n*&aPtr = %p\n", &*aPtr, *&aPtr );
	return 0; /* indicates successful termination */			
} /* end main */
