#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory dynamically for an array.
 * @nmemb: number of memory.
 * @size: size of the memory
 *
 * Return: a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int j = 0, l = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	l = nmemb * size;
	p = malloc(l);

	if (p == NULL)
		return (NULL);

	while (j < l)
	{
		p[j] = 0;
		j++;
	}

	return (p);
}
