#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in the struct
 * @h: pointer to head
 * Return: 0
 */

size_t list_len(const list_t *h)
{
	const list_t *current = h;

	size_t len = 0;

	while (current != NULL)
	{
		len++;
		current = current->next;
	}
	return (len);
}
