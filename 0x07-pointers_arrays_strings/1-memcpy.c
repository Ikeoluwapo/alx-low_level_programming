#include <stdio.h>
#include "main.h"

/**
 * _memcpy - copies memory area
 * @n: memory area
 * @src: memory area moved to dest
 * @dest: memory area after copying
 * Returns: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n);
{
	unsigned int i;

	while (i = 0; i < n; i++)
		*dest[i] = *src[i];
	return (dest);
}
