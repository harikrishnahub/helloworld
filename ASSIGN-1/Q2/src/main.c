// Checks characters. 
# include "header.h"

int main()
{
	int c;
	printf ( "Enter any characeter:" );
	__fpurge ( stdin );
	c = fgetc ( stdin );
	if ( Isalnum ( c ) )
		printf ( "It is alphabet or num\n" );
	else
		printf ( "It is not an alphnum\n" );
	if ( Isalpha ( c ) )
		printf ( "It is alphabet\n" );
	else
		printf ( "It is not an alphabet\n" );
	if ( Isdigit ( c ) )
		printf ( "It is a digit\n" );
	else
		printf ( "It is not a digit\n" );
	if ( Isprint ( c ) )
		printf ( "It is not printable character\n" );
	else
		printf ( "It is printable character\n" );
	if ( Isupper ( c ) )
		printf ( "It is upper char\n" );
	else
		printf ( "It is not upper char\n" );
	if ( Isxdigit ( c ) )
		printf ( "It is hexadecimal\n" );
	else
		printf ( "It is not hexadecimal\n" );
	if ( Islower ( c ) )
		printf ( "It is lower char\n" );
	else
		printf ( "It is not lower char \n" );
	if ( Iscntrl ( c ) )
		printf ( "It is cntrl char\n" );
	else
		printf ( "It is not cntrl char\n" );
	return 0;
}

