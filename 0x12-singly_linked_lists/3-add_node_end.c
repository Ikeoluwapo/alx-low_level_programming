#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"


/**
 * add_node_end - to add node at the end
 * @str: string
 * @head: pointer to head
 * Return: new_node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	{
		new_node = malloc(sizeof(list_t));

		if (new_node == NULL)
		{
			return (NULL);
		}

		new_node->str = strdup(str);
		if (new_node->str == NULL)
		{
			free(new_node);
			return (NULL);
		}

		new_node->len = strlen(str);

		new_node->next = NULL;
		if (*head == NULL)
		{
			*head = new_node;
		}
		else
		{
			list_t *temp = *head;

			while (temp->next != NULL)
			{
				temp = temp->next;
			}
			temp->next = new_node;
		}
		return (new_node);
	}
}

/**
 * _strlen- to check length of string
 * @s: character
 *
 * Return: i
 */

unsigned int _strlen(const char *s)
{
	unsigned int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
