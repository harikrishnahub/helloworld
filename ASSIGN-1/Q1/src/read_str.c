# include "header.h"

/* read_str ( char * ) function reads string from stdin and checks for validity,
 * if it is valid returns VALID else again it asks to re_enter	the string.
 */

int read_str ( char *s )
{
	while ( fgets ( s, 100, stdin ) != NULL) {
	*( s + Strlen ( s ) - 1 ) = '\0';
		if ( valid_str ( s ) )
			return VALID;
		else {
			printf ( "!!!!Enter valid string now !!!!\n" );
			continue;
		}
	}
	return 0;
}
