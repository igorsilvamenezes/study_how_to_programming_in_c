/* Fig 9.19: fig09_19.c */
/* Reading floating-point number */
#include <stdio.h>

/* function main begins program execution */
int main( void )
{
	double a;
	double b;
	double c;
	
	printf( "Enter three floating-point numbers: \n" );
	scanf( "%le%lf%lg", &a, &b, &c );
	
	printf( "Here are the numbers entered in plain\n" );
	printf( "floating-point notation:\n" );
	printf( "%f\n%f\n%f\n", a, b, c );
	return 0; /* indicates successful termination */
} /* end main */
