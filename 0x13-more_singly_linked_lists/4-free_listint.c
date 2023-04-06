#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_listint - free listint
 * @head: pointing to head
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;

		head = head->next;
		free(temp);
	}
}
