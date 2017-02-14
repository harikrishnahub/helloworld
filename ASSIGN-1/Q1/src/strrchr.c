# include "header.h"
/*char *Strrchr ( char *s , int c )
{
	char *t;
	t = s + Strlen ( s ) - 1;
	for ( ; t != s ; t-- )
		if ( *t == c )
			return t;
	return ( void * ) 0;
}*/
/* Strrchr() function returns a pointer to the last occurrence of  the
 * character c in the string s.
 */
char *Strrchr( const char *s, int c)
{
	char *ptr = NULL;
	char *temp;
	temp = (char*) s;

	while (*temp){
		if ( *temp == c )
			ptr = temp;
		temp++;
	}
	return ptr;
}
