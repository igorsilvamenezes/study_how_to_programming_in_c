/*	Fig. 8.35: fig08_35.c
	Using memset */
#include <stdio.h>
#include <string.h>

int main( void )
{
	char string1[ 15 ] = "BBBBBBBBBBBBBBB"; /* initialize string1 */
	
	printf( "string1 = %s\n", string1 );
	printf( "string1 after memset = %s\n", memset( string1, 'b', 7 ) );
	return 0; /* indicates successful termination */
} /* end main */
