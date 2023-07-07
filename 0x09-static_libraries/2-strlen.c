#include "main.h"

/**
*_strlen - function that returns the length of a string
*@s: the string
*Return: string length
*/
int _strlen(char *s)
{
	int lenth = 0;

	while (s[lenth])
		lenth++;

	return (lenth);
}
