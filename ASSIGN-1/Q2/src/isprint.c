int Isprint ( int c )
{
	if ( ( c >= '\0' && c <= ' ')  || ( c != 0x7E ) )
		return 1;
	return 0;
}
