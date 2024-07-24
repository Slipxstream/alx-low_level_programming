#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - this function frees dogs
 * @d: pointer to the dog being freed
 *
 * Return: void
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
