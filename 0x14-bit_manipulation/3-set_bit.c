#include <stdio.h>
#include "main.h"

/**
 * set_bit - to set the value of a bit to 1
 * @n: pointer containing address
 * @index: containing index
 * Return: 1 if successful and -1 if not
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n |= 1UL << index;
	return (1);
}
