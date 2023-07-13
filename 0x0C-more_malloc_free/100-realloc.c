#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function that reallocates a block of memory
 * @ptr: pointer to the memory previously allocated
 * @old_size: size of the previous memory.
 * @new_size: new size in bytes
 *
 * Return: ...
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nptr;
	unsigned int j;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		nptr =  malloc(new_size);

		if (nptr == NULL)
			return (NULL);

		return (nptr);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	nptr = malloc(new_size);

	if (nptr == NULL)
		return (NULL);

	for (j = 0; j < old_size && j < new_size; j++)
	{
		nptr[j] = ((char *) ptr)[j];
	}

	free(ptr);
	return (nptr);
}
