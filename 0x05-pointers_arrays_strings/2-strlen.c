#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * strlen - returns the length of a string
 *
 * Return: Always 0
 */

int _strlen(char *s)
{

	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
