# include "header.h"

/* Strstr() function finds the first occurrence of the substring 
 * "sub_str" in the string "str".  The terminating `\0'  
 * characters  are  not compared.
 */

char *Strstr(const char *str, const char *sub_str)
{
    char *tmp_str, *tmp_sub_str;
    char *temp;
    temp = ( char* ) str;
    for (; *temp != '\0'; temp++) {
	tmp_str = temp;
	tmp_sub_str = ( char* ) sub_str;
       while ( *tmp_str == *tmp_sub_str ) {
	       tmp_str++;
	       tmp_sub_str++;
       }
       if  (*tmp_sub_str == '\0')
	    return temp;
    }
    return NULL;
}
