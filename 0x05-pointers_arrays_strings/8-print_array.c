#include "main.h"
#include <stdio.h>

/**
 * print_array - Elements of an array
 * @n:number of element of array
 * @a: pointer
 * Return: return nothing
 */

void print_array(int *a, int n)
{
	int j = 0;

	for (; j < n; j++)
	{
		printf("%d", *(a + j));
		if (j != (n - 1))
			printf(", ");
	}
	printf("\n");
}



