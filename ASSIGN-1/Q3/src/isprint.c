int Isprint ( int c )
{
	if ( c >= '\0' && c <= ' ' )
		return 1;
	return 0;
}
