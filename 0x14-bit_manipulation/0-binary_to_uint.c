#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - convert a binary number to unisgned int
 * @b: pointer to string
 * Return: 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int binary = 0;
	unsigned int i;

	if (b == NULL)
		return 0;

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
		{
			binary = binary << 1;
		}
		else if (b[i] == '1')
		{
			binary = (binary << 1) | 1;
		}
		else
		{
			return 0;
		}
	}
	return binary;
}
