# include "header.h"

/* strncpy() function is similar, except that not more than n bytes of
 * src are copied.  Thus, if there is no null byte among the first n bytes
 * of src, the result will not be null-terminated.
 */

char *Strncpy ( char *dest, const char *src, int n )
{
	char * temp1 = dest;
	char * temp2 = ( char* ) src;
	while ( n-- )
		*dest++ = *temp2++;
	*dest = '\0';
	return ( char * ) temp1;

}	
