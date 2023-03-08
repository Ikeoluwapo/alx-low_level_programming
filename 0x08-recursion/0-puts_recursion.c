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
	int i = 0;

	s = "Puts with recursion";
	if (i <= 3)
	{
		putchar(s[i]);
	}
	putchar('\n');
}

