#include <stdio.h>
#include "main.h"
/**
 * clear_bit - to set the value of a bit to 0
 * @n: integer
 * @index: containing index starting from 0
 * Return: 1 or -1 if there is an error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	
	int invert;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	invert = ~(1UL << index);
	*n &= invert;
	{
		return (1);
	}
}
