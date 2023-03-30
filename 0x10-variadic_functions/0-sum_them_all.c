#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum unsigned ints
 * @n: constant integer
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;

	if (n == 0)
	{
		return (0);
	}

	va_start(list, n);
	va_end(list);
}
