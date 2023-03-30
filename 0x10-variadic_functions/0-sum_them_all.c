#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum unsigned ints
 * @n: constant integer
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;

	unsigned int i = 0;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}
	else
	{
		va_start(list, n);
		while (i < n)
		{
			sum += va_arg(list, int);
			i++;
		}
		va_end(list);
		return (sum);
	}
	return (0);
}
