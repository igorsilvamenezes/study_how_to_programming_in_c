/* Fig 9.11: fig09_11.c */
/* Right justifying and left justfying values */
#include <stdio.h>

int main( void )
{
	printf( "%10s%10d%10c%10f\n\n", "hello", 7, 'a', 1.23 );
	printf( "%-10s%-10d%-10c%-10f\n", "hello", 7, 'a', 1.23 );
	return 0; /* indicates successful termination */
} /* end main */
