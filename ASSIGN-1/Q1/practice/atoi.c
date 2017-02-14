# include "header.h"
# include <limits.h>

int Atoi ( char *src )
{
	char *tmp;
	tmp = src;
	long long int num = 0;
	printf ( "src = %s\n", src );
	*( tmp + strlen ( tmp ) - 1) = '\0';

	while ( *tmp == ' ' || *tmp == '\t' || *tmp == '\n' )
		tmp++;

	if ( *tmp == '+' )
		tmp++;
	if ( *tmp == '-' )
		return INVALID;

	while ( *tmp ) {
		if ( ISDIGIT ( *tmp ) ) {
			if ( num > INT_MIN && num < INT_MAX )
				num = 10 * num + (*tmp - '0');
			else
				return INVALID;
		}
		else  
			return INVALID;
		tmp++;
	}
	printf ( "Num = %d\n", num);
	return num;
}
