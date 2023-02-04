/* 	Fig. 2.13: fig02_13.c
	Using if statements, relational
	operators, and equality operators */
#include <stdio.h>

/* function main begins program execution */
int main( void )
{
	int num1; /* first number to be read from user */
	int num2; /* second number to be read from user */
	
	printf( "Enter two interges, ,and I will tell you\n" );
	printf( "the relationships they satify: " );
	
	scanf( "%d%d", &num1, &num2 ); /* read two integers */
	
	if( num1 == num2 ){
		printf( "%d id equals to %d\n", num1, num2 );
	} /* end if */
	
	if( num1 != num2 ){
		printf( "%d is not equals to %d\n", num1, num2 );
	} /* end if */
	
	if( num1 < num2 ){
		printf( "%d is less than %d\n", num1, num2 );
	} /* end if */
	
	return 0; /* indicate that program ended sucessfully */
} /* end function main */
