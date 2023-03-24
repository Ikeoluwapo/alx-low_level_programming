#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - function that creates a new dog
 *
 * Return: 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *new_d;

	new_d = malloc(sizeof(struct dog));
	if (new_d == NULL)
		return (NULL);
	(*new_d).name = name;
	(*new_d).age = age;
	(*new_d).owner = owner;
	return (new_d);
}
