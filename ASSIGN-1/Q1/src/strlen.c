# include "header.h"

/* strlen()  function  calculates  the  length  of  the string s, not
 * including the terminating `\0` character.
 */

int Strlen ( const char *s )
{
	int n = 0;
	char * temp = ( char* ) s;
	while ( *temp++ != '\0' )
		n++;
	return n;
}
