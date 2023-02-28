#include "main.h"

/**
 * puts2 - prints every other character
 * @str: string for pointer
 *
 * Return: Always 0.
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			putchar(str[i]);
		i += 2;
	}
	putchar('\n');
}
