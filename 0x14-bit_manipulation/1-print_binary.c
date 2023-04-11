#include <stdio.h>
#include "main.h"

void print_binary(unsigned long int n)
{
	int num = sizeof(unsigned long int) * 8;
	int i;

    /* Finding the position of the leftmost 1 bit */
	for (i = num - 1; i >= 0; i--)
	{
		if (((n >> i) & 1) || ((n >> i) & 0))
		{
			break;
		}
	}

    /* Print the binary digits */
	for (; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}
}
