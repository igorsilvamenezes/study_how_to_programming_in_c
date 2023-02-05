/*	Fig 3.13: fig03_13.c
	Preincrementing and postincrementing */
#include <stdio.h>

/* function main begins program execution */
int main( void ){
	int c; /* define variable */
	
	/* demonstrate postincrement */
	c = 5; /* assing 5 to c */
	printf( "%d\n", c ); /* print 5 */
	printf( "%d\n", c++ ); /* print 5 then postincrement */
	printf( "%d\n", c ); /* print 6 */
	
	/* demostratr preincrement */
	c = 5; /* assing 5 to c */
	printf( "%d\n", c ); /* print 5 */
	printf( "%d\n", ++c ); /* preincrement then print 6 */
	printf( "%d\n", c ); /* print 6 */
	return 0; /* indicate program ended successfully */
} /* end function main */
