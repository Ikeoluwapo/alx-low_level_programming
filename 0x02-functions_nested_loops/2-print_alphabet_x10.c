#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - print 10 times the alphabet.
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	char i;
	char j;

	for (i = 'a'; i = 'z'; i++)
	{
		for (j = i % 10)
		{
			putchar(j);
			putchar('\n');
		}
	}
}
