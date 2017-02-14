# include <stdio.h>
main()
{

	char *l, *t;
	l = ( char * ) malloc ( 100 );
	int c;
	t = l;
	while ( ( c = fgetc (stdin)) != EOF  ) {
		if ( c >= '\0' && c <= 0x1F )  {
			printf ( "Enter valid char\n" );
			continue;
		}
		*t++ = c;
	*(l + strlen ( l ) - 1) = '\0';
	printf ( "Line = %s\n", l );
	}


}
