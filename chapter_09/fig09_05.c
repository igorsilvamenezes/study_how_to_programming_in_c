/*	Fig 9.5: fig09_05.c
	Printing strings and characters */
#include <stdio.h>

int main( void )
{
	char character = 'A'; /* initialize char */
	char string[] = "Thia is a string"; /* initialize char array */
	const char *stringPtr = "This is also a string"; /* char pointer */
	
	printf( "%c\n", character );
	printf( "%s\n", "This is a string" );
	printf( "%s\n", string );
	printf( "%s\n", stringPtr );	
	return 0; /* indicates successful termination */
} /* end main */
