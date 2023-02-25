#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Print lowercase letters in reverse order
 * Return: 0 when successful
 */

int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
