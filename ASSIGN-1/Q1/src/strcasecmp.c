# include "header.h"
/* Strcasecmp ( char *, char * ) compares two strings regardless of char ( upper or lower )
 * returns VALID if both are equal else non_zero value.
 */
int to_upper ( int c );
int Strcasecmp ( const char *src, const char *dst )
{
	char *s1, *s2;
	s1 = ( char* ) src;
	s2 = ( char* ) dst;

	for ( ; to_upper (*s1) == to_upper (*s2); s1++, s2++ )
		if ( *s1 == '\0' && *s2 == '\0' )
			return VALID;
	return to_upper (*s1) - to_upper (*s2);
}
int to_upper ( int c )
{
	if ( c >= 'A' && c <= 'Z' ) 
		return 	(c + 'a' - 'A');
	return c;
}

