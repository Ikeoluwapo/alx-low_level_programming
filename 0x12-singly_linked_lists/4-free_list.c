#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - to free the space
 * @head: pointing to head
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *temp;

	{
		while (head != NULL)
		{
			temp = head;

			head = head->next;
			free(temp->str);
			free(temp->next);
			free(temp);
		}
	}
}
