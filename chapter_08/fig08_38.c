/*	Fig. 8.38: fig08_38.c
	Using strlen */
#include <stdio.h>	
#include <string.h>

int main( void )
{
	/* initialize 3 char pointers */
	const char *string1 = "abcdefghijklmnopqrstuvwxyz";
	const char *string2 = "four";
	const char *string3 = "Boston";
	
	printf( "%s\"%s\"%s%lu\n%s\"%s\"%s%lu\n%s\"%s\"%s%lu\n",
		"The length of ", string1, " is ",
		( unsigned long ) strlen( string1 ),
		"The length of ", string2, " is ",
		( unsigned long ) strlen( string2 ),
		"The length of ", string3, " is ",
		( unsigned long ) strlen( string3 ));
	return 0; /* indicates successful termination */
} /* end main */
