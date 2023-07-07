#include "main.h"

/**
*_strcpy - copies the string pointed to by src.
*@dest: char type string.
*@src: char type string.
*Description: copies the string pointed to by src to the,
*buffer pointed to by dest.
*Return: pointer to dest.
*/

char *_strcpy(char *dest, char *src)
{
	int s = -1;

	do {
		s++;
			dest[s] = src[s];
	} while (src[s] != '\0');

	return (dest);
}
