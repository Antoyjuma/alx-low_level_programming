#include "main.h"
/**
*_strspn - function that gets the length of a prefic substring.
*@s: substring character.
*@accept: consist bytes in inital segment.
*Return: success
*/
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
