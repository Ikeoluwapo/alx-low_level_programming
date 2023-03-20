#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: return pointer
 */

char *_strdup(char *str)
{
	char *ptr;

	unsigned int i, j;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	ptr = (char *)malloc(sizeof(char) * (i + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (j = 0; j <= i; j++)
		str[j] = ptr[j];
	return (ptr);
}

