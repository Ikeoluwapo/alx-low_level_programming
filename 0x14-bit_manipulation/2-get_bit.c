#include <stdio.h>
#include "main.h"

/**
 * get_bit - to get index
 * @n: integer
 * @index: containing index starting from 0
 * Return: index or 1 if there is an error
 */

int get_bit(unsigned long int n, unsigned int index)
{

	unsigned long int bie = 0;

	unsigned long int i;

	index = n >> index;

	if (index >= sizeof(unsigned long int) * 8) 
	{
		return (0);
	}
	for (i = 0; i <= index; i++)
	{
		bie = index & 1;

		if (index != '\0')
		{
			return (bie);
		}
	}
	return (bie);
}
