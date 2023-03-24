#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free the dogs
 * @d: pointer
 * Return: 0
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
