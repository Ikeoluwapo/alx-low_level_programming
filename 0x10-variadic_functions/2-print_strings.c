#include <strings.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - to print strings
 * @n: number of strings passed to function
 * @char *: pointer
 * @separator: to separate strings
 * Return:..
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i = 0;

	char *ptr;

	if (n > 0)
	{
		va_start(list, n);

		while (i < n)
		{
			ptr = va_arg(list, char *);
			if (ptr == NULL)
				printf("%s", "(nil)");
			else
				printf("%s", ptr);

			if (i != n - 1 && separator != NULL)
			printf("%s", separator);
			i++;
		}
			va_end(list);
	}
		printf("\n");
}
