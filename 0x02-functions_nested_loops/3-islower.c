#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int _islower - checks for lowercase
 *
 * Return: 1 if c is lowercase or 0 otherwise
 */

int _islower(int c)
{
	int c;

	c = 'a';
	{
		printf("%d\n", c, islower(c));
	}
	c = 'A';
	{
		printf("%d\n", c, islower(c));
		return (0);
	}
}
