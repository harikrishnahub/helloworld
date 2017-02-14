# include <stdio.h>
# define Isalnum(c) ((c >= 'a' && c <= 'z') || ( c >= 'A' && c <= 'Z' ) || ( c >= '0' && c <= '9' ) ) ? \
			   printf ( "Is alnum\n") : printf ( "Is not alnum\n" )
# define Isalpha(c) ((c >= 'a' && c <= 'z' ) || ( c >= 'A' && c <= 'Z' )) ? \
			   printf ( "Is alphabet\n"): printf ( "Is not alphabet\n")
# define Isdigit(c) (c >= '0' && c <= '9' ) ? \
			  printf ( "Is digit\n" ) : printf ( "Is not digit\n" )
# define Isprint(c) ( (c >= '\0' && c <= ' ') || c == 0x7E ) ? \
			    printf ( "Is not printable char\n" ) : printf ( "It is printable char\n" )
# define Isupper(c) (c >= 'A' && c <= 'Z') ? \
			  printf ( "Isupper\n") : printf ( "It is not upper char\n")
# define Islower(c) ( c >= 'a' && c <= 'z' ) ? \
			   printf ( "Is lower char\n") : printf ( "Is not lower char\n")
# define Iscntrl(c) ( (c >= '\0' && c <= ' ') || c == 0x7E ) ? \
			    printf ( "It is cntrl char\n") : printf ( "It is not cntrl char\n")
# define Isxdigit(c) (((c >= '0' && c <= '9') || (c >= 'a' && c <= 'f')) || (c >= 'A' && c <= 'F')) ? \
			     printf("It is hexadecimal\n") : printf("It is not hexadecimal\n");
