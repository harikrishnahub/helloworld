# include "header.h"

/* strncmp()  function  is similar, except it only compares 
 * the first (at most) n characters of s1 and s2.
 */
int Strncmp ( const char *src, const char *dst, int n )
{
	char *s1, *s2;
	s1 = ( char*) src;
	s2 = ( char*) dst;
	while ( n-- )
		if (  *s1 == *s2 ) {
			s1++; s2++;
			if ( n == 0 )
				return NUM_INVALID;
		}
	return  *s1 - *s2;
}
		
