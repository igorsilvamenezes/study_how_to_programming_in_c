/*	Fig. 8.37: fig08_37.c
	Using strerror */
#include <stdio.h>
#include <string.h>

int main( void )
{
	printf( "%s\n", strerror( 2 ) );
	return 0; /* indicates successful termination */
} /* end main */
