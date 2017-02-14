# include "header.h" 

/* Strtok()  function  parses a string into a sequence of tokens.
 * On the first call to strtok() the string to be parsed should be  specified
 * in str.  In each subsequent call that should parse the same string, str
 * should be NULL.
 */
int str_cmp ( const char *s1, const char *s2 );
char *Strtok(char *teststr, const char *ch)
{
    char *d_str = NULL;
    char *start = NULL;
    char *end = NULL;
    char nullch = '\0';
    char *address_of_null = &nullch;
    static char *next_tok;

    if (teststr != NULL) {
	d_str = teststr;
    } else {
	if (*next_tok == '\0')
	    return NULL;
	d_str = next_tok;
    }
    while (d_str != NULL) {
			// If empty string breaks the loop;
	if (*d_str == '\0')
	    break;
	if ( str_cmp (d_str,ch) ) {
	    if (!start)
		start = d_str;
	    d_str++;
	    		//to handle the case where the delimiter is not at the end of the string.
	    if (*d_str == '\0') {
		next_tok = d_str;
		break;
	    }
	} else {
	    if (start) {
		end = d_str;
		next_tok = d_str + 1;
		*end = *address_of_null;
		break;
	    } else {
		d_str++;
	    }
	}
    }
    return start;
}
int str_cmp ( const char *s1, const char *s2 )
{
	char *tmp;
	for ( tmp = ( char* ) s2; *tmp != '\0'; tmp++ )
		if ( *s1 == *tmp )
			return 0;
	return 1;
}
