# include "header.h"

/* checks validity of character, 
 * returns VALID if it is valid else INVALID
 */

int valid_char ( int c )
{
	if ( (c >= '\0' && c <= 0x1F ) || c == 0x7E)
		return NUM_INVALID;
	return VALID;
}
