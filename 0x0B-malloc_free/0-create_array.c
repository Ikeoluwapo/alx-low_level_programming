#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create an array of chars
 * @c: character
 * @size: size of array
 * @ptr: pointer
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(size * sizeof(c));

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
