# include "header.h"

/* strcspn() function calculates the length of the initial segment  of
 * s which consists entirely of characters not in reject.
 */
 
int Strcspn ( const char *src, const char *reject )
{
	int count;
	char *tmp_src, *tmp_rej;
	char *temp;
	temp = (char*) reject;
	for ( ; *temp != '\0' ; temp++ ) 
		for ( count = 0, tmp_src = (char*)src, tmp_rej = (char*)reject; *tmp_src != '\0' ; tmp_src++ )
			if ( *tmp_src == *reject )
				return count;
			else
				count++;
	return count;
}

