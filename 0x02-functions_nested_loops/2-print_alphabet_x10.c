#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - print 10 times the alphabet.
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			putchar(j);
		}
	putchar('\n');
	}
}
