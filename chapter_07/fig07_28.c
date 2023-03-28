/*	Fig. 7.28: fig07_28.c
	Demostrating an array of pointers to functions */
#include <stdio.h>

/* prototypes */
void function1( int a );
void function2( int b );
void function3( int c );

int main( void )
{
	/* initialize array of 3 pointers to functions that each take an
		int argument and return void */
	void (*f[ 3 ])( int ) = { function1, function2, function3 };
	
	int choise; /* variable to hold user's choise */
	
	printf( "Enter a number between 0 and 2, 3 to and: " );
	scanf( "%d", &choise );
	
	/* process user's choise */
	while( choise >= 0 && choise < 3 ) {
		
		/* invoke function at location choise in array f and pass
			choise as an argument */
		(*f[ choise ])( choise );
		
		printf( "Enter a number between 0 and 2, 3 to end: " );
		scanf( "%d", &choise );
	} /* end while */
	
	printf( "Program execution completed.\n" );
	return 0; /* indictes successful termination */
} /* end main */

void function1( int a )
{
	printf( "You entered %d so function1 was called\n\n", a );
}

void function2( int a )
{
	printf( "You entered %d so function2 was called\n\n", a );
}

void function3( int a )
{
	printf( "You entered %d so function3 was called\n\n", a );
}
