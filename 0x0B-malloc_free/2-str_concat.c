#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer or NULL if it fails
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, j, k, end;

	if (s1 == NULL)
	{
		printf(" ");
	}
	if (s2 == NULL)
	{
		printf(" ");
	}
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	ptr = (char *)malloc(sizeof(char) * (i + j + 1));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (k = 0; k < i; k++)
		ptr[k] = s1[k];
	end = j;
	for (j = 0; j <= end; k++, j++)
		ptr[k] = s2[j];
	return (ptr);
}
