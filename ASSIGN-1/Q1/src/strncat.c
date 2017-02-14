# include "header.h"

/* strncat() function is similar, except that it will use  at  most  n
 * characters  from src.  Since the result is always terminated with `\0',
 * at most n+1 characters are written.
 */

char *Strncat ( char *dest, const char *src, int n )
{
	char *temp1, *temp2;
	temp1 = dest;
	temp2 = ( char* ) src;
	while ( *dest != '\0' )
		dest++;
	while ( n-- )
		*dest++ = *temp2++;
	*dest = '\0';
	return temp1;
}
