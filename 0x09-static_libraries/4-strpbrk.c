#include "main.h"
/**
*_strpbrk - func that searches a string.
*for any of a set of bytes.
*@s: string character
*@accept: charcater that matches one of the bytes
*Return: success
*/
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
