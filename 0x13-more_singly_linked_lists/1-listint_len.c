#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * listint_len - to print length
 * @h: points to head
 *
 * Return: len
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *current = h;

	size_t len = 0;

	while (current != NULL)
	{
		len++;
		current = current->next;
	}
	return (len);
}
