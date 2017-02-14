# include "header.h" 

char *Strtok(char *teststr, char *ch)
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
//	empty string 
	if (*d_str == '\0')
	    break;
	if ( str_cmp (d_str, ch) ){
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
int str_cmp ( char *s, char *t )
{
	char *y;
	for ( y = t; *y != '\0'; y++ )
		if ( *s == *y )
			return 0;
	return 1;

}
