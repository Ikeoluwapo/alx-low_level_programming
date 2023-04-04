#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints all elements in the structure
 * @h: the head of the node
 * Return: count
 */

size_t print_list(const list_t *h)
{
	const list_t *current = h;

	size_t count = 0;

	
	while (current != NULL)
	{
		if (current ->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}

		count++;
		current = current->next;
	}
	printf("\n");
	return (count);
}
