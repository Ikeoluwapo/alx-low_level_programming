#include <stdio.h>
#include "main.h"

/**
 * print_binary - to convert to binary
 * @n: variable containing numbers
 *
 * Return: no eeturn value, void
 */

void print_binary(unsigned long int n)
{
	int num = sizeof(unsigned long int) * 8;
	int i;

    /* Finding the position of the leftmost 1 bit */
	for (i = num - 1; i >= 0; i--)
	{
		if (n >> i)
		{
			break;
		}
	}

    /* Print the binary digits */
	for (; i >= 0; i--)
	{
		if (n >> i)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}
}
