/*	Fig. 8.27: fig08_27.c
	Using strspn */
#include <stdio.h>
#include <string.h>

int main( void )
{
	/* initialize two char pointers */
	const char *string1 = "The value is 3.14159";
	const char *string2 = "aehi lsTuv";
	
	printf( "%s%s\n%s%s\n\n%s\n%s%u\n",
		"string1 = ", string1, "string2 = ", string2,
		"The length of the initial segment of string1",
		"containing only characters from string2 = ",
		strspn( string1, string2 ) );
	return 0; /* indicates successful termination */
} /* end main */
