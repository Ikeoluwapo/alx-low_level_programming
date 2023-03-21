#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width
 * @height: height
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int *) * (width + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= width; i++)
	{
		ptr = malloc(sizeof(int) * (height + 1));
		if (ptr[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(ptr[i]);
			free(ptr);
			return (NULL);
		
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	return (ptr);
}
