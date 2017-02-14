/*
 * STRING FUNCTIONS 
 */
# include "header.h"

int main()
{
    char ch;
    char *src, *dst, *line, *final_str;
    int n;

    while ( 1 ) {
    src = (char *) malloc(100 * sizeof(char));
    dst = (char *) malloc(100 * sizeof(char));
    line = (char *) malloc(100 * sizeof(char));
	printf ("\t1:strncpy\n\t2:strncat\n\t3:strncmp\n" );
	printf ("\t4:strrcr\n\t5:strspn\n\t6:strcspn\n\t7:strtok\n");
	printf ("\t8:strcasecmp\n\t9:strstr\n");
    	printf ("Enter Your choice:");
	__fpurge ( stdin );		// Cleares the buffers of the streams;
	fgets ( line, 10, stdin );
	ch = Atoi ( line );		// Ascii to int conversion;
		switch (ch) {

			/*case 1:
			    printf("Enter n value:");
			    __fpurge(stdin);
			    if (!fgets(line, LEN, stdin)) {	 // Reading line;
				printf("!!!! Enter proper values !!!!\n");
				continue;
			    }
			    n = Atoi(line);	// ascii to int conversion;
			    if (n == 0) {
				printf("!!!! Enter valid num !!!!\n");
				continue;
			    }
			    printf("Enter src string:");
			    __fpurge(stdin);
			    read_str(src);
			    Strncpy(dst, src, n);	// Copys n num of chars to dst;
			    printf("****Your string: %s****\n", dst);
			    break;
			case 2:
			    printf("Enter n value:");
			    __fpurge(stdin);
			    if (!fgets(line, LEN, stdin)) {
				printf("!!!! Enter proper values !!!!\n");
				continue;
			    }
			    n = Atoi(line);
			    printf("Enter src string:");
			    __fpurge(stdin);
			    read_str(src);
			    printf("Enter dst string:");
			    __fpurge(stdin);
			    read_str(dst);
			    Strncat(dst, src, n);	// Concatenates strings;
			    printf("****Your string: %s****\n", dst);
			    break;
			case 3:
			    printf("Enter n value:");
			    __fpurge(stdin);
			    if (!fgets(line, LEN, stdin)) {
				printf("!!!! Enter proper values !!!!\n");
				continue;
			    }
			    n = Atoi(line);
			    printf("Enter src string:");
			    __fpurge(stdin);
			    read_str(src);
			    printf("Enter dst string:");
			    __fpurge(stdin);
			    read_str(dst);
			    if (!Strncmp(src, dst, n))		// Compares strings;
				printf("****Both are equal****\n");
			    else
				printf("****Not equal****\n");
			    break;
			case 4:
			    printf("Enter char:");
			    __fpurge(stdin);
			    n = fgetc(stdin);
			    __fpurge(stdin);
			    if ( valid_char ( n ) ) {
			    	printf("Enter src string:");
				read_str(src);
	    			src = Strrchr(src, n);		// Searches for last occurence of char;
		    		if ( src == NULL ) 
					printf ( "****Char is not present****\n" );
			  	else
			    		printf("****your string:%s****", src);
			    }
			    else {
				    printf ( "!!!! Enter valid char !!!! \n" );
				    continue;
			    }

			    break;
			case 5:
			    printf("Enter src string:");
			    __fpurge(stdin);
			    read_str(src);
			    printf("Enter accept string:");
			    __fpurge(stdin);
			    read_str(dst);
			    n = Strspn(src, dst); 	// Returns count of accepted chars of first segment;
			    printf( "**** %d **** \n", n);
			    break;
			case 6:
			    printf("Enter src string:");
			    __fpurge(stdin);
			    read_str(src);
			    printf("Enter reject string:");
			    __fpurge(stdin);
			    read_str(dst);
			    n = Strcspn(src, dst);  	// Returns count of rejected chars of first segment;
			    printf(" **** %d ****\n ", n);
			    break;*/
			case 7:
			    printf("Enter src strings:");
			    __fpurge(stdin);
			    while ( fgets ( src, 100, stdin ) == NULL ) {
				    printf ( "!!!! Enter valid string !!!! \n" );
				    continue;
			    }
			    printf("Enter delim char :");
			    __fpurge(stdin);
			    while ( fgets ( dst, 100, stdin ) == NULL ) {
				    printf ( "!!!! Enter valid string !!!! \n" );
				    continue;
			    }
			    final_str = Strtok(src, dst);		// Seperates src string with delimiter;
			    printf("%s\n", src);
			    while ( final_str != NULL ) {
				    final_str = Strtok ( NULL, dst );
				    if ( final_str )
			    		printf("%s\n", final_str);
			    }
			    break;
			/*case 8:
			    printf("Enter src string:");
			    __fpurge(stdin);
			    read_str(src);
			    printf("Enter dst strings:");
			    __fpurge(stdin);
			    read_str(dst);
			    if (!Strcasecmp(src, dst))	 	// Compares strings regardless of case;
				    printf("Both are equal\n");
			    else
				printf("Not equal\n");
			    break;
			case 9:
			    printf("Enter src string :");
			    __fpurge(stdin);
			    read_str(src);
			    printf("Enter dst string :");
			    __fpurge(stdin);
			    read_str(dst);
			    src = Strstr(src, dst);		// Searches for dst string in src;
			    if ( src == NULL )
				    printf ( "Your string is not there!!!\n" );
			    else
			    	printf("%s\n", src);
			    break;*/
			default:
			    printf("In valid option!!!\n");
			    continue;
			case 10:
			    exit ( 0 );
		}
    }
    free ( line );
    free ( src  );
    free ( src  );
   return 0;
}
