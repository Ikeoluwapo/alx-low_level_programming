#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string, in reverse
 * @s: string
 * Return: Always 0
 */

void print_rev(char *s)
{
	int i = strlen(s) - 1;

	while (i >= 0)
	{
		putchar(s[i]);
		i--;
	}
	putchar('\n');
}
