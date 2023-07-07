#include "main.h"
#include <string.h>

/**
*_strcat - function that concatenates 2 strings.
*@dest: the first string character.
*@src: the second string character.
*Return: returns pointer to resulting string dest.
*/

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
