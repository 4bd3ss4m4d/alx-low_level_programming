#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees memory allocated for a dog_t structure
 * @d: pointer to the dog_t structure to be freed
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
