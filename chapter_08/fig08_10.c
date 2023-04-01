/*	Fig. 8.10: fig08_10.c
	using strtol */
#include <stdio.h>
#include <stdlib.h>

int main( void )
{
	const char *string = "-1234567abc"; /* initialize string pointer */
	
	char *remainderPtr; /* create char pointer */
	long x; /* variable to hold converted sequence */
	
	x = strtol( string, &remainderPtr, 0 );
	
	printf( "%s\"%s\"\n%s%ld\n%s\"%s\"\n%s%ld\n",
		"The original string is ", string,
		"The converted value is ", x,
		"The remainder of othe original string is ",
		remainderPtr,
		"The converted value plus 567 is ", x + 567 );
	return 0; /* indicates successful termination */
} /* end main */
