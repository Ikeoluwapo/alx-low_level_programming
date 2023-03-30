#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - to print all numbers
 * @n: constanst integer
 * @separator:what is used to separate strings
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;

	va_list list;

	if (n > 0)
	{
		va_start(list, n);
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(list, int));

			if (i != n - 1 && separator != NULL)

				printf("%s", separator);

			i++;

		}
		va_end(list);
	}
	printf("\n");
}
