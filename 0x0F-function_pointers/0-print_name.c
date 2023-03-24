#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - functions that prints a name
 * @name: name to be printed
 * @f: pointer
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
