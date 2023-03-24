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
	struct dog newdog;
	struct dog *new_d = &newdog;

	newdog.name = name;
	newdog.age = age;
	newdog.owner = owner;
	return (new_d);
}
