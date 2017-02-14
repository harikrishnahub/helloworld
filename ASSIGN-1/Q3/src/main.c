/* Implementing isalnum, isdigit, isalpha, 
 * isprint, isxdigit, islower functions as macros
 */
# include "header.h"
int main()
{
    int c;
    printf("Enter any char:");
    c = fgetc(stdin);
    Isalnum(c);
    Isalpha(c);
    Isdigit(c);
    Isprint(c);
    Isupper(c);
    Isxdigit(c);
    Islower(c);
    Iscntrl(c);
    return 0;
}
