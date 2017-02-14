# include "header.h"
int Strlen ( char *s )
{
	int n = 0;
	while ( *s++ != '\0' )
		n++;
	return n;
}
