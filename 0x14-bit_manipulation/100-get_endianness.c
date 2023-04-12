#include <stdio.h>
#include "main.h"


/**
 * get_endianness - to check endianness
 *
 * Return: int
 */

int get_endianness(void)
{
	int *ptr;

	int n = 1;

	ptr = &n;

	return (*ptr == 1);
}
