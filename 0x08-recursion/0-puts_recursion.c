#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: string
 *
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	int i;

	s = "Puts with recursion";
	if (i <= 0)
	{
		return (0);
	}
	putchar(s[i]);
}

