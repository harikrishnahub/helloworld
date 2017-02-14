/*
 * STRING FUNCTIONS 
 */
# include "header.h"

int main()
{
	char *src, *dst;
	char *line, *final_str;
	int n;

	/*	Memory allocation using malloc ( char * );
	 *	if it fails returns NULL.
	 */
	
	if ( ( src  = ( char * ) malloc ( MAX ) ) == NULL ) {
		printf ( "Memory is not allocated\n" );
		exit(1);
	}
	
	if ( ( dst  = ( char * ) malloc ( MAX ) ) == NULL ) {
		printf ( "Memory is not allocated\n" );
		exit(1);
	}

	if ( ( line = ( char * ) malloc ( MAX ) ) == NULL ) {
		printf ( "Memory is not allocated\n" );
		exit(1);
	}

	while ( 1 ) {
		printf ("\t1:strncpy\n\t2:strncat\n\t3:strncmp\n"
				"\t4:strrcr\n\t5:strspn\n\t6:strcspn\n\t7:strtok\n"
				"\t8:strcasecmp\n\t9:strstr\n\t10:exit\n"
				"Enter Your choice:");

		__fpurge ( stdin );		// Cleares the buffers of the streams;
		fgets ( line, MAX, stdin );
		if ( ( n = Atoi ( line ) )  == -1 ) {
			printf ( "Enter valid number\n");
			continue;
		}
		switch (n) {
			case 1: /*-->	Copies n number of characters into destination string,
				 *     	rejects negetive numbers.
				 */
				printf("Enter n value:");
				__fpurge(stdin);
				if (!fgets(line, LEN, stdin)) {	 // Reading line;
					printf("!!!! Enter proper values !!!!\n");
					continue;
				}
				n = Atoi(line);	// ascii to int conversion;
				if (n >= NUM_INVALID ) {
					printf("!!!! Enter valid num !!!!\n");
					continue;
				}
				printf("Enter src string:");
				__fpurge(stdin);
				if ( read_str(src) )
				final_str = Strncpy(dst, src, n);	// Copys n num of chars to dst;
				printf("Your string: %s\n", final_str );
				break;
			case 2: /*-->	Concatenates n number of characters into destination string,
				 *     	rejects negetive numbers.
				 */
				printf("Enter n value:");
				__fpurge(stdin);
				if (!fgets(line, LEN, stdin)) {
					printf("!!!! Enter proper values !!!!\n");
					continue;
				}
				n = Atoi(line);
				if (n >= NUM_INVALID ) {
					printf("!!!! Enter valid num !!!!\n");
					continue;
				}
				printf("Enter src string:");
				__fpurge(stdin);
				read_str(src);
				printf("Enter dst string:");
				__fpurge(stdin);
				read_str(dst);
				final_str = Strncat(dst, src, n);	// Concatenates strings;
				printf("****Your string: %s****\n", final_str);
				break;
			case 3: /*-->	Compares n number sourcec characters and destination charaters.
				 *	If both are equal returns 0 else non_zero value.
				 *     	rejects negetive numbers.
				 */
				printf("Enter n value:");
				__fpurge(stdin);
				if (!fgets(line, LEN, stdin)) {
					printf("!!!! Enter proper values !!!!\n");
					continue;
				}
				n = Atoi(line);
				if (n >= NUM_INVALID ) {
					printf("!!!! Enter valid num !!!!\n");
					continue;
				}
				printf("Enter src string:");
				__fpurge(stdin);
				read_str(src);
				printf("Enter dst string:");
				__fpurge(stdin);
				read_str(dst);
				if (!Strncmp(src, dst, n))		// Compares strings;
				printf("Both are equal\n");
				else
					printf("Not equal\n");
				break;
			case 4: /*-->	strrchr(comst char *s, int c );
				 *	function returns a pointer to the last occurrence of  the
				 *	character c in the string s.
				 *-->	strrchr() functions return a pointer  to  the  matched
	       			 *	character or NULL if the character is not found.
				 */
				printf("Enter char:");
				__fpurge(stdin);
				n = fgetc(stdin);
				__fpurge(stdin);
				if ( valid_char ( n ) ) {
					printf("Enter src string:");
					read_str(src);
					final_str = Strrchr(src, n);	// Searches for last occurence of char;
					if ( final_str == NULL ) 
						printf ( "Char is not present\n" );
					else
						printf("your string:%s\n", final_str );
				}
				else {
					printf ( "!!!! Enter valid char !!!! \n" );
					continue;
				}

				break;
			case 5: /*-->	strspn() function calculates the length of the initial segment of s
				 *	which consists entirely of characters in accept.
				 *-->	strspn()  function returns the number of characters in the initial
				 *	segment of s which consist only of characters from accept.
				 */
			      	printf ( "Enter src string:" );
				__fpurge(stdin);
				read_str(src);
				printf ( "Enter accept string:" );
				__fpurge ( stdin );
				read_str ( dst );
				n = Strspn ( src, dst ); // Returns count of accepted chars of first segment;
				printf ( " %d \n", n );
				break;
			case 6: /*-->	strcspn() function calculates the length of the initial segment  of
				 *	s which consists entirely of characters not in reject.
				 *-->	strcspn() function returns the number of characters in the  initial
				 *	segment of s which are not in the string reject.
				 */
			    	printf ( "Enter src string:" );
				__fpurge ( stdin );
				read_str ( src );
				printf ( "Enter reject string:" );
				__fpurge ( stdin );
				read_str ( dst );
				n = Strcspn ( src, dst );// Returns count of rejected chars of first segment;
				printf("  %d \n ", n);
				break;
			case 7: /*-->	strtok()  function  parses a string into a sequence of tokens. 
				 *	On the first call to strtok() the string to be parsed should be
				 *	specified in str.  In each subsequent call that should parse 
				 *	the same string, str should be NULL.
				 */
				printf("Enter src strings:");
				__fpurge(stdin);
				while ( fgets ( src, MAX, stdin ) == NULL ) {
					printf ( "!!!! Enter valid string !!!! \n" );
					continue;
				}
				printf("Enter delim char :");
				__fpurge(stdin);

				while ( fgets ( dst, MAX, stdin ) == NULL ) {
					printf ( "!!!! Enter valid string !!!! \n" );
					continue;
				}
				final_str = Strtok ( src, dst );	// Seperates src string with delimiter;
				printf("%s\n", src);
				while ( final_str != NULL ) {
					final_str = Strtok ( NULL, dst );
					if ( final_str )
						printf("%s\n", final_str);
				}
				break;
			case 8: /*-->	strcasecmp() function compares the two strings s1 and s2, ignoring
				 *	the case of the characters.  It returns an integer less than, 
				 *	equal to, or  greater than zero if s1 is found, respectively,
				 *	to be less than, to match, or be greater than s2.
				 */
				printf( "Enter src string:" );
				__fpurge( stdin );
				read_str(src);
				printf( "Enter dst string:" );
				__fpurge( stdin );
				read_str( dst );
				if ( Strcasecmp ( src, dst ) )	 // Compares strings regardless of case;
				printf( "Both are equal\n" );
				else
					printf( "Not equal\n" );
				break;
			case 9: /*-->	strstr() function finds the first occurrence of the substring 
				 *	nee-dle in the string haystack.  
				 *	The terminating `\0'  characters  are  not compared.
				 */
				printf ( "Enter src string :" );
				__fpurge( stdin );
				read_str( src );
				printf( "Enter dst string :" );
				__fpurge( stdin );
				read_str( dst );
				final_str = Strstr( src, dst );	// Searches for dst string in src;
				if ( final_str == NULL )
					printf ( "Your string is not there!!!\n" );
				else
					printf( "%s\n", final_str );
				break;
			default:
				printf("In valid option!!!\n");
				continue;
			case 10:
				exit ( 0 );
		}
	}
	/* Memory freeing 
	 */
	free ( line );
	free ( src  );
	free ( dst  );
	return 0;
}
