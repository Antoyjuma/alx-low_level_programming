#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees a created dog.
 *
 * @d: pointer to dog to be freed
 *
 * Return: Nothing.
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
