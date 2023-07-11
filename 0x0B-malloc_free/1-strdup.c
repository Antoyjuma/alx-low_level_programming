#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space allocation.
 * @str: char
 * Return: 0
 *
 */

char *_strdup(char *str)
{
	char *aaa;
	int j, q = 0;

	if (str == NULL)
		return (NULL);

	j = 0;
	while (str[j] != '\0')
		j++;

	aaa = malloc(sizeof(char) * (j + 1));

	if (aaa == NULL)
		return (NULL);

	for (q = 0; str[q]; q++)
		aaa[q] = str[q];

	return (aaa);
}
