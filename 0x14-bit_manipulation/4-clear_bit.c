#include <stdio.h>
#include "main.h"                                                                                   /**
 * get_bit - to get index
 * @n: integer
 * @index: containing index starting from 0
 * Return: index or 1 if there is an error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	
	*n &= ~(1UL << index);
	{
		return (1);
	}
}
