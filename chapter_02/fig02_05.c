/* 	Fig. 2.5: fig02_05.c
	Addition program */
#include <stdio.h>

/* function main begins program execution */
int main( void )
{
	int integer1; /* first number to be input by user */
	int integer2; /* second number to be input by user */
	int sum; /* variable in which sum will be stored */
	
	printf( "Enter first interger\n" ); /* prompt */
	scanf( "%d", &integer1 ); /* read an integer */
	
	printf( "Enter secod integer\n" ); /* prompt */
	scanf( "%d", &integer2 ); /* read an integer */
	
	sum = integer1 + integer2; /* assign total to sum */
	
	printf( "Sun is %d\n", sum ); /* print sum */
	
	return 0; /* indicate that program ended sucessfully */
} /* end function main */
