/* Fig 9.12: fig09_12.c */
/* Printing numbers with and without the + flag */
#include <stdio.h>

int main( void )
{
	printf( "%d\n%d\n", 786, -786 );
	printf( "%+d\n%+d\n", 786, -786 );
	return 0; /* indicates successful termination */
} /* end main */
