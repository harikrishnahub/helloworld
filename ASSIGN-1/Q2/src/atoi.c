#include "header.h"
int Atoi ( char *src )
{
	int num = 0;
	*( src + Strlen ( src ) - 1) = '\0';
	while ( *src == ' '|| *src == '\t' || *src == '\n' )
		;	
	while ( *src != '\0' ) {
		if ( ISDIGIT ( *src ) ) 
			num = 10 * num + (*src - '0');
		else
			return INVALID;
		src++;
	}
	return num;
}
