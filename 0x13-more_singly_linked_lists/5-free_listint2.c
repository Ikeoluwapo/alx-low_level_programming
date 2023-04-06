#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_listint2 - to free the space
 * @head: pointing to head
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;
	{
		while (head == NULL)
		{
			temp = *head;

			free(temp);
		}
	}
	*head = NULL;
}
