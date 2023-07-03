#include "main.h"

/**
    *_strlen - function that returns the length of a string
    *@s: the string
    *Return: length @s
*/

int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;

	return (length);
}
