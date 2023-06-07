/*	Fig. 14.6: fig14_06.c
	Using temporary files */
#include <stdio.h>

int main( void )
{
	FILE *filePtr; /* pointer to file being modified */
	FILE *tempFilePtr; /* temporary file pointer */
	int c; /* define c to hold characters read from a file */
	char fileName[ 30 ]; /* create char array */
	
	printf( "This program changes tabs to spaces.\n"
		"Enter a file to be modified: " );
	scanf( "%29s", fileName );
	
	/* fopen opens the file */
	if( ( filePtr = fopen( fileName, "r+" ) ) != NULL ) {
		/* create temprary file */
		if( ( tempFilePtr = tmpfile() ) != NULL ) {
			printf( "\nThe file before modification is:\n" );
			
			/* read characters from file and place in temporary file */
			while( ( c = getc( filePtr ) ) != EOF ) {
				putchar( c );
				putc( c == '\t' ? ' ' : c, tempFilePtr );				
			} /* end while */
			
			rewind( tempFilePtr );
			rewind( filePtr );
			printf( "\n\nThe file after modification is:\n" );
			
			/* read from temporary file and write into original file */
			while( (c = getc( tempFilePtr ) ) != EOF ) {
				putchar( c );
				putc( c, filePtr );				
			} /* end while */			
		} /* end if */
		else { /* if temporary file could not be opend */
			printf( "Unable to open temporary file\n" );
		} /* end else */		
	} /* end if */
	else { /* if file could not be opened */
		printf( "Unable to open %s\n", fileName );
	} /* end else */
	
	return 0; /* indicates successful termination */
} /* end main */
