/* Fig 9.21: fig09_21.c */
/* Using a scan set */
#include <stdio.h>

/* function main begins program execution */
int main( voif )
{
	char z[ 9 ]; /* define array z */
	
	printf( "Enter string: " );
	scanf( "%[aeiou]", z ); /* search for set of characters */
	
	printf( "the input was \"%s\"\n", z );
	return 0; /* indicates successful termination */
} /* end main */
