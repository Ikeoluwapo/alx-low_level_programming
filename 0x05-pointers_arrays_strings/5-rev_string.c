#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: Array
 * Return: Always 0
 */

void rev_string(char *s)
{
	int i;

	i = *s;

	for (i--; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
}
