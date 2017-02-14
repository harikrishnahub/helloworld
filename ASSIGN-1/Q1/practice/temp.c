# include <stdio.h>
int main()
{
	char *src;
	char *dst;
	src = dst = NULL;
	src = ( char * ) malloc ( 100 );
	dst = ( char * ) malloc ( 100 );
	printf ( "Enter string:");
	scanf ( "%s", src );
	printf ( "Enter delim:");

	scanf ( "%s", src );
