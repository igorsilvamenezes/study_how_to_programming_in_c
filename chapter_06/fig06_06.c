/*	Fig. 6.6: fig06_06.c
	Compute the sum of the elements of the array */
#include <stdio.h>
#define SIZE 12

/* function main begins program execution */
int main( void )
{
	/* use initializer list to initialize array */
	int a[ SIZE ] = { 1, 3, 5, 4, 7, 2, 99, 16, 45, 67, 89, 45 };
	int i; /* counter */
	int total = 0; /* sum of array */
	
	/* sum contents of array a */
	for( i = 0; i < SIZE; i++ ){
		total += a[ i ];
	} /* end for */
	
	printf( "Total of array element values id %d\n", total );
	return 0; /* indicates sucessful termination */
} /* end main */
