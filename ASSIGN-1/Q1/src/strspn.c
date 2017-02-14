# include "header.h"

/* strspn() function calculates the length of the initial segment of s
 * which consists entirely of characters in accept.
 */
int Strspn ( const char *s, const char *t )
{
	int n = 0;
	char *temp1, *temp2;
	
	temp1 = ( char* ) s;
	temp2 = ( char* ) t;

	while ( *temp1++ == *temp2++ ) 
		n++;
	return n;
}

