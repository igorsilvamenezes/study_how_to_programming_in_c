/* Fig 9.13: fig09_13.c */
/* Printing a space before signed value 
	not preceded by + or - */
#include <stdio.h>

int main( void )
{
	printf( "% d\n% d\n", 547, -547 );
	return 0; /* indicates successful termination */
} /* end main */
