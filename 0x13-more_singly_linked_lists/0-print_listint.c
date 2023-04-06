#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include "lists.h"

/**
 * print_listint - to print all elements in listint_t
 * @h: pointing to head
 * Return: list
 */

size_t print_listint(const listint_t *h)
{
	size_t list = 0;

	const listint_t *current = h;

	while (current != NULL)
	{
		if (current->n != 0)
		{
			printf("%d\n", current->n);
		}
		list++;
		current = current->next;
	}
	return (list);
}
