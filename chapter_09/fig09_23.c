/* Fig 9.23: fig09_23.c */
/* inputting data with a filed width */
#include <stdio.h>

int main( void )
{
	int x;
	int y;
	
	printf( "Enter a six digit integer: " );
	scanf( "%2d%d", &x, &y );
	
	printf( "The integers input were %d and %d\n", x, y );
	return 0; /* indicates successful termination */
} /* end main */
