/*	Fig 9.2: fig09_02.c */
/*	Using the integer conversion specifiers */
#include <stdio.h>

int main( void )
{
	printf( "%d\n", 455 );
	printf( "%i\n", 455 ); /* o same as d in printf */
	printf( "%d\n", +455 );
	printf( "%d\n", -455 );
	printf( "%hd\n", 3200 );
	printf( "%ld\n", 2000000000L ); /* L suffix makes literal a long */
	printf( "%o\n", 455 );
	printf( "%u\n", 455 );
	printf( "%u\n", -455 );
	printf( "%x\n", 455 );
	printf( "%X\n", 455 );	
	return 0; /* indicates successful termination */
} /* end main */
