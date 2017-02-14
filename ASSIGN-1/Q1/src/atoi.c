/* ---> Atoi fun takes char * as an parameter,
 *	converts it an integer, and returns an integer number.
 * ---> All characters except signed, unsigned integer numbers are considered 
 *  	as invalid characters.
 */
# include "header.h"
int Atoi ( const char *src )
{
	char *tmp;
	int num = 0, sign;
	
	/* --->	Src is read from keyboard using fgets hence
	 * 	there will be '\n' before '\0' at last,
	 *	hence we need to append '\0' for valid string.
	 */
	tmp = ( char* )src;
	*( tmp + strlen ( tmp ) - 1) = '\0';

	
	/* ---> Ignores preceading spaces, tabs and newlines.
	 */
	while ( *tmp == ' ' || *tmp == '\t' || *tmp == '\n' )
		tmp++;
	if ( *tmp == '\0' )
		return NUM_INVALID;
	
	
	/* Checks for the sign, if more than one sign is present
	 * it is returned as invalid;
	 */
	sign = ( *tmp == '-' ) ? -1 : 1;
	while ( *tmp == '+' || *tmp == '-' || *tmp == ' ' || *tmp == '\t' )
		tmp++;
	if ( *tmp == '\n' )
		return NUM_INVALID;
	
	/* Checks each char for valid digits to calculates the num 
	 * from string ( i,e. ascii to int ) and checks range of that num
	 */
	while ( *tmp ) {
		if ( ISDIGIT ( *tmp ) ) {
			if ( num <= NUM_INVALID ) 
				num = 10 * num + (*tmp - '0');
			else 
				return NUM_INVALID;
		}
		else 
			return NUM_INVALID;
		tmp++;
	}
	/* Returns valid number with sign
	 */

	return sign * num;
}
