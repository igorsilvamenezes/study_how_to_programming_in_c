/*	Fig. 5.12: fig05_12.c
	A scoping example */
#include <stdio.h>

void useLocal( void ); /* function prototype */
void useStaticLocal( void ); /* function prototype */
void useGlobal( void ); /* function prototype */

int x = 1; /* global variable */

/* function main begins program execution */
int main( void )
{
	int x = 5; /* local variable to main */
	
	printf( "local x in outer scope of main id %d\n", x );
	
	{ /* star new scope */
		int x = 7; /* local variable to new scope */
		
		printf( "local x in inner scope of main is %d\n", x );		
	} /* end new scope */
	
	printf( "local x in outer scope of main is %d\n", x );
	
	useLocal(); /* useLocal has automatic local x */
	useStaticLocal(); /* useStaticLocal has static local x */
	useGlobal(); /* useGlobal uses global x */
	useLocal(); /* useLocal reinitializes automatic local */
	useStaticLocal(); /* static local x retains its prios value */
	useGlobal(); /* global x also retains its value */
	
	printf( "\nlocal x in main is %d\n", x );
	return 0; /* indicates successful termination */
} /* end main */

/* useLocal reinitializes local variable x during each call */
void useLocal( void )
{
	int x = 25; /* initialized each time useLocal is called */
	
	printf( "\nlocal x in useLocal is %d after entering useLocal\n", x );
	x++;
	printf( "local x in useLocal is %d before exiting useLocal\n", x );
} /* end function useLocal */

/* 	useStaticLocal initializes static local variable x only the first time
	the function is called; value of x is saves between calls to this
	function */
void useStaticLocal( void )
{
	/* initialized only first time useStaticLocal is called */
	static int x = 50;
	
	printf( "\nlocal static x is %d on entering useStaticLocal\n", x );
	x++;
	printf( "local static x is %d on exiting useStaticLocal\n", x );
} /* end function useStaticLocal */

/* function useGlobal modifies global variable x during each call */
void useGlobal( void )
{
	printf( "\nglobal x is %d on entering useGlobal\n", x );
	x *= 10;
	printf( "global x is %d on exiting useGlobal\n", x );
} /* end function useGlobal */
