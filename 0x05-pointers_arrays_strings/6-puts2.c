#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * puts2 - prints every other character
 * @str: string for pointer
 *
 * Return: Always 0.
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			putchar(str[i]);
	}
	putchar('\n');
}
