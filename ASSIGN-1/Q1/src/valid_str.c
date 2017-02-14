# include "header.h"

/* Checks validity of the string.
 */

int valid_str ( char *t )
{
	while ( *t++ != '\0' ) {
		if ( ( *t >= '0' && *t <= '9' ) || ( *t >= 'A' && *t <= 'Z' ) || ( *t >= 'a' && *t <= 'z' ) )
			;
		else if ( *t == ' ' || *t == '\t' || *t == '\n' );

		else 
			return 0;
	}

	return VALID;
}
