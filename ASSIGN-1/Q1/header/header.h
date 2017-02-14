
# include <stdio.h>		
# include <stdlib.h>		// malloc ();
# include <stdio_ext.h>		//__fpurge ( stdin );
# include <limits.h>
# include <string.h>



# define VALID 		1
# define LEN 		10
# define MAX 		100
# define NUM_INVALID	10000

# define ISDIGIT(c) (c >= '0' && c <= '9') ? 1 : 0
# define ISALPHA(c) ( (c >= 'a' && c <= 'z') || ( c >= 'A' && c <= 'Z' ) ) ? 1: 0

char *Strrchr		( const char *, int ); 
char *Strtok		( char *, const char * );
char *Strncpy		( char *, const char *, int  );
char *Strncat		( char *, const char *, int  );
int   Strcasecmp	( const char *, const char * );
char *Strstr		( const char *, const char * );
int   Strcspn		( const char *, const char * );
int   Strspn		( const char *, const char * );
int   Strncmp		( const char *, const char *, int );

int valid_char		( int );
int to_upper 		( int );
int read_str		( char * );
int valid_str		( char * );
int Atoi		( const char * );
int Strlen		( const char * );
