int Iscntrl ( int c )
{
	if ( ( c >= '\0' && c <= 0x1F ) || c == 0x7F  )
	       return 1;
	return 0;
}	
